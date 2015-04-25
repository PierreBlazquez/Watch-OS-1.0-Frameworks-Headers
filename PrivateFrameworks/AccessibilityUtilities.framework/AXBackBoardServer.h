//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXBackBoardServer : AXServer
{
    BOOL _overrideGestureRecognition;
    NSMutableArray *_eventListeners;
}

+ (id)server;
- (unsigned int)guidedAccessAvailability;
- (void)jetsamThirdPartyApps;
- (void)toggleGuidedAccess;
- (BOOL)isGuidedAccessSelfLockedToApp:(id)arg1;
- (BOOL)requestGuidedAccessSession:(BOOL)arg1 appID:(id)arg2;
- (void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3;
- (void)setHearingAidControlIsVisible:(BOOL)arg1;
- (void)removeEventListener:(id)arg1;
- (void)setVoiceOverItemChooserVisible:(BOOL)arg1;
- (void)wakeUpDeviceIfNecessary;
- (void)userEventOccurred;
- (struct CGRect)convertFrame:(struct CGRect)arg1 forContextId:(unsigned int)arg2;
- (unsigned int)contextIdForPoint:(struct CGPoint)arg1;
- (void)postEvent:(id)arg1 systemEvent:(BOOL)arg2;
- (void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3;
@property(nonatomic) BOOL invertColorsEnabled; // @dynamic invertColorsEnabled;
- (void)setLockScreenDimTimerEnabled:(BOOL)arg1;
- (void)adjustSystemZoom:(int)arg1;
- (void)registerGestureConflictWithZoom:(id)arg1;
- (id)_springboardParametersForGuidedAccessAvailability;
- (void)registerEventListener:(CDUnknownBlockType)arg1 withIdentifierCallback:(CDUnknownBlockType)arg2;
- (void)registerAssistiveTouchPID:(int)arg1;
- (id)backboardServiceInstance;
@property(nonatomic) BOOL inPreboardMode;
- (void)registerAccessibilityUIServicePID:(int)arg1;
- (void)registerSiriViewServicePID:(int)arg1;
- (id)_handleEventListener:(id)arg1;
- (BOOL)isGuidedAccessActive;
- (BOOL)_shouldDispatchLocally;
- (id)_serviceName;
- (void)_willClearServer;
- (void)_didConnectToServer;
- (id)init;
- (void)dealloc;

@end

