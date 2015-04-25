//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetDownloadSessionInternal, NSError, NSURL;

@interface AVAssetDownloadSession : NSObject
{
    AVAssetDownloadSessionInternal *_internal;
}

+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
- (void)finalize;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) int status;
- (void)pause;
- (void)stop;
@property(readonly, nonatomic) int priority;
- (void)start;
@property(readonly, nonatomic) NSURL *URL;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) NSURL *destinationURL;
- (void)_primeCacheOnDispatchQueue;
- (id)_figPlaybackItemNotificationNames;
- (id)_figAssetNotificationNames;
- (void)_addFigPlaybackItemListeners;
- (void)_addFigAssetListeners;
@property(readonly, nonatomic) unsigned long long availableFileSize;
- (void)_transitionToTerminalStatus:(int)arg1 error:(id)arg2;
- (long)_readyForInspection;
- (long)_primeCache;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)_removeFigPlaybackItemListeners;
- (void)_removeFigAssetListeners;
- (BOOL)_setFigAsset:(struct OpaqueFigAsset *)arg1;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;
- (id)_weakReference;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (struct OpaqueFigAsset *)_figAsset;

@end

