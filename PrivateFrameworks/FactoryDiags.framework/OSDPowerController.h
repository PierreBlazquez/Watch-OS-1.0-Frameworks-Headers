//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrightnessSystemClient, NSNotificationCenter, NSXPCConnection, OSDHIDEventSystemClient;

@interface OSDPowerController : NSObject
{
    BOOL _backlightPower;
    BOOL _touchPower;
    struct __CFRunLoop *_runLoop;
    struct __SCPreferences *_preferences;
    int _cycleCount;
    int _voltage;
    float _instantAmperage;
    BOOL _fullyCharged;
    int _designCapacity;
    int _maxCapacity;
    int _currentCapacity;
    int _level;
    BOOL _installed;
    BOOL _charging;
    BOOL _connected;
    int _chargerID;
    float _chargeCurrent;
    struct IONotificationPort *_notificationPort;
    BOOL _showedBatteryWarning;
    unsigned int _service;
    unsigned int _sleepService;
    unsigned int _batteryStatusNotifier;
    unsigned int _systemPowerNotifier;
    struct IONotificationPort *_systemPowerPort;
    unsigned int _rootPowerService;
    unsigned int _inhibitChargingAssertion;
    unsigned int _inhibitACConnectAssertion;
    _Bool _ignorePowerChange;
    unsigned int _chargingAssertion;
    BOOL brightnessAutoAdjustment;
    float brightness;
    float brightnessFactor;
    OSDHIDEventSystemClient *hidClient;
    BrightnessSystemClient *_bsClient;
    NSNotificationCenter *_center;
}

+ (void)shutdown;
+ (void)reboot;
+ (id)sharedInstance;
- (BOOL)airplaneMode;
- (int)maxCapacity;
- (void)setIgnorePowerChange:(_Bool)arg1;
- (int)setBatteryChargeEnabled:(BOOL)arg1;
- (int)setACSoftConnected:(BOOL)arg1;
- (struct IONotificationPort *)notificationPort;
- (float)chargeCurrent;
- (id)chargerType;
- (_Bool)setCharging:(_Bool)arg1;
- (BOOL)isCharging;
- (int)currentCapacity;
- (int)designCapacity;
- (BOOL)isFullyCharged;
- (float)instantAmperage;
- (int)voltage;
- (int)cycleCount;
- (void)setBluetoothPower:(BOOL)arg1;
- (BOOL)bluetoothPower;
- (void)setWifiPower:(BOOL)arg1;
- (BOOL)wifiPower;
- (BOOL)touchPower;
- (BOOL)backlightPower;
@property(nonatomic) float brightnessFactor; // @synthesize brightnessFactor;
@property(nonatomic) BOOL brightnessAutoAdjustment; // @synthesize brightnessAutoAdjustment;
- (BOOL)lcdPower;
- (void)scheduleWakeAfterDelay:(double)arg1;
- (unsigned int)rootPowerService;
- (_Bool)ignorePowerChange;
- (void)setBacklightPower:(BOOL)arg1;
- (void)setLcdPower:(BOOL)arg1;
- (int)updateStateForBattery:(unsigned int)arg1;
- (void)handleNewPowerValues;
- (void)setAirplaneMode:(BOOL)arg1;
@property(retain, nonatomic) BrightnessSystemClient *bsClient; // @synthesize bsClient=_bsClient;
@property(readonly, nonatomic) NSXPCConnection *nonuiHiddConnection;
- (void)scheduleWakeAtTime:(id)arg1;
- (unsigned int)sleepService;
- (void)listenForSystemPower;
- (void)watchPowerSources;
@property(retain, nonatomic) OSDHIDEventSystemClient *hidClient; // @synthesize hidClient;
- (void)setTouchPower:(BOOL)arg1;
- (void).cxx_destruct;
@property(nonatomic) float brightness; // @synthesize brightness;
- (int)batteryLevel;
@property(retain, nonatomic) NSNotificationCenter *center; // @synthesize center=_center;
- (id)init;
- (void)dealloc;
- (BOOL)isInstalled;
- (unsigned int)service;
- (void)sleep;
- (BOOL)isConnected;

@end

