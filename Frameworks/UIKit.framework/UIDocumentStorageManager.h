//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMetadataQuery, NSMutableSet, NSObject<OS_dispatch_queue>, NSURL, _UIDocumentStorage;

@interface UIDocumentStorageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_ivarQueue;
    _UIDocumentStorage *_storage;
    NSMutableSet *_observers;
    NSMetadataQuery *_query;
    NSDictionary *_identifiersToURLMap;
    NSURL *_defaultURL;
}

+ (void)requestSharedManager:(CDUnknownBlockType)arg1;
- (void)updateObserver:(id)arg1 withSortDescriptors:(id)arg2;
- (id)observeContentsOfUbiquitousContainersWithIdentifiers:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)observeContentsOfDirectory:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (void)willMoveURL:(id)arg1 toURL:(id)arg2;
- (void)willRemoveURL:(id)arg1;
- (void)willAddURL:(id)arg1;
- (void)_storeUserICloudChoice:(BOOL)arg1 forIdentityToken:(id)arg2;
- (void)_appActivated:(id)arg1;
- (id)_identifierToURLMap;
@property(readonly) BOOL usesUbiquitousStorage;
- (id)_observeContentsOfDirectories:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (void)_queryUpdated;
- (void)_updateObservers;
- (void)_initialGatherFinished;
- (id)_userICloudChoiceArray;
- (void)_resetQuery;
- (void)_setStorage:(id)arg1;
- (void)_loadUserICloudChoiceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_finishSetupWithDecision:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_userICloudChoiceForIdentityToken:(id)arg1;
@property(readonly) NSURL *dataStorageURL;
- (void)runSetupProcessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_ubiquityIdentityTokenChanged;
- (id)_initWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSURL *documentStorageURL;
- (id)_queryResults;
- (void)removeObserver:(id)arg1;
- (id)init;

@end

