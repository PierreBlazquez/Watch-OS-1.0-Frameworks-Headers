//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOTileLoader : NSObject
{
}

+ (void)useLocalLoader;
+ (void)setDiskCacheLocation:(id)arg1;
+ (id)modernLoader;
+ (id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2;
+ (id)modernLoaderForTileGroupIdentifier:(unsigned int)arg1 locale:(id)arg2;
+ (id)sharedLoader;
+ (void)setMemoryCacheMinCapacity:(unsigned int)arg1;
+ (void)setMemoryCacheTotalCostLimit:(unsigned int)arg1;
+ (void)useRemoteLoader;
+ (id)singletonConfiguration;
+ (id)diskCacheLocation;
+ (void)setMemoryCacheCountLimit:(unsigned int)arg1;
+ (void)setTrackUsage:(BOOL)arg1;
+ (void)setServerProxyClass:(Class)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (BOOL)reprioritizeKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)expireTilesWithPredicate:(CDUnknownBlockType)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned int)arg4 callbackQ:(id)arg5 beginNetwork:(CDUnknownBlockType)arg6 callback:(CDUnknownBlockType)arg7;
- (void)registerTileDecoder:(id)arg1;
- (void)cancelAllForClient:(id)arg1;
- (void)setSortPoint:(const CDStruct_c3b9c2ee *)arg1;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (id)expireTilesWithType:(unsigned char)arg1 provider:(unsigned short)arg2 olderThan:(double)arg3;
- (void)preloadTiles:(id)arg1 requireWiFi:(BOOL)arg2 progress:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)loadTilesFromCache:(id)arg1 progress:(CDUnknownBlockType)arg2 finished:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(CDUnknownBlockType)arg2 finished:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)loadTiles:(id)arg1 progress:(CDUnknownBlockType)arg2 finished:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (id)renderDataForKey:(struct _GEOTileKey *)arg1 asyncHandler:(CDUnknownBlockType)arg2;
- (id)renderDataForKey:(struct _GEOTileKey *)arg1;
- (void)openDatabase;
- (void)closeDatabase;
- (void)_loadTiles:(id)arg1 options:(unsigned int)arg2 progress:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)cancelRequest:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)endPreloadSession;
- (id)cachedTileForKey:(const struct _GEOTileKey *)arg1;
- (id)internalDelegateQ;
- (void)setInternalDelegateQ:(id)arg1;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int networkHits;
@property(readonly, nonatomic) int diskHits;
@property(readonly, nonatomic) int memoryHits;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(BOOL)arg3;
- (void)clearAllCaches;

@end
