//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOTileServerProxy.h>

#import "GEOResourceManifestTileGroupObserver.h"

@class GEODBReader, GEODBWriter, NSLock, NSMapTable, NSMutableArray, NSString;

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOResourceManifestTileGroupObserver>
{
    GEODBWriter *_dbWriter;
    GEODBReader *_dbReader;
    NSString *_cacheLocation;
    NSMapTable *_providers;
    NSMutableArray *_inProgress;
    NSLock *_inProgressLock;
}

- (void)tileRequesterFinished:(id)arg1;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)open;
- (id)userInfoForRequesterUserInfo:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unsigned int)arg3 eTag:(id)arg4;
- (void)_updateExpiringTilesets;
- (void)_registerBuiltInProviders;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)flushPendingWrites;
- (void)registerProvider:(Class)arg1;
- (void)calculateFreeableSize;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2;
- (void)loadTiles:(id)arg1 priorities:(unsigned int *)arg2 options:(unsigned int)arg3 client:(id)arg4;
- (void)cancel:(const struct _GEOTileKey *)arg1;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;
- (void)close;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

