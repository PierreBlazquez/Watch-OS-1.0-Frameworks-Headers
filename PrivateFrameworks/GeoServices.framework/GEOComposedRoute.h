//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOMapAccessRestrictions.h"

@class GEOComposedWaypoint, GEOMapRegion, GEORoute, GEORouteDriveMapMatcher, GEORouteWalkMapMatcher, GEOZilchDecoder, NSArray, NSData, NSHashTable, NSMutableArray, NSString;

@interface GEOComposedRoute : NSObject <GEOMapAccessRestrictions>
{
    NSHashTable *_observers;
    NSData *_pointData;
    BOOL _usesZilch;
    GEOComposedWaypoint *_origin;
    GEOComposedWaypoint *_destination;
    NSArray *_legs;
    NSArray *_steps;
    NSString *_name;
    NSData *_routeID;
    unsigned int _expectedTime;
    unsigned int _distance;
    NSArray *_advisoryNotices;
    GEORoute *_geoRoute;
    NSArray *_maneuverDisplaySteps;
    BOOL _maneuverDisplayEnabled;
    unsigned int _currentDisplayStep;
    unsigned int _maneuverDisplayCount;
    double *_pointLengths;
    CDStruct_dc7a564b *_currentManeuverDisplayEndPoints;
    unsigned int _selectedLegIndex;
    unsigned int _firstVisiblePoint;
    GEOMapRegion *_boundingMapRegion;
    NSMutableArray *_sections;
    NSMutableArray *_snappedPaths;
    GEOZilchDecoder *_zilchDecoder;
    BOOL _allowsNetworkTileLoad;
    GEORouteDriveMapMatcher *_driveMapMatcher;
    GEORouteWalkMapMatcher *_walkMapMatcher;
}

