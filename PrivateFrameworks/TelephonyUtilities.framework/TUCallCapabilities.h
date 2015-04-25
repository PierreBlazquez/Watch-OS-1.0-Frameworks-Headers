//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TUCallCapabilities : NSObject
{
}

+ (void)invalidateCachedValues;
+ (void)_setRelayCallingFeaturesEnabledDefault:(BOOL)arg1;
+ (void)_setRelayCallingEnabledDefault:(BOOL)arg1;
+ (void)_setCanEnableRelayCallingDefault:(BOOL)arg1;
+ (void)_setSupportsRelayCallingDefault:(BOOL)arg1;
+ (void)_initializeState;
+ (void)setWiFiCallingEnabled:(BOOL)arg1;
+ (BOOL)canAttemptTelephonyCallsInAirplaneMode;
+ (BOOL)canEnableRelayCalling;
+ (BOOL)supportsSimultaneousVoiceAndData;
+ (BOOL)supportsFaceTimeVideoCalls;
+ (void)_setUpCTCapabilitiesNotifications;
+ (BOOL)canEnableWiFiCalling;
+ (id)wiFiCallingCapabilityInformation;
+ (void)setWiFiCallingCapabilityInformation:(id)arg1;
+ (void)_tearDownCTCapabilitiesNotifications;
+ (void)_tearDownRelayCallingListeners;
+ (BOOL)supportsRelayCalling;
+ (void)setRelayCallingEnabled:(BOOL)arg1;
+ (BOOL)isRelayCallingEnabled;
+ (BOOL)_relayCallingFeaturesEnabledDefault;
+ (BOOL)_relayCallingEnabledDefault;
+ (BOOL)_canEnableRelayCallingDefault;
+ (BOOL)_supportsRelayCallingDefault;
+ (void)_setUpRelayCallingListeners;
+ (void)_sendNecessaryNotificationsAfterRunningBlock:(CDUnknownBlockType)arg1;
+ (BOOL)isWiFiCallingEnabled;
+ (void)_initializeCTCapabilitiesSupport;
+ (BOOL)supportsHostingFaceTimeVideoCalls;
+ (BOOL)supportsHostingFaceTimeAudioCalls;
+ (BOOL)supportsHostingTelephonyCalls;
+ (BOOL)isWiFiCallingCurrentlyAvailable;
+ (BOOL)supportsDisplayingFaceTimeVideoCalls;
+ (int)faceTimeVideoCallSupport;
+ (int)faceTimeAudioCallSupport;
+ (BOOL)supportsDisplayingTelephonyCalls;
+ (int)telephonyCallSupport;
+ (BOOL)areRelayCallingFeaturesEnabled;
+ (BOOL)supportsDisplayingFaceTimeAudioCalls;
+ (id)debugDescription;
+ (BOOL)supportsFaceTimeAudioCalls;
+ (BOOL)supportsTelephonyCalls;

@end

