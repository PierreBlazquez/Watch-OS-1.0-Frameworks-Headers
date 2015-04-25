//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSObject<OS_dispatch_queue>, NSString;

@interface CPBitmapStore : NSObject
{
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    BOOL _lockOnRead;
}

- (id)_versionPath;
- (id)imagePath;
- (void)removeImagesInGroups:(id)arg1;
- (void)commitTxn;
- (struct CGImage *)copyImageForKey:(id)arg1;
@property(nonatomic) unsigned int cacheItemLimit;
- (struct CGImage *)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 format:(int)arg4 scale:(float)arg5 fillMem:(CDUnknownBlockType)arg6 alternateCompletion:(CDUnknownBlockType)arg7;
- (BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (unsigned int)memContentOffset;
@property(nonatomic) BOOL lockOnRead; // @synthesize lockOnRead=_lockOnRead;
- (void *)openAndMmap:(id)arg1 withInfo:(struct _img *)arg2;
- (BOOL)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (id)cacheNumberForKey:(id)arg1;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;
- (unsigned int)imageCount;
- (void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(float)arg5 data:(id)arg6;
- (struct CGImage *)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(float)arg5 draw:(CDUnknownBlockType)arg6;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(float)arg5 data:(id)arg6;
- (void)removeImagesInGroups:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(BOOL)arg3 image:(struct CGImage *)arg4;
- (struct CGImage *)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)purge;
- (id)initWithPath:(id)arg1 version:(int)arg2;
@property(readonly, nonatomic) int version;
- (int)setVersion:(int)arg1;
- (void)commitTransaction;
- (void)dealloc;
- (id)allGroups;

@end

