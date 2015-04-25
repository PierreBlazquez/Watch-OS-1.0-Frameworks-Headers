//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDataObserver.h"
#import "HDDatabaseProtectedDataObserver.h"
#import "HDDiagnosticObject.h"
#import "HDHealthDaemonReadyObserver.h"
#import "HDIDSMessageCenterDelegate.h"
#import "HDPairedWatchBundleIdentifierProvider.h"
#import "HDProcessStateObserver.h"
#import "HDSyncStore.h"

@class HDIDSMessageCenter, HDNanoPairingPersistentInfo, HDNanoPairingRecord, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID;

@interface HDNanoSyncManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDIDSMessageCenterDelegate, HDSyncStore, HDPairedWatchBundleIdentifierProvider, HDProcessStateObserver>
{
    BOOL _isMaster;
    BOOL _isPairingActivated;
    BOOL _restoreDidAbort;
    BOOL _needsActivationOnUnlock;
    NSString *_pairedWatchSourceBundleIdentifier;
    id <HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HDIDSMessageCenter *_messageCenter;
    int _state;
    HDNanoPairingPersistentInfo *_pairingInfo;
    HDNanoPairingRecord *_activePairingRecord;
    NSUUID *_restoreUUID;
    NSMutableArray *_activationCompletions;
    NSObject<OS_dispatch_source> *_activationTimer;
    NSObject<OS_dispatch_source> *_periodicSyncTimer;
    NSDate *_lastPeriodicSyncDate;
    long long _restoreSequenceNumber;
}

