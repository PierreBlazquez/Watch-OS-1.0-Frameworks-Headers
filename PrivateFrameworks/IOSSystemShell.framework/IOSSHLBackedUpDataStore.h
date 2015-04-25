//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSApplicationDataStore, NSString;

@interface IOSSHLBackedUpDataStore : NSObject
{
    BKSApplicationDataStore *_dataStore;
    NSString *_bundleID;
}

+ (id)applicationsWithAvailableStores;
+ (id)storeForApplication:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2 andBundleID:(id)arg3 isArchived:(BOOL)arg4;
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)archivedObjectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)archivedObjectForKey:(id)arg1;
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)initWithBundleID:(id)arg1;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;

@end

