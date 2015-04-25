//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSTransactionObserver.h"
#import "BSWatchdogDelegate.h"
#import "FBApplicationProcessObserver.h"
#import "FBProcessManagerObserver.h"
#import "FBSceneManagerObserver.h"
#import "FBSystemServiceDelegate.h"
#import "IOSSHLTransactionWatchdogDelegate.h"

@class BSTransaction, FBScene, FBSceneManager, FBWorkspaceEventQueueLock, IOSSHLTransactionWatchdog, NSMutableArray, NSString, NSTimer;

@interface IOSSHLWorkspace : NSObject <BSTransactionObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver, IOSSHLTransactionWatchdogDelegate>
{
    NSTimer *_relaunchTimer;
    NSMutableArray *_applicationsToRelaunch;
    FBWorkspaceEventQueueLock *_eventQueueLock;
    IOSSHLTransactionWatchdog *_transactionWatchdog;
    FBSceneManager *_sceneManager;
    FBScene *_occlusionScene;
    NSMutableArray *_applicationLaunchSupressionAssertions;
    _Bool _underLock;
    id <IOSSHLWorkspaceUIDelegate> _delegate;
    BSTransaction *_currentTransaction;
}

+ (void)noteSystemBootComplete;
+ (void)releaseIdleSleepAssertion;
+ (void)takeIdleSleepAssertion;
+ (void)loadUsageTimes;
+ (void)resetBatteryUsageTimes;
+ (void)startUsageTimesIfNecessary;
+ (void)setHavePartiallyCharged:(_Bool)arg1;
+ (_Bool)haveChargedPartially;
+ (_Bool)areUsageTimesTrusted;
+ (double)getBatteryStandbyTimeInSeconds;
+ (id)_copyRecentSleepsAndWakes;
+ (void)logUsage:(_Bool)arg1;
+ (_Bool)shutdownCookieExists;
+ (void)createShutdownCookie;
+ (_Bool)hasStartedWake;
+ (_Bool)isSleeping;
+ (void)_shutdownTasks;
+ (void)preventIdleSleep:(_Bool)arg1;
+ (void)_preventIdleSleepUnbalanced:(_Bool)arg1;
+ (void)_preventIdleSleepBalanced:(_Bool)arg1;
+ (void)_preventIdleSleep:(_Bool)arg1 balanced:(_Bool)arg2;
+ (double)getBatteryUsageTimeInSeconds;
+ (void)removeShutdownCookie;
+ (void)saveUsageTimes;
+ (id)applicationForBundleIdentifier:(id)arg1 frontmost:(_Bool)arg2;
+ (_Bool)signatureTrustedForApplication:(id)arg1;
+ (_Bool)finishedBoot;
+ (_Bool)isRelaunchingRebootingOrShuttingDown;
+ (id)applicationForURL:(id)arg1 isPublic:(_Bool)arg2 outError:(int *)arg3 outURL:(id *)arg4;
+ (void)relaunchWhenFinishedTerminating:(_Bool)arg1;
+ (void)rebootWhenFinishedTerminating:(_Bool)arg1;
+ (void)shutDownWhenFinishedTerminating:(_Bool)arg1;
+ (void)finishSetupLaunchAfterLanguageChange:(_Bool)arg1;
- (_Bool)isBusy;
@property(nonatomic, getter=isUnderLock) _Bool underLock; // @synthesize underLock=_underLock;
- (void)removeApplicationLaunchSupressionAssertion:(id)arg1;
- (void)addApplicationLaunchSupressionAssertion:(id)arg1;
- (BOOL)watchdogShouldFire:(id)arg1 declineReason:(id *)arg2;
- (void)applicationProcessDidFailToLaunch:(id)arg1;
- (id)topActivatingApplication;
- (void)tearDownNow;
- (void)killAllApps:(_Bool)arg1;
- (void)killActiveApps:(_Bool)arg1 crashDump:(_Bool)arg2;
- (void)forceQuitApplication:(id)arg1 description:(id)arg2;
- (void)suspendApplication:(id)arg1;
- (BOOL)activateApplication:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (BOOL)canLaunchApplication:(id)arg1 launchIntoBackground:(BOOL)arg2 url:(id)arg3 error:(int *)arg4;
- (void)failCurrentTransactionAfterUserCanceledLaunch;
- (void)watchdogFired:(id)arg1;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)applicationProcessDebuggingStateDidChange:(id)arg1;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (void)applicationProcessDidLaunch:(id)arg1;
- (void)applicationProcessWillLaunch:(id)arg1;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(BOOL)arg2;
- (void)systemServicePrepareForShutdown:(id)arg1 andReboot:(BOOL)arg2;
- (void)systemService:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 options:(id)arg4 origin:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 options:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)transactionDidComplete:(id)arg1;
- (void)_handleOpenURLRequest:(id)arg1 application:(id)arg2 options:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (_Bool)shouldAllowAppLaunch;
- (void)_handleOpenApplicationRequest:(id)arg1 options:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (id)_selectTransactionForAppRelaunch:(id)arg1;
- (id)topActiveOrActivatingApplication;
- (_Bool)_applicationProcessExited:(id)arg1 withContext:(id)arg2;
- (id)_selectTransactionForAppExited:(id)arg1;
- (_Bool)_handleSetupExited:(id)arg1;
- (id)_selectTransactionForSuspendApp:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (_Bool)activateShellWithInterruption:(_Bool)arg1 transactionFactoryBlock:(CDUnknownBlockType)arg2;
- (id)_selectTransactionForActivateShellWithResultBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) BSTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
- (_Bool)activateShellWithInterruption:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)executeOrAppendTransaction:(id)arg1 withName:(id)arg2;
- (id)_selectTransactionForAppActivation:(id)arg1 actions:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (_Bool)presentationDoesPresentLockLaunchVulnerability:(id)arg1 withUrl:(id)arg2;
- (BOOL)hasApplicationLaunchSupressionAssertion;
- (id)foregroundApplications;
- (id)applicationsForScenes:(id)arg1;
- (_Bool)isAppWithBundleIDRunning:(id)arg1;
- (_Bool)isBusyForTransaction;
- (void)_launchNextPendedAutoLaunchApp;
- (void)_scheduleRelaunchTimerIfNecessary;
- (void)_invalidateRelaunchTimer;
- (void)scheduleWatchdogWithTransaction:(id)arg1;
- (void)_createOcclusionScene;
- (void)updateFrontMostApplicationEventPort;
- (void)_memoryPressureWarn:(id)arg1;
- (void)_memoryPressureRelieved:(id)arg1;
- (BOOL)activateApplication:(id)arg1;
- (BOOL)activateApplicationSuspended:(id)arg1;
- (_Bool)isUsingExternalAccessory:(id)arg1;
- (void)terminateApplication:(id)arg1 withReason:(int)arg2 report:(_Bool)arg3 description:(id)arg4;
- (BOOL)activateApplicationIdempotent:(id)arg1;
- (id)foregroundApplicationScenes;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)relaunchNow;
- (BOOL)activateApplication:(id)arg1 withActions:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)terminateAllApps;
- (void)shutDownNow:(_Bool)arg1;
- (_Bool)hasForegroundApplication;
- (void)watchdog:(id)arg1 timerFireDeclinedForReason:(id)arg2;
- (id)runningApps;
- (_Bool)suspendAllPresentations;
- (id)topActiveApplication;
- (void)killApplication:(id)arg1 description:(id)arg2;
- (_Bool)isAppExecutableRunning:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IOSSHLWorkspaceUIDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
