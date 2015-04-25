//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface SBFMappedImageCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    NSMutableDictionary *_images;
    NSMutableSet *_allKeys;
}

+ (id)wallpaperCache;
- (void)warmupImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1 generateImageWithBlockIfNecessary:(CDUnknownBlockType)arg2;
- (id)imageForKey:(id)arg1 options:(int)arg2 generateImageWithBlockIfNecessary:(CDUnknownBlockType)arg3;
- (id)imageForKey:(id)arg1 options:(int)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;
- (void)removeImageForKey:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (void)removeAllObjects;
- (void)dealloc;
- (id)allKeys;

@end

