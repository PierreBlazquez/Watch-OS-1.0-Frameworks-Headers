//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset
{
    AVAssetProxyInternal *_assetProxy;
}

+ (id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2;
+ (id)assetProxyWithPropertyList:(id)arg1;
- (id)tracks;
- (void)finalize;
- (BOOL)isProxy;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader *)_formatReader;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (struct OpaqueFigAsset *)_figAsset;

@end

