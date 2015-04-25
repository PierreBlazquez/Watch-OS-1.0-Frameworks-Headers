//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PFUbiquityLocation;

@interface _PFUbiquityRecordsExporter : NSObject
{
    NSString *_localPeerID;
    NSDate *_lastTransactionDate;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_storeName;
    NSLock *_transactionLock;
    NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;
    BOOL _pendingTempLogMove;
    BOOL _allowTempLogStorage;
    BOOL _useLocalStorage;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _throwOptimisticLockingException;
}

- (id)description;
- (id)init;
- (void)dealloc;
@property(nonatomic) BOOL throwOptimisticLockingException; // @synthesize throwOptimisticLockingException=_throwOptimisticLockingException;
@property(nonatomic) BOOL useLocalStorage; // @synthesize useLocalStorage=_useLocalStorage;
@property(readonly, nonatomic) PFUbiquityLocation *localRootLocation; // @synthesize localRootLocation=_localRootLocation;
@property(nonatomic) BOOL allowTempLogStorage; // @synthesize allowTempLogStorage=_allowTempLogStorage;
@property(readonly, nonatomic) BOOL pendingTempLogMove; // @synthesize pendingTempLogMove=_pendingTempLogMove;
@property(retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
- (void)stopWatchingForChanges;
- (void)beginWatchingForChangesFromStore:(id)arg1;
@property(readonly, nonatomic) PFUbiquityLocation *currentRootLocation;
- (id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ubiquityRootLocation:(id)arg3 localRootLocation:(id)arg4 andProcessingQueue:(id)arg5;
- (void)moveLogsFromTempDirectory;
- (void)scheduleTempLogMove;
- (id)createDictionaryForObjectsInSaveNotification:(id)arg1 forTransactionOfType:(int)arg2 withExportContext:(id)arg3 andSaveSnapshot:(id)arg4;
- (BOOL)shouldRespondToSaveNotification:(id)arg1;
- (void)cleanUpFromRolledbackPendingTransaction:(id)arg1 withNotification:(id)arg2;
- (void)managedObjectContextDidSave:(id)arg1;
@property(retain) NSDate *lastTransactionDate; // @synthesize lastTransactionDate=_lastTransactionDate;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;

@end

