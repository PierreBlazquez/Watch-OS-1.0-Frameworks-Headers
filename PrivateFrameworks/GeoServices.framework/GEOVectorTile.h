//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOFeatureStyleAttributes, NSData, NSMutableArray, NSMutableData, NSMutableOrderedSet;

@interface GEOVectorTile : NSObject
{
    struct _GEOTileKey _key;
    GEOFeatureStyleAttributes *_attributes;
    CDStruct_153464bf *_lines;
    unsigned int _linesCount;
    unsigned int _linesVertexCount;
    CDStruct_153464bf *_coastlines;
    unsigned int _coastlinesCount;
    CDStruct_00eae55f *_polygons;
    unsigned int _polygonsCount;
    unsigned int _polygonsVertexCount;
    CDStruct_b2fbf00d *_polygonLabelPositions;
    unsigned int _polygonLabelPositionsCount;
    CDStruct_f5d783cd *_buildingFootprints;
    NSMutableData *_extrusionHeightsPool;
    NSMutableData *_baseHeightsPool;
    unsigned int _buildingFootprintsCount;
    CDStruct_f5d783cd *_hiResBuildingFootprints;
    unsigned int _hiResBuildingFootprintsCount;
    CDStruct_f31c98c6 *_threeDBuildings;
    unsigned int _threeDBuildingsCount;
    struct {
        char _field1;
        unsigned int _field2;
        id *_field3;
    } *_extendedPointAttributes;
    unsigned int _extendedPointAttributesCount;
    CDStruct_1da44d83 *_pois;
    unsigned int _poisCount;
    CDStruct_f6a177db *_overpasses;
    CDStruct_dde70fb6 *_junctions;
    unsigned int _junctionsCount;
    BOOL _hasComputedJunctions;
    CDStruct_7523a67d *_laneConnections;
    unsigned int _laneConnectionsCount;
    CDStruct_7523a67d *_pointsOnRoad;
    unsigned int _pointsOnRoadCount;
    CDStruct_183601bc **_sortedPointsOnRoad;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
    } *_laneGeometry;
    CDStruct_01d7e690 *_curveLineVertices;
    unsigned int *_curveToLineMapping;
    CDStruct_01d7e690 *_lineVertices;
    CDStruct_01d7e690 *_polygonVertices;
    CDStruct_01d7e690 *_coastlineVertices;
    CDStruct_01d7e690 *_footprintVertices;
    CDStruct_01d7e690 *_hiResFootprintVertices;
    NSData *_labelPool;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        char *_field3;
    } *_labelPoolLanguages;
    unsigned int _labelPoolLanguagesLength;
    NSMutableData *_localizedLabelPool;
    char *_localizedLabelsLanguage;
    CDStruct_29923528 *_labelIndex;
    unsigned int _labelIndexCount;
    struct GEOFeatureShield *_shieldIndex;
    unsigned int _shieldIndexCount;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned char _field3;
    } *_localizationTable;
    unsigned int _localizationTableCount;
    NSMutableOrderedSet *_uniqueAttributes;
    NSMutableArray *_uniqueFeatureAttributes;
    CDStruct_dab2d0bd *_lineCharacteristicPoints;
    unsigned int _lineCharacteristicPointCount;
    CDStruct_dab2d0bd *_polygonCharacteristicPoints;
    unsigned int _polygonCharacteristicPointCount;
    CDStruct_dab2d0bd *_coastlineCharacteristicPoints;
    unsigned int _coastlineCharacteristicPointCount;
    unsigned int _tileReferenceCount;
    struct _GEOTileKey *_tileReferences;
}

