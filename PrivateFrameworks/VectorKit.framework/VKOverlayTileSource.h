//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTileSource.h>

@class NSArray, NSMutableArray;

@interface VKOverlayTileSource : VKTileSource
{
    VKTileSource *_tileSourceToMatch;
    NSMutableArray *_overlays;
}

- (void)_overlayBoundingMapRegionChanged:(id)arg1;
- (struct VKTileKey)sourceKeyForDownloadKey:(const struct _GEOTileKey *)arg1;
- (struct VKTileKey)nativeKeyForRenderKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (int)zEquivalenceClass;
- (unsigned int)maximumDownloadZoomLevel;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (BOOL)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (unsigned int)minimumDownloadZoomLevel;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)matchTilesFromSource:(id)arg1;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)minimumZoomLevelBoundsCamera;
- (void)addOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
- (int)maximumZoomLevel;
- (int)minimumZoomLevel;
- (int)tileSize;
- (void)dealloc;

@end

