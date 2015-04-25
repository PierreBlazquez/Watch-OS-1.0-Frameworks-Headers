//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVSystemController : NSObject
{
    struct AVSystemControllerPrivate *_priv;
}

+ (id)sharedAVSystemController;
+ (void)initialize;
- (void)postEffectiveVolumeNotification:(void *)arg1;
- (void)postFullMuteDidChangeNotification:(void *)arg1;
- (void)handleServerDied;
- (BOOL)currentRouteHasVolumeControl;
- (id)pickableRoutesForCategory:(id)arg1;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)routeForCategory:(id)arg1;
- (BOOL)enablePortDiscovery:(BOOL)arg1;
- (BOOL)getPortDiscoveryEnabled;
- (BOOL)didCancelRoutePicking:(id)arg1;
- (BOOL)willStartRoutePicking:(id)arg1;
- (BOOL)setBTHFPRoute:(id)arg1 availableForVoicePrompts:(BOOL)arg2;
- (BOOL)changeVolumeBy:(float)arg1 forCategory:(id)arg2;
- (BOOL)getActiveCategoryMuted:(char *)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)getActiveCategoryMuted:(char *)arg1;
- (BOOL)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2;
- (BOOL)toggleActiveCategoryMuted;
- (BOOL)getVolumeForAccessory:(float *)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (BOOL)setVolumeForAccessoryTo:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (BOOL)changeVolumeForAccessoryBy:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (BOOL)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1;
- (BOOL)getVibeIntensity:(float *)arg1;
- (BOOL)setVibeIntensityTo:(float)arg1;
- (BOOL)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2;
- (BOOL)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2 fallbackCategory:(id)arg3;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float *)arg3 affectedCategory:(id *)arg4;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float *)arg3 affectedCategory:(id *)arg4;
- (BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (void)makeError:(id *)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)okToNotifyFromThisThread;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)init;
- (void)dealloc;
- (id)attributeForKey:(id)arg1;
- (BOOL)setVolumeTo:(float)arg1 forCategory:(id)arg2;
- (BOOL)getVolume:(float *)arg1 forCategory:(id)arg2;
- (id)volumeCategoryForAudioCategory:(id)arg1;
- (BOOL)allowUserToExceedEUVolumeLimit;

@end

