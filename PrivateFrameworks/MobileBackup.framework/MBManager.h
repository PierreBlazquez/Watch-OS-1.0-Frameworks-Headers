//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<MBManagerDelegate>;

@interface MBManager : NSObject
{
    id _delegate;
}

- (id)domainInfoForName:(id)arg1;
- (BOOL)discountCameraRollQuota;
- (BOOL)countCameraRollQuota;
- (id)initWithDelegate:(id)arg1;
- (void)rebootDevice;
- (BOOL)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id *)arg2;
- (BOOL)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id *)arg2;
- (BOOL)allowiTunesBackup;
- (void)setAllowiTunesBackup:(BOOL)arg1;
- (int)getLogLevel;
- (id)restoreInfo;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 activeAppleID:(id *)arg3 error:(id *)arg4;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id *)arg5;
- (BOOL)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id *)arg6;
- (BOOL)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id *)arg6;
- (void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2;
- (BOOL)isBackupEnabledForDomainName:(id)arg1;
- (BOOL)removeDomainName:(id)arg1 error:(id *)arg2;
- (id)domainInfoList;
- (unsigned long long)nextBackupSize;
- (BOOL)startScanWithError:(id *)arg1;
- (BOOL)deleteBackupUDID:(id)arg1 error:(id *)arg2;
- (void)cancelRestore;
- (void)insufficientFreeSpaceToRestore;
- (void)finishRestore;
- (BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id *)arg2;
- (BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 context:(id)arg3 error:(id *)arg4;
- (BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id *)arg3;
- (void)restoreFileWithPath:(id)arg1;
- (BOOL)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (BOOL)restoreFileWithPath:(id)arg1 error:(id *)arg2;
- (BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 error:(id *)arg3;
- (void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2;
- (id)dateOfNextScheduledBackup;
- (id)dateOfLastBackup;
- (void)prioritizeRestoreFileWithPath:(id)arg1;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 error:(id *)arg4;
- (id)restoreFilesForDomain:(id)arg1 error:(id *)arg2;
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long *)arg2;
- (BOOL)restoreFileExistsWithPath:(id)arg1;
- (id)restoreState;
- (id)filesForSnapshotID:(unsigned int)arg1 backupUDID:(id)arg2 error:(id *)arg3;
- (BOOL)startBackupWithError:(id *)arg1;
- (void)startBackup;
- (unsigned int)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2;
- (id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(struct _NSRange)arg3;
- (BOOL)recordRestoreFailure:(id)arg1 error:(id *)arg2;
- (id)getBackupListWithFiltering:(BOOL)arg1 error:(id *)arg2;
- (id)getBackupListWithError:(id *)arg1;
- (id)backupList;
- (id)backupState;
- (void)syncBackupEnabled;
- (void)setBackupEnabled:(BOOL)arg1;
- (BOOL)isBackupEnabled;
- (BOOL)setupBackupWithPasscode:(id)arg1 error:(id *)arg2;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;
- (id)_init;
@property(nonatomic) NSObject<MBManagerDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)cancel;
- (void)setLogLevel:(int)arg1;

@end

