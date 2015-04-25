//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PLCloudPhotoLibraryManager, PLPhotoLibrary;

@interface PLCacheDeleteManager : NSObject
{
    _Bool _cancelRequested;
    NSObject<OS_dispatch_queue> *_pruneQueue;
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cloudManager;
}

+ (void)startService;
+ (id)staticInstance;
+ (void)setCloudManager:(id)arg1;
+ (void)deleteExpiredTrashBinObjects;
+ (void)setPhotoLibrary:(id)arg1;
- (id)debugEstimateForUrgency:(int)arg1;
- (void)debugPurge:(int)arg1 target:(long long)arg2;
- (id)debugFriendlyDictionary:(id)arg1;
- (id)localResourcesWithCloudMasters;
- (void)registerWithCacheDeleteService;
- (long long)_attemptToDeleteAtLeast:(long long)arg1 withUrgencyLevel:(int)arg2;
- (long long)attemptToDeleteAtLeast:(long long)arg1 fromResourcesArray:(id)arg2 withUrgencyLevel:(int)arg3;
- (long long)_attemptToDeleteAtLeast:(long long)arg1 fromTrashWithUrgencyLevel:(int)arg2;
- (id)cachedAssetsForUrgencyLevel:(int)arg1 includeOriginals:(BOOL)arg2;
- (long long)deleteBatchInCPLAndReportDeletedBytes:(id)arg1;
- (long long)combinedAssetsSize:(id)arg1;
- (id)deleteResourcesBatchAndReturnSuccessfullyDeletedAssets:(id)arg1;
- (id)assetsSubsetForUrgencyLevel:(int)arg1 fromBundle:(id)arg2 keepOriginals:(_Bool)arg3;
- (id)assetsAsResourceBundles;
- (id)assetsAsResourceBundlesWithManualVerification:(BOOL)arg1;
- (id)pruningOrder;
- (id)pruningFilters;
- (void)deleteExpiredTrashBinObjects;
- (BOOL)keepOriginalsEnabled;
- (BOOL)enabled;
- (id)init;

@end

