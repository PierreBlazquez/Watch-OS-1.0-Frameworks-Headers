//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PCInterfaceMonitorDelegate.h"

@class NSMapTable, NSRecursiveLock, NSString, NSTimer, PCSimpleTimer;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate>
{
    NSRecursiveLock *_lock;
    NSMapTable *_delegatesAndQueues;
    struct __CFSet *_WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet *_wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    void *_ctServerConnection;
    void *_interfaceAssertion;
    long _WWANContextIdentifier;
    NSString *_WWANInterfaceName;
    BOOL _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    BOOL _isWWANInterfaceDataActive;
    BOOL _ctIsWWANInHomeCountry;
    BOOL _hasWWANStatusIndicator;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    int _wwanRSSI;
    BOOL _isInCall;
    BOOL _isWakeOnWiFiSupported;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _shouldOverrideOnCallBehavior;
}

+ (id)sharedInstance;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream *)arg1;
- (void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2;
- (void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2;
- (void)_updateWWANInterfaceAssertions;
- (void)cutWiFiManagerDeviceAttached:(id)arg1;
@property(readonly) BOOL areAllNetworkInterfacesDisabled;
@property(readonly) BOOL isWakeOnWiFiSupported;
@property(readonly) BOOL isInternetReachableViaWiFi;
@property(readonly) BOOL isWWANInHomeCountry;
@property(readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property(readonly) BOOL isPowerStateDetectionSupported;
@property(readonly) NSString *WWANInterfaceName;
@property(readonly) BOOL isWWANInterfaceUp;
@property(readonly) BOOL isWWANBetterThanWiFi;
- (BOOL)_wifiIsPoorLinkQuality;
- (BOOL)_wwanIsPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *currentLinkQualityString;
- (void)_serverCallback:(id)arg1 info:(id)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (id)urlConnectionBoundToWWANInterface:(BOOL)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(BOOL)arg4 maxContentLength:(long long)arg5 startImmediately:(BOOL)arg6 connectionProperties:(id)arg7;
- (void)bindCFStream:(struct __CFReadStream *)arg1 toWWANInterface:(BOOL)arg2;
- (BOOL)_allowBindingToWWAN;
- (BOOL)_isWiFiUsable;
@property(readonly) BOOL isInCall;
@property(readonly) BOOL isWWANInterfaceActivationPermitted;
@property(readonly) BOOL doesWWANInterfaceExist;
- (void)_adjustWakeOnWiFiLocked;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWakeOnWiFi;
- (BOOL)_isInternetReachableLocked;
- (BOOL)_isWWANInHomeCountryLocked;
- (void)_inCallWWANOverrideTimerFired;
- (void)_clearInCallWWANOverrideTimerLocked;
- (BOOL)_wantsWWANInterfaceAssertion;
- (void)_updateCTIsWWANInHomeCountry:(BOOL)arg1 isWWANInterfaceDataActive:(BOOL)arg2;
- (void)_serverCallbackLocked:(id)arg1 info:(id)arg2;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_mainThreadCTConnectionAttempt;
- (void)_ctConnectionAttempt;
- (void)_updateWWANInterfaceUpStateLocked;
- (void)_createCTConnection;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(readonly) BOOL isInternetReachable;
- (id)init;
- (void)dealloc;
- (void)handleMachMessage:(void *)arg1;
- (void)removeDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

