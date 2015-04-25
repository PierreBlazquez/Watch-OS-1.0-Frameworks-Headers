//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface IOSSHLRemoteNotificationServer : NSObject <APSConnectionDelegate>
{
    NSMutableDictionary *_bundleIdentifiersToClients;
    NSMutableDictionary *_environmentsToConnections;
    NSMutableSet *_bundleIdentifiersNeedingToken;
    NSString *_lastNotificationReceivedBundleIdentifier;
    NSMutableDictionary *_appImportanceTracker;
}

+ (id)sharedInstance;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)setBackgroundDeliveryDisabled:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (unsigned int)legacyRegisteredTypesForApp:(id)arg1;
- (BOOL)isAppPushEnabled:(id)arg1;
- (BOOL)isPushAllowedForBundleIdentifier:(id)arg1;
- (void)requestTokenForClient:(id)arg1;
- (void)setBackgroundAppRefreshAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (void)userNotificationsChangedStateForBundleIdentifier:(id)arg1 becameEnabled:(BOOL)arg2;
- (id)allBackgroundAppRefreshEnabledBundleIdentifiers;
- (id)allBackgroundAppRefreshCapableBundleIdentifiers;
- (id)lastNotificationReceivedBundleIdentifier;
- (void)registerApplication:(id)arg1 forEnvironment:(id)arg2 appWantsPush:(BOOL)arg3;
- (id)_cloudDatabaseTopicsForApplication:(id)arg1;
- (void)_appImportanceDecreased:(id)arg1;
- (void)_appImportanceIncreased:(id)arg1;
- (void)_moveTopicsForApp:(id)arg1 fromList:(unsigned int)arg2 toList:(unsigned int)arg3;
- (id)_allTopicsForApplication:(id)arg1;
- (void)calculateTopics;
- (void)_appDebugStateDidChange:(id)arg1;
- (void)_appProcessStateDidChange:(id)arg1;
- (void).cxx_destruct;
- (void)run;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