- (CDStruct_c3b9c2ee)locationAtDistance:(double)arg1 from:(id)arg2;
- (id)routeMatchAtDistance:(double)arg1 from:(id)arg2 trackedLocation:(id)arg3 stopAtEndOfTunnel:(BOOL)arg4 stopAtEndOfManeuver:(BOOL)arg5 date:(id)arg6;
- (struct PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRouteCoordinate:(struct PolylineCoordinate)arg2;
- (double)distanceFromPoint:(struct PolylineCoordinate)arg1 toPoint:(struct PolylineCoordinate)arg2;
@property(readonly, nonatomic) NSArray *steps; // @synthesize steps=_steps;
- (unsigned int)stepIndexForPointIndex:(unsigned int)arg1;
- (BOOL)isSnapping;
- (id)getSnappedPathsForVisibleRect:(CDStruct_02837cd9)arg1 rectsToSnap:(CDStruct_02837cd9 *)arg2 rectsToSnapCount:(unsigned long)arg3 observer:(id)arg4;
- (struct PolylineCoordinate)coordinateAtOffset:(double)arg1;
@property(readonly, nonatomic) int transportType;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (BOOL)supportsSnapping;
@property(nonatomic) BOOL allowsNetworkTileLoad; // @synthesize allowsNetworkTileLoad=_allowsNetworkTileLoad;
@property(readonly, nonatomic) unsigned int stepsCount;
@property(nonatomic) BOOL maneuverDisplayEnabled; // @synthesize maneuverDisplayEnabled=_maneuverDisplayEnabled;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned int trafficColorOffsetsCount;
@property(readonly, nonatomic) GEORoute *geoRoute; // @synthesize geoRoute=_geoRoute;
@property(readonly, nonatomic) unsigned int maneuverDisplayCount; // @synthesize maneuverDisplayCount=_maneuverDisplayCount;
- (CDStruct_c3b9c2ee)pointAt:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int trafficColorsCount;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 startOffsetInPoints:(double)arg2 endOffsetInPoints:(double)arg3 roadWidthInPoints:(double)arg4;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1;
- (CDStruct_dc7a564b)maneuverDisplayEndpointsAtIndex:(unsigned long)arg1;
- (void)forEachSnappedPath:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned int currentDisplayStep; // @synthesize currentDisplayStep=_currentDisplayStep;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) unsigned int pointCount;
@property(readonly, nonatomic) unsigned int distance; // @synthesize distance=_distance;
- (id)initWithCompanionRoute:(id)arg1;
@property(nonatomic) unsigned int selectedLegIndex; // @synthesize selectedLegIndex=_selectedLegIndex;
@property(nonatomic) unsigned int firstVisiblePoint; // @synthesize firstVisiblePoint=_firstVisiblePoint;
@property(retain, nonatomic) NSArray *maneuverDisplaySteps; // @synthesize maneuverDisplaySteps=_maneuverDisplaySteps;
- (void)setupRoadSegmentIdsForRouteHintFromMatch:(id)arg1 distanceAhead:(double)arg2 roadSegmentIdGenerator:(CDUnknownBlockType)arg3 handler:(CDUnknownBlockType)arg4;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(BOOL)arg5;
- (BOOL)isLocationCoordinate:(CDStruct_c3b9c2ee)arg1 withinDistance:(double)arg2 alongRoute:(double)arg3 withTransportType:(int)arg4;
- (BOOL)checkDrivingArrivalForCoordinate:(CDStruct_c3b9c2ee)arg1 coordinateOnRoute:(CDStruct_c3b9c2ee)arg2 routePointIndex:(unsigned int)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(BOOL)arg6 checkDistanceAlongRoute:(BOOL)arg7 isOnRoute:(BOOL)arg8;
- (double)distanceBetweenStep:(id)arg1 andStep:(id)arg2;
- (id)zilchDataFromStepIndex:(unsigned int)arg1;
- (int)transportTypeForStep:(id)arg1;
- (double)approximateRoadWidthAtPointIndex:(unsigned int)arg1;
- (int)formOfWayAt:(unsigned int)arg1;
- (void)maneuverDisplayHasChanged;
- (void)notifyTrafficUpdated;
- (id)legForPointIndex:(unsigned int)arg1;
- (unsigned int)legIndexForStepIndex:(unsigned int)arg1;
- (unsigned int)legIndexForPointIndex:(unsigned int)arg1;
- (id)stepForPointIndex:(unsigned int)arg1;
- (double)distanceFromPointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
- (void)_addPaths:(id)arg1 forObserver:(id)arg2;
- (void)_snapPaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(CDStruct_02837cd9 *)arg3 rectsCount:(unsigned long)arg4;
- (BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(BOOL)arg5 maxDistance:(double)arg6;
- (id)_mapMatcherForTransportType:(int)arg1;
- (id)getSnappedPathsForLocation:(CDStruct_c3b9c2ee)arg1 observer:(id)arg2;
- (double)courseAtRouteCoordinateIndex:(unsigned int)arg1;
- (struct PolylineCoordinate)_findRouteCoordinateWithOffset:(float)arg1 aPos:(const Matrix_8746f91e *)arg2 aCoord:(const struct PolylineCoordinate *)arg3 bCoord:(const struct PolylineCoordinate *)arg4 pointOnSegment:(const Matrix_8746f91e *)arg5 bounds:(const CDStruct_02837cd9 *)arg6;
- (id)initWithRoute:(id)arg1;
- (void)getFormOfWay:(int *)arg1 roadClass:(int *)arg2 at:(unsigned int)arg3;
- (id)legForStepIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *legs; // @synthesize legs=_legs;
- (CDStruct_c3b9c2ee)pointAtRouteCoordinate:(struct PolylineCoordinate)arg1;
- (_Bool)_needsCornerOffsetAt:(unsigned int)arg1;
- (struct PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned int)arg2;
@property(readonly, nonatomic) void *controlPoints;
- (void)_buildPointSections;
- (void)_initializeManeuverDisplaySteps;
- (id)routeLegOfType:(int)arg1 startStepIndex:(unsigned int)arg2 steps:(id)arg3 startPointIndex:(unsigned int)arg4 legPointCount:(unsigned int)arg5;
@property(nonatomic) unsigned int historicTravelTime;
@property(readonly, nonatomic) NSArray *routeNames;
@property(retain, nonatomic) NSArray *advisoryNotices; // @synthesize advisoryNotices=_advisoryNotices;
@property(readonly, nonatomic) BOOL hasHistoricTravelTime;
@property(readonly, nonatomic) BOOL hasExpectedTime;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned int)arg1;
- (double)remainingTimeAlongRouteFromStepIndex:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingDistanceAlongRouteFromStepIndex:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (double)distanceBetweenRoutePointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
- (double)distanceBetweenLocation:(CDStruct_c3b9c2ee)arg1 nextPointIndex:(unsigned int)arg2 toPointIndex:(unsigned int)arg3;
- (id)stepAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
- (void)removeObserver:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) int routeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

