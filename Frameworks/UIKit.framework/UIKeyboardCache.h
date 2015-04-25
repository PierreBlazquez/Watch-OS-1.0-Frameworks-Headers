//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPBitmapStore, NSSet;

@interface UIKeyboardCache : NSObject
{
    CPBitmapStore *_store;
    NSSet *_layouts;
    BOOL _isCommitting;
}

+ (BOOL)enabled;
+ (id)sharedInstance;
- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (void)displayView:(id)arg1 fromLayout:(id)arg2;
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;
- (void)displayView:(id)arg1 imageWidth:(float)arg2 fromLayout:(id)arg3;
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;
- (void)updateCacheForInputModes:(id)arg1;
- (void)clearNonPersistentCache;
- (void)commitTransaction;
- (id)init;
- (void)dealloc;

@end