+ (id)_companionSyncEntityClasses;
+ (id)_watchSyncEntityClasses;
@property(readonly, nonatomic) NSString *syncStoreIdentifier;
@property(nonatomic) BOOL needsActivationOnUnlock; // @synthesize needsActivationOnUnlock=_needsActivationOnUnlock;
@property(retain, nonatomic) NSDate *lastPeriodicSyncDate; // @synthesize lastPeriodicSyncDate=_lastPeriodicSyncDate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *periodicSyncTimer; // @synthesize periodicSyncTimer=_periodicSyncTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *activationTimer; // @synthesize activationTimer=_activationTimer;
@property(retain, nonatomic) NSMutableArray *activationCompletions; // @synthesize activationCompletions=_activationCompletions;
@property(nonatomic) long long restoreSequenceNumber; // @synthesize restoreSequenceNumber=_restoreSequenceNumber;
@property(nonatomic) BOOL restoreDidAbort; // @synthesize restoreDidAbort=_restoreDidAbort;
@property(retain, nonatomic) NSUUID *restoreUUID; // @synthesize restoreUUID=_restoreUUID;
@property(retain, nonatomic) HDNanoPairingRecord *activePairingRecord; // @synthesize activePairingRecord=_activePairingRecord;
@property(retain, nonatomic) HDNanoPairingPersistentInfo *pairingInfo; // @synthesize pairingInfo=_pairingInfo;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property BOOL isPairingActivated; // @synthesize isPairingActivated=_isPairingActivated;
- (void)resetPairingWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncHealthDataWithPullRequest:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activatePairingWithActivationSentHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithHealthDaemon:(id)arg1 isMaster:(BOOL)arg2;
- (void)processDidEnterForeground:(id)arg1;
- (void)processDidEnterBackground:(id)arg1;
- (void)syncDidFinishWithContext:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (id)syncEntities;
- (void)sendChange:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (id)diagnosticDescription;
@property(retain) NSString *pairedWatchSourceBundleIdentifier; // @synthesize pairedWatchSourceBundleIdentifier=_pairedWatchSourceBundleIdentifier;
- (void)_queue_sendChange:(id)arg1 withStatus:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_syncImmediatelyWithReason:(id)arg1;
- (void)_workoutSamplesWereAssociated:(id)arg1;
- (void)_achievementsWereAdded:(id)arg1;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)_syncImmediatelyWithReason:(id)arg1 pullRequest:(BOOL)arg2;
- (void)_queue_periodicSyncTimerFired;
- (void)_didReceiveChangeRequest;
- (void)_didSendChangeRequest;
- (BOOL)_queue_isReadyForSyncWithError:(id *)arg1;
- (void)_queue_sendResponse:(id)arg1;
- (void)_queue_transitionToActivatedWithPairingRecord:(id)arg1;
- (id)_createPairingRecordWithPersistentPairingUUID:(id)arg1 healthPairingUUID:(id)arg2 didReplace:(char *)arg3;
- (BOOL)_syncQueue_applyActivationRestore:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (void)_queue_sendRequest:(id)arg1;
- (void)_queue_startActivationTimerWithTimeout:(double)arg1;
- (BOOL)_queue_abortRestoreWithUUID:(id)arg1;
- (void)_queue_sendActivationRestoreMessageWithRestoreUUID:(id)arg1 restores:(id)arg2 deviceSourceIdentifier:(id)arg3 sequenceNumber:(long long)arg4 statusCode:(int)arg5;
- (void)_queue_activationTimedOut;
- (void)_queue_beginRestoreWithDeviceSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetSyncAnchors;
- (void)_queue_resetRestoreAttemptWithUUID:(id)arg1;
- (void)_queue_drainActivationCompletionsWithDidActivate:(BOOL)arg1 error:(id)arg2;
- (void)_queue_cancelActivationTimer;
- (void)_queue_cancelPeriodicSyncTimer;
- (void)_showFitnessAppIfNeeded;
- (void)_queue_addActivationCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_transitionToPreparingForActivationWithPersistentPairingUUID:(id)arg1 healthPairingUUID:(id)arg2 deviceSourceIdentifier:(id)arg3 activationSentHandler:(CDUnknownBlockType)arg4;
- (void)_queue_setUpMessageCenterIfNecessaryWithPairedStoragePath:(id)arg1;
- (void)_queue_startPeriodicSyncTimerIfNecessary;
- (void)_queue_transitionToDeactivatedWithError:(id)arg1;
- (id)_queue_persistentPairingUUIDWithRegistryPairingUUID:(id)arg1 deviceSourceIdentifier:(id *)arg2;
- (id)_getRegistryPairingUUIDAndStoragePath:(id *)arg1;
- (BOOL)_queue_isReadyForPairingWithError:(id *)arg1;
- (void)_queue_changeRequestDidFailToSendWithError:(id)arg1;
- (void)_queue_receiveChangeResponse:(id)arg1;
- (void)_queue_receiveChangeRequest:(id)arg1;
- (void)_queue_handleActivationRestoreResponse:(id)arg1;
- (void)_queue_handleActivationRestoreRequest:(id)arg1;
- (void)messageCenterChangesError:(id)arg1;
- (void)messageCenterDidReceiveChangesResponse:(id)arg1;
- (void)messageCenterDidReceiveChangesRequest:(id)arg1;
- (void)messageCenterActivationError:(id)arg1;
- (void)messageCenterDidReceiveActivationResponse:(id)arg1;
- (void)messageCenterDidReceiveActivationRequest:(id)arg1;
- (void)_queue_pairingDidChange;
- (id)_stateString;
- (void)_queue_setState:(int)arg1;
- (id)_getPairingRecordWithPersistentPairingUUID:(id)arg1;
- (void)_registerForSyncTriggers;
- (void)_deviceDidUnpair:(id)arg1;
- (void)_deviceDidPair:(id)arg1;
- (void)_queue_resetPairingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_syncImmediatelyWithReason:(id)arg1 pullRequest:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_updatePairingWithOptions:(unsigned int)arg1 activationSentHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id *)arg1;
- (void)_unregisterForSyncTriggers;
- (void)_setPairingActivated:(BOOL)arg1;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
@property(readonly, nonatomic) int provenance;
- (unsigned int)syncObjectLimitForEntityClass:(Class)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)dealloc;
@property(readonly) BOOL isMaster;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
