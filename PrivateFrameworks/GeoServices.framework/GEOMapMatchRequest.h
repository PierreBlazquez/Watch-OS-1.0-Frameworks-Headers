//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOMapMatchRequest : PBRequest <NSCopying>
{
    NSMutableArray *_locations;
    NSMutableArray *_waypoints;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)waypointAtIndex:(unsigned int)arg1;
- (void)addWaypoint:(id)arg1;
- (void)clearLocations;
- (void)addLocation:(id)arg1;
@property(retain, nonatomic) NSMutableArray *waypoints; // @synthesize waypoints=_waypoints;
- (void)clearWaypoints;
- (unsigned int)waypointsCount;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
- (id)locationAtIndex:(unsigned int)arg1;
- (unsigned int)locationsCount;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
