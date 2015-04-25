//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol.h"

@class LSApplicationWorkspace, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface FBApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    LSApplicationWorkspace *_applicationWorkspace;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observerQueue_observers;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_workQueue_installedApplicationsByBundleID;
    NSMutableDictionary *_workQueue_placeholdersByBundleID;
    BOOL _workQueue_usingNetwork;
    unsigned int _workQueue_synchronizationActionCount;
    NSMutableArray *_workQueue_pendingSynchronizationExecutionBlocks;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_group> *_preInstallGroup;
    BOOL _usingNetwork;
}

+ (void)setBundleExtendedInfoGenerationHandler:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isUsingNetwork) BOOL usingNetwork; // @synthesize usingNetwork=_usingNetwork;
- (id)allPlaceholders;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (void)uninstallApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeOrPendInstallSynchronizationBlock:(CDUnknownBlockType)arg1;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (void)_sendToObservers:(id)arg1 networkUsageDidChange:(id)arg2 usingNetwork:(BOOL)arg3;
- (void)_sendToObservers:(id)arg1 didCancelPlaceholders:(id)arg2;
- (void)_workQueue_decrementSynchronizationActionCount;
- (void)_sendToObservers:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3;
- (void)_sendToObservers:(id)arg1 didAddApplications:(id)arg2;
- (BOOL)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2;
- (void)_workQueue_incrementSynchronizationActionCount;
- (void)_sendToObservers:(id)arg1 didAddPlaceholders:(id)arg2;
- (void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1;
- (void)_workQueue_generateExtendedInfoForBundleInfo:(id)arg1;
- (id)_workQueue_applicationInfoForProxy:(id)arg1 createIfNecessary:(BOOL)arg2 wasCreated:(char *)arg3;
- (id)_workQueue_placeholderForProxy:(id)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 wasCreated:(char *)arg4;
- (id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(BOOL)arg2 createdPlaceholders:(const id *)arg3 existingApplications:(const id *)arg4 unmappedProxies:(const id *)arg5;
- (id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 createdPlaceholders:(const id *)arg4 existingPlaceholders:(const id *)arg5 unmappedProxies:(const id *)arg6;
- (void)_dispatchToObservers:(id)arg1 synchronously:(BOOL)arg2 preBlock:(CDUnknownBlockType)arg3 block:(CDUnknownBlockType)arg4;
- (void)_workQueue_executeInstallSynchronizationBlock:(CDUnknownBlockType)arg1;
- (void)_sendToObservers:(id)arg1 didRemoveApplications:(id)arg2;
- (id)_observers;
- (void)addObserver:(id)arg1;
- (id)allInstalledApplications;
- (void)removeObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)networkUsageChanged:(BOOL)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)_reload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

