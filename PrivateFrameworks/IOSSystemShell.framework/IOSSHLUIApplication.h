//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemApp.h"

#import "FBSystemAppDelegate.h"
#import "IOSSHLUIDelegate.h"

@class NSDate, NSMutableArray, NSObject<OS_dispatch_source>, NSString, NSTimer, UIWindow;

@interface IOSSHLUIApplication : FBSystemApp <IOSSHLUIDelegate, FBSystemAppDelegate>
{
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
    NSMutableArray *_blocksAwaitingAvailableMemory;
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    _Bool _isRelaunchingForSetupChange;
    _Bool _poweringDown;
    NSString *_bundleIdentifer;
    NSString *_name;
}

+ (void)preFrontBoardInitializationHook;
- (id)_topmostAccessibilityWindowBelowWindow:(id)arg1;
- (BOOL)_canWindowBeAccessibilityMainWindow:(id)arg1;
@property(nonatomic) _Bool poweringDown; // @synthesize poweringDown=_poweringDown;
@property(nonatomic) _Bool isRelaunchingForSetupChange; // @synthesize isRelaunchingForSetupChange=_isRelaunchingForSetupChange;
- (void)languageChanged;
- (void)applicationSuspend:(struct __GSEvent *)arg1;
- (void)systemAppDidFinishLaunching;
- (BOOL)application:(id)arg1 canOpenURL:(id)arg2;
- (BOOL)applicationIsAliveForSystemWatchdog:(id)arg1;
- (void)indicateConnectedToPower;
- (void)setNextAssistantRecognitionStrings:(id)arg1;
- (id)setNextVoiceRecognitionAudioInputPaths:(id)arg1;
- (void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(BOOL)arg4 animating:(BOOL)arg5 needsPermission:(BOOL)arg6 activationSettings:(id)arg7 withResult:(CDUnknownBlockType)arg8;
- (void)appExitedAbnormally:(id)arg1;
- (BOOL)isPresentationALockVunerability:(id)arg1 withURL:(id)arg2;
- (BOOL)isPresentationIdentifierRestrictionDisabled:(id)arg1;
- (BOOL)underMemoryPressure;
- (void)resetIdleTimerAndUndim:(_Bool)arg1;
- (void)powerDownForCriticalBattery;
- (void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2;
- (BOOL)hasLockScreen;
- (void)_midnightPassed;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_significantTimeChange;
- (void)powerDown;
- (void)_powerDownNow;
- (void)_rebootNow;
@property(retain, nonatomic) NSString *bundleIdentifer; // @synthesize bundleIdentifer=_bundleIdentifer;
- (BOOL)__handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)localeChanged;
- (BOOL)hasSetupApp;
- (void)setupMidnightTimer;
- (BOOL)createDownscaledSnapshots;
- (void)anotherApplicationFinishedLaunching:(struct __GSEvent *)arg1;
- (void)quitTopApplication:(struct __GSEvent *)arg1;
- (short)powerLogClientID;
- (id)systemAppBundleIdentifier;
- (BOOL)systemAppWantsOrientationEvents;
- (void)runResumeWithTestname:(id)arg1 options:(id)arg2 resumeBlock:(CDUnknownBlockType)arg3;
- (void)runLaunchWithTestname:(id)arg1 options:(id)arg2 launchBlock:(CDUnknownBlockType)arg3;
- (void)reboot;
- (void).cxx_destruct;
- (BOOL)_accessibilityApplicationIsSystemWideServer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)batteryStatusDidChange:(id)arg1;
- (void)significantTimeChange;
- (BOOL)_handlePhysicalButtonEvent:(id)arg1;
- (int)activeInterfaceOrientation;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)_localeChanged;
- (BOOL)_accessibilityIsSystemAppServer;
- (id)_accessibilityMainWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