@property(readonly, nonatomic) unsigned int threeDBuildingsCount; // @synthesize threeDBuildingsCount=_threeDBuildingsCount;
@property(readonly, nonatomic) CDStruct_f31c98c6 *threeDBuildings; // @synthesize threeDBuildings=_threeDBuildings;
- (void)forEachRoad:(CDUnknownBlockType)arg1;
- (CDStruct_183601bc **)sortedPointsOnRoad;
- (id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (void)forEachEdgeInRoad:(CDStruct_153464bf *)arg1 visitTwice:(BOOL)arg2 visitor:(CDUnknownBlockType)arg3;
- (void)forEachEdgeOnJunction:(const CDStruct_dde70fb6 *)arg1 visitor:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CDStruct_f6a177db *overpasses; // @synthesize overpasses=_overpasses;
@property(readonly, nonatomic) CDStruct_dde70fb6 *junctions; // @synthesize junctions=_junctions;
@property(readonly, nonatomic) CDStruct_7523a67d *pointsOnRoad; // @synthesize pointsOnRoad=_pointsOnRoad;
@property(readonly, nonatomic) unsigned int junctionsCount; // @synthesize junctionsCount=_junctionsCount;
@property(readonly, nonatomic) CDStruct_01d7e690 *lineVertices;
@property(readonly, nonatomic) struct _GEOTileKey tileKey; // @synthesize tileKey=_key;
@property(readonly, nonatomic) CDStruct_153464bf *coastlines; // @synthesize coastlines=_coastlines;
@property(readonly, nonatomic) unsigned int coastlinesCount; // @synthesize coastlinesCount=_coastlinesCount;
@property(readonly, nonatomic) CDStruct_00eae55f *polygons; // @synthesize polygons=_polygons;
@property(readonly, nonatomic) unsigned int polygonsCount; // @synthesize polygonsCount=_polygonsCount;
@property(readonly, nonatomic) CDStruct_153464bf *lines; // @synthesize lines=_lines;
@property(readonly, nonatomic) unsigned int linesCount; // @synthesize linesCount=_linesCount;
@property(readonly, nonatomic) CDStruct_1da44d83 *pois; // @synthesize pois=_pois;
@property(readonly, nonatomic) unsigned int poisCount; // @synthesize poisCount=_poisCount;
@property(readonly, nonatomic) unsigned int buildingFootprintsCount; // @synthesize buildingFootprintsCount=_buildingFootprintsCount;
@property(readonly, nonatomic) CDStruct_f5d783cd *buildingFootprints; // @synthesize buildingFootprints=_buildingFootprints;
- (BOOL)_readExtendedPointAttributes:(CDStruct_b123d8da *)arg1;
- (BOOL)_readTileReferences:(CDStruct_b123d8da *)arg1 key:(const struct _GEOTileKey *)arg2;
- (BOOL)_readHighResBuildings:(CDStruct_b123d8da *)arg1;
- (BOOL)_read3DBuildings:(CDStruct_b123d8da *)arg1;
- (BOOL)_readCoastlines:(CDStruct_b123d8da *)arg1;
- (BOOL)_readPolygons:(CDStruct_b123d8da *)arg1;
- (BOOL)_readLines:(CDStruct_b123d8da *)arg1;
- (BOOL)_readPois:(CDStruct_b123d8da *)arg1;
- (BOOL)_readLabels:(CDStruct_b123d8da *)arg1;
- (BOOL)_readInfoChapter:(CDStruct_b123d8da *)arg1 key:(const struct _GEOTileKey *)arg2;
- (BOOL)_handleGenericTile:(CDStruct_b123d8da *)arg1;
- (BOOL)_addGenericPolygonWithAttributes:(int *)arg1;
- (BOOL)_readModernBuildings:(CDStruct_b123d8da *)arg1 chapter:(unsigned short)arg2 vertexPool:(CDStruct_183601bc **)arg3 footprints:(CDStruct_183601bc **)arg4 count:(unsigned int *)arg5;
- (BOOL)_readSimpleCoastlines:(CDStruct_ef964b09 *)arg1 tile:(CDStruct_b123d8da *)arg2;
- (BOOL)_readWrappingCoastlines:(CDStruct_ef964b09 *)arg1 tile:(CDStruct_b123d8da *)arg2;
- (BOOL)_readLowResBuildings:(CDStruct_b123d8da *)arg1;
- (BOOL)_readPolygons:(CDStruct_b123d8da *)arg1 ofType:(unsigned short)arg2;
- (id)addAttributes:(id)arg1 toUniqueAttributeSet:(id)arg2;
- (unsigned int)_makeSpaceForShields:(unsigned int)arg1;
- (unsigned int)_makeSpaceForLabels:(unsigned int)arg1;
@property(readonly, nonatomic) struct _GEOTileKey *tileReferences; // @synthesize tileReferences=_tileReferences;
@property(readonly, nonatomic) unsigned int tileReferenceCount; // @synthesize tileReferenceCount=_tileReferenceCount;
@property(readonly, nonatomic) unsigned int coastlineCharacteristicPointCount; // @synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount;
@property(readonly, nonatomic) CDStruct_dab2d0bd *coastlineCharacteristicPoints; // @synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints;
@property(readonly, nonatomic) unsigned int polygonCharacteristicPointCount; // @synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount;
@property(readonly, nonatomic) CDStruct_dab2d0bd *polygonCharacteristicPoints; // @synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints;
@property(readonly, nonatomic) unsigned int lineCharacteristicPointCount; // @synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount;
@property(readonly, nonatomic) CDStruct_dab2d0bd *lineCharacteristicPoints; // @synthesize lineCharacteristicPoints=_lineCharacteristicPoints;
@property(readonly, nonatomic) unsigned int laneConnectionsCount; // @synthesize laneConnectionsCount=_laneConnectionsCount;
@property(readonly, nonatomic) CDStruct_7523a67d *laneConnections; // @synthesize laneConnections=_laneConnections;
@property(readonly, nonatomic) unsigned int pointsOnRoadCount; // @synthesize pointsOnRoadCount=_pointsOnRoadCount;
@property(readonly, nonatomic) BOOL hasComputedJunctions; // @synthesize hasComputedJunctions=_hasComputedJunctions;
@property(readonly, nonatomic) unsigned int hiResBuildingFootprintsCount; // @synthesize hiResBuildingFootprintsCount=_hiResBuildingFootprintsCount;
@property(readonly, nonatomic) CDStruct_f5d783cd *hiResBuildingFootprints; // @synthesize hiResBuildingFootprints=_hiResBuildingFootprints;
- (CDStruct_153464bf *)multiSectionFeatureForGeoID:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL dataIncludesConnectivity;
@property(readonly, nonatomic) unsigned int polygonsVertexCount; // @synthesize polygonsVertexCount=_polygonsVertexCount;
@property(readonly, nonatomic) unsigned int linesVertexCount; // @synthesize linesVertexCount=_linesVertexCount;
- (void)forEachJunctionInRoad:(CDStruct_153464bf *)arg1 visitor:(CDUnknownBlockType)arg2;
- (void)forEachJunction:(CDUnknownBlockType)arg1;
- (void)forEachPolygon:(CDUnknownBlockType)arg1;
- (void)forEachPoint:(CDUnknownBlockType)arg1;
- (CDStruct_b2fbf00d *)polygonLabelPositions;
- (id)baseHeightsPool;
- (id)extrusionHeightsPool;
@property(readonly, nonatomic) CDStruct_01d7e690 *curveLineVertices;
- (void)_trimWhitespace;
- (void)_findOverpasses;
- (void)_findJunctions;
- (void)_attachRoadPoints;
- (id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (id)description;
- (void)dealloc;

@end

