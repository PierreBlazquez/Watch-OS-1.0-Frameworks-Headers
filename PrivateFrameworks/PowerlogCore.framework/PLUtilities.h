//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLUtilities : NSObject
{
}

+ (id)workQueueForClass:(Class)arg1;
+ (BOOL)isICE;
+ (id)allSubClassesForClass:(Class)arg1;
+ (BOOL)isPingPongChargingWith:(BOOL)arg1 andBatteryLevelPercent:(double)arg2;
+ (BOOL)hasGasGauge;
+ (double)scaledPowerBasedOnPoint:(double)arg1 withPowerModel:(id)arg2;
+ (id)displayTypeStringQuery;
+ (double)secondsFromMachTime:(unsigned long long)arg1;
+ (id)dateFromTimeval:(struct timeval)arg1;
+ (BOOL)isWiFiChipset4350;
+ (BOOL)isWiFiChipset4345;
+ (BOOL)isWiFiChipset4324;
+ (BOOL)isWiFiChipset43342;
+ (BOOL)isWiFiChipset4334;
+ (BOOL)isWiFiChipset43291;
+ (BOOL)isWiFiChipset4330;
+ (id)deviceBootTime;
+ (BOOL)internalBuild;
+ (int)MavRev;
+ (BOOL)is64Bit;
+ (id)bundleIdFromPid:(int)arg1;
+ (BOOL)isIPod;
+ (id)torchTypeString;
+ (id)backCameraTypeString;
+ (id)frontCameraTypeString;
+ (int)getProcessorRevOfDevice;
+ (id)MavRevStringQuery;
+ (BOOL)isValidString:(id)arg1;
+ (short)logModeForEntryKey:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;
+ (id)hashString:(id)arg1;
+ (unsigned int)pidForName:(id)arg1;
+ (unsigned long long)dispatchTimeInSeconds:(double)arg1;
+ (BOOL)nonUIBuild;
+ (BOOL)gasGaugeEnabled;
+ (BOOL)alsCurveHigherThanDefault;
+ (int)getTorchTypeOfDevice;
+ (int)getDisplayTypeOfDevice;
+ (BOOL)isMav10;
+ (BOOL)isMav7;
+ (BOOL)isMav5;
+ (BOOL)isMav4;
+ (BOOL)isMav2;
+ (BOOL)isMav1;
+ (BOOL)hasBaseband;
+ (double)defaultBatteryEnergyCapacity;
+ (short)canLogMode:(id)arg1 fullMode:(BOOL)arg2;
+ (id)modeForEntryKey:(id)arg1 withKeyName:(id)arg2;
+ (void)_deallocatePortArray:(unsigned int *)arg1 withCount:(unsigned int)arg2;
+ (id)runningAsUser;
+ (void)setMobileOwnerForFile:(id)arg1;
+ (BOOL)runningAsMobileUser;
+ (void)dispatchSyncWithoutDeadlockOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)shortUUIDString;
+ (BOOL)createAndChownDirectory:(id)arg1;
+ (void)handleFailure:(short)arg1;
+ (id)extractDateStringAndUUIDStringFromFilePath:(id)arg1;
+ (id)workQueueForKey:(id)arg1;
+ (id)processNameForPid:(int)arg1;
+ (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)workQueue;

@end

