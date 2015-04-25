//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSSettingDescriptionProvider.h"
#import "IOSSHLActivationSettings.h"
#import "NSCopying.h"

@class BSMutableSettings, NSString;

@interface IOSSHLActivationSettings : NSObject <BSSettingDescriptionProvider, IOSSHLActivationSettings, NSCopying>
{
    BSMutableSettings *_settings;
}

- (id)basicDescriptionWithPrefix:(id)arg1;
- (void)applyActivationSettings:(id)arg1;
- (int)flagForActivationSetting:(unsigned int)arg1;
- (BOOL)boolForActivationSetting:(unsigned int)arg1;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

