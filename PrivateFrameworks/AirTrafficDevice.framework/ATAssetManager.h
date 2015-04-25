//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATAssetLinkControllerObserver.h"
#import "ATMessageLinkRequestHandler.h"

@class NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface ATAssetManager : NSObject <ATAssetLinkControllerObserver, ATMessageLinkRequestHandler>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_assetClients;
    NSDictionary *_legacyAssetClients;
    NSMutableSet *_allAssets;
    NSMutableDictionary *_remainingAssetsByDataClass;
    NSMutableDictionary *_totalAssetCountByDataClass;
    NSHashTable *_observers;
    NSMutableArray *_assets;
    NSMutableDictionary *_assetsByDataclass;
    NSMutableDictionary *_assetsByStoreID;
    NSMutableArray *_completedStoreAssets;
    unsigned int _completedAssets;
    unsigned int _totalAssetCount;
    NSObject<OS_dispatch_source> *_signalSource;
}

+ (id)sharedInstance;
- (id)assets;
- (BOOL)dataclassIsEmpty:(id)arg1;
- (unsigned int)completedAssetCountForDataClasses:(id)arg1;
- (unsigned int)remainingRestoreAssetCountForDataClasses:(id)arg1;
- (unsigned int)remainingSyncAssetCountForDataClasses:(id)arg1;
- (id)restoreAssetsForDataclasses:(id)arg1;
- (id)assetsForDataclasses:(id)arg1;
- (id)bypassedRestoresForDataclass:(id)arg1;
- (id)storeAssetsForDataclass:(id)arg1;
- (id)completedStoreAssets;
- (id)allDataclasses;
- (id)assetForDataclass:(id)arg1 identifier:(id)arg2;
- (id)assetForStoreID:(long long)arg1;
- (void)mapStoreIDToAsset:(id)arg1;
- (unsigned int)awaitingStoreCompletion;
- (unsigned int)currentAsset;
- (void)_updateAsset:(id)arg1 withProgress:(float)arg2;
- (id)assetProgressForAllDataclasses;
- (unsigned int)totalAssetCount;
- (void)cancelAssetForDataClass:(id)arg1 withIdentifier:(id)arg2;
- (void)prioritizeAssetForDataClass:(id)arg1 withIdentifier:(id)arg2;
- (void)enqueueLegacyAssetsForDataClass:(id)arg1;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (unsigned int)totalAssetCountForDataClasses:(id)arg1;
- (id)restoreAssetsForDataclass:(id)arg1;
- (unsigned int)totalAssetCountForDataclass:(id)arg1;
- (unsigned int)currentAssetForDataclass:(id)arg1;
- (id)_assetForDataclass:(id)arg1 withIdentifier:(id)arg2;
- (void)_finishAsset:(id)arg1 forDataClass:(id)arg2;
- (void)_addAssets:(id)arg1 forDataClass:(id)arg2;
- (void)_finishDataClassIfDone:(id)arg1;
- (id)legacyAssetsForDataClass:(id)arg1;
- (void)_dumpStatusInformation;
- (void)_loadAssetClients;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)addObserver:(id)arg1;
- (void).cxx_destruct;
- (void)reset;
- (void)removeObserver:(id)arg1;
- (BOOL)isEmpty;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

