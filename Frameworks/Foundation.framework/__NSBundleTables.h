//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary, NSMutableSet;

@interface __NSBundleTables : NSObject
{
    NSLock *_lock;
    NSMutableSet *_staticFrameworks;
    NSMutableSet *_loadedBundles;
    NSMutableSet *_loadedFrameworks;
    NSMutableDictionary *_resolvedPathToBundles;
    struct __CFDictionary *_bundleForClassMap;
}

+ (id)bundleTables;
- (void)finalize;
- (id)bundleForClass:(Class)arg1;
- (id)init;
- (void)dealloc;
- (id)addBundle:(id)arg1 forPath:(id)arg2;
- (void)addBundle:(id)arg1 type:(unsigned int)arg2;
- (id)bundleForPath:(id)arg1;
- (void)addStaticFrameworkBundles:(id)arg1;
- (id)loadedBundles;
- (void)setBundle:(id)arg1 forClass:(Class)arg2;
- (void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned int)arg3;
- (id)allFrameworks;
- (id)allBundles;

@end

