//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IOSSystemShell/IOSSHLRelaunchTransaction.h>

@class SSKeybagRequest, SSVClaimApplicationsRequest;

@interface IOSSHLKeybagNonsenseTransaction : IOSSHLRelaunchTransaction
{
    SSKeybagRequest *_keybagRequest;
    SSVClaimApplicationsRequest *_claimApplicationsRequest;
}

- (BOOL)_canBeInterrupted;
- (void)_completeKeybagRefetchShouldRelaunch:(_Bool)arg1;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_activateEnteringScenes;
- (void)_relaunchApplication;
- (void)_cleanupEnteringScenes;
- (BOOL)shouldWatchdog:(id *)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end

