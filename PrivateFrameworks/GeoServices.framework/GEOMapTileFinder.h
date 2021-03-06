//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess;

@interface GEOMapTileFinder : GEOMapRequest
{
    unsigned int _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileStyle;
    CDStruct_2c43369c _center;
    double _radius;
    CDUnknownBlockType _tileHandler;
    BOOL _isCanceling;
}

+ (id)realisticTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
+ (BOOL)supportsRealisticMap;
@property(readonly, nonatomic) unsigned int zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) GEOMapAccess *map;
@property(readonly, nonatomic) int tileStyle; // @synthesize tileStyle=_tileStyle;
@property(readonly, nonatomic) int tileScale; // @synthesize tileScale=_tileScale;
@property(copy, nonatomic) CDUnknownBlockType tileHandler; // @synthesize tileHandler=_tileHandler;
- (void)findTiles:(CDUnknownBlockType)arg1 excludingKey:(const struct _GEOTileKey *)arg2;
- (struct _GEOTileKey)_adjacentTileKey:(const struct _GEOTileKey *)arg1 dirX:(int)arg2 dirY:(int)arg3;
- (void)_fetchDataForKeys:(const unordered_set_2ba6858f *)arg1;
- (id)_initWithMap:(id)arg1 zoomLevel:(unsigned int)arg2 tileSize:(int)arg3 tileScale:(int)arg4 tileStyle:(int)arg5 center:(CDStruct_c3b9c2ee)arg6 radius:(double)arg7;
- (void)findTiles:(CDUnknownBlockType)arg1;
- (void)findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const Matrix_8746f91e *)arg2 tileHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) int tileSize; // @synthesize tileSize=_tileSize;
- (id).cxx_construct;
- (void)dealloc;
- (void)cancel;

@end

