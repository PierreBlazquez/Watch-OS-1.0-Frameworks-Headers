//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKLRUCacheDelegate.h"
#import "VKTileSourceClient.h"

@class GEOResourceManifestConfiguration, GEOTileKeyList, NSArray, NSLocale, NSMutableSet, NSSet, NSString, VKMapRasterizer, VKStyleManager, VKTileCache, VKTileKeyList, VKTileSelection, VKTileSource, VKTimer, _VKTileProviderTimerTarget;

@interface VKTileProvider : NSObject <VKLRUCacheDelegate, VKTileSourceClient>
{
    id <VKTileProviderClient> _client;
    int _mode;
    VKTileSelection *_tileSelection;
    VKTileKeyList *_keysInView;
    VKTileKeyList *_neighborKeys;
    VKTileKeyList *_prefetchKeys;
    VKTimer *_evaluationTimer;
    VKTimer *_prefetchTimer;
    NSMutableSet *_tilesToRender;
    NSArray *_holes;
    NSMutableSet *_lostTiles;
    NSMutableSet *_fallbackTiles;
    NSMutableSet *_neighborTiles;
    unsigned int _neighborMode;
    BOOL _fallbackEnabled;
    BOOL _prefetchEnabled;
    VKTileCache *_tilePool;
    VKTileSource *_tilesSources[34];
    VKTileSource *_optionalTileSources[34];
    VKStyleManager *_styleManager;
    float _loadingProgress;
    BOOL _hasFailedTile;
    BOOL _finishedLoading;
    struct VKCameraState _lastCameraState;
    struct CGSize _lastCanvasSize;
    BOOL _tilesChanged;
    VKMapRasterizer *_rasterizer;
    id <VKMapLayer> _debugLayer;
    GEOTileKeyList *_debugLayerKeys;
    unsigned int _tileReserveLimit;
    unsigned int _tileMaximumLimit;
    unsigned int _prefetchNumberOfScreens;
    BOOL _useSmallTileCache;
    float _lastMidDisplayZoomLevel;
    CDStruct_34734122 _sortPoint;
    float _contentScale;
    vector_a2f7343e _exclusionAreas;
    BOOL _exclusionAreaVisible;
    _VKTileProviderTimerTarget *_evaluationTarget;
    _VKTileProviderTimerTarget *_prefetchTarget;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
}

@property(retain, nonatomic) id <VKMapLayer> debugLayer; // @synthesize debugLayer=_debugLayer;
@property(nonatomic) BOOL useSmallTileCache; // @synthesize useSmallTileCache=_useSmallTileCache;
@property(nonatomic, getter=isFallbackEnabled) BOOL fallbackEnabled; // @synthesize fallbackEnabled=_fallbackEnabled;
- (void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const struct VKTileKey *)arg3;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const CDStruct_aca18c62 *)arg2 level:(int)arg3;
- (BOOL)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey *)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey *)arg3;
- (BOOL)tileSourceMayUseNetwork:(id)arg1;
- (void)_dirtyTile:(id)arg1 source:(id)arg2 layer:(unsigned long long)arg3;
- (void)changeTileForKey:(const struct VKTileKey *)arg1 toState:(unsigned int)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned long long)arg5;
- (unsigned long long)layerForSource:(id)arg1;
- (void)_updateTimers:(int)arg1;
- (id)selectTiles:(int *)arg1 needRasterization:(char *)arg2;
- (void)retireNeighborTiles:(id)arg1;
- (void)_fillHoles:(id)arg1 context:(id)arg2;
- (void)retireRenderTiles:(id)arg1;
- (BOOL)evaluateNeighborTileForRendering:(id)arg1;
- (BOOL)evaluateSelectedTileForRendering:(id)arg1;
- (void)releaseChildrenFallbackTilesForTile:(id)arg1 context:(id)arg2;
- (BOOL)releaseParentFallbackTileForTile:(id)arg1;
- (void)releaseFallbackTileForRendering:(id)arg1;
- (void)_prefetchTiles;
- (void)_fetchAvailableTiles:(BOOL)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (void)_resizeCache;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (void)tileSourcesDidChange;
- (void)releaseNeighborTileForRendering:(id)arg1;
- (BOOL)inFailedState:(id)arg1;
- (BOOL)tileMatters:(id)arg1;
- (void)releaseTileForRendering:(id)arg1;
- (BOOL)hasRequiredTileData:(id)arg1;
- (void)prepareTileForRendering:(id)arg1;
- (void)foreachOptionalLayer:(CDUnknownBlockType)arg1;
- (void)describeTilesFromList:(id)arg1 output:(id)arg2;
- (BOOL)canRenderTile:(id)arg1;
- (void)cancelLoadForMapTile:(id)arg1;
- (void)_disableTimers;
@property(nonatomic) id <VKTileProviderClient> client; // @synthesize client=_client;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned int)arg2;
- (void)configureTileSelection;
- (BOOL)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(const struct VKCacheKey *)arg3;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (id)sourceForLayer:(id)arg1;
- (void)setTileExclusionAreas:(const vector_a2f7343e *)arg1;
@property(readonly, nonatomic) GEOTileKeyList *debugLayerKeys; // @synthesize debugLayerKeys=_debugLayerKeys;
@property(readonly, nonatomic) VKTileKeyList *neighborKeys; // @synthesize neighborKeys=_neighborKeys;
@property(readonly, nonatomic) VKTileKeyList *keysInView; // @synthesize keysInView=_keysInView;
- (BOOL)tileExclusionAreaVisible;
- (void)quiesce;
@property(readonly, nonatomic) float loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(readonly, nonatomic) BOOL hasFailedTile; // @synthesize hasFailedTile=_hasFailedTile;
@property(readonly, nonatomic, getter=isFinishedLoading) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(readonly, nonatomic) NSSet *neighborTiles; // @synthesize neighborTiles=_neighborTiles;
- (void)foreachActiveLayer:(CDUnknownBlockType)arg1;
- (void)cancelLoadingTiles;
@property(readonly, nonatomic) NSSet *tilesToRender; // @synthesize tilesToRender=_tilesToRender;
- (void)requireRasterization:(id)arg1;
@property(nonatomic) double lodBias;
- (void)updateWithContext:(id)arg1;
- (id)initWithClient:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3;
- (void)removeTileSourceForMapLayer:(unsigned long long)arg1;
- (void)setTileSource:(id)arg1 forMapLayer:(unsigned long long)arg2 optional:(BOOL)arg3;
@property(nonatomic, getter=isPrefetchEnabled) BOOL prefetchEnabled; // @synthesize prefetchEnabled=_prefetchEnabled;
- (void)flushCaches:(BOOL)arg1;
@property(nonatomic) unsigned int neighborMode; // @synthesize neighborMode=_neighborMode;
- (id)detailedDescription;
- (void)clearScene;
@property(retain, nonatomic) VKStyleManager *styleManager; // @synthesize styleManager=_styleManager;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void).cxx_destruct;
@property(nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
- (id).cxx_construct;
- (void)timerFired:(id)arg1;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

