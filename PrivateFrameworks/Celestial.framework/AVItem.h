//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVItem : NSObject
{
    struct AVItemPrivate *_priv;
}

+ (id)avItemWithPath:(id)arg1 error:(id *)arg2;
+ (id)avItem;
- (id)errorLog;
- (id)accessLog;
- (void)setVolume:(float)arg1;
- (float)volume;
- (int)eqPreset;
- (void)cancelDownload;
- (long)downloadStatus;
- (float)downloadProgress;
- (long)beginDownloading;
- (void *)downloadThread;
- (id)chapterImageForImageID:(int)arg1;
- (int)_instantiateItem;
- (id)urlFromPath:(id)arg1;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(int)arg3;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(int)arg4;
- (id)formatDetailsForTracks;
- (void)stopDownload;
- (BOOL)setPath:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id *)arg1;
- (struct CGSize)naturalSize;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)path;
- (id)url;
- (double)duration;
- (id)init;
- (void)dealloc;
- (id)attributeForKey:(id)arg1;
- (void)setEQPreset:(int)arg1;

@end

