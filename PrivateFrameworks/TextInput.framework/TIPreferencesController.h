//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface TIPreferencesController : NSObject
{
    NSTimer *_synchronizePreferencesTimer;
    BOOL dontSynchronizePreferences;
    BOOL isInternalInstall;
}

+ (id)sharedPreferencesController;
@property(nonatomic) BOOL isInternalInstall; // @synthesize isInternalInstall;
- (void)preferencesChangedCallback:(id)arg1;
- (void)setCheckSpellingEnabled:(BOOL)arg1;
- (void)setPredictionEnabled:(BOOL)arg1;
- (void)setValue:(id)arg1 forManagedKey:(int)arg2;
- (void)clearSynchronizePreferencesTimer;
@property(nonatomic) BOOL dontSynchronizePreferences; // @synthesize dontSynchronizePreferences;
- (CDStruct_59875e80 *)domainForType:(int)arg1;
- (id)defaultForKey:(int)arg1;
- (id)valueForManagedKey:(int)arg1;
- (void)managedKeyboardSettingDidChange:(id)arg1;
- (CDStruct_59875e80 *)domains;
- (void)touchSynchronizePreferencesTimer;
- (void)releaseDontSynchronizePreferences;
- (void)synchronizePreferences;
- (BOOL)isKeyLockedDown:(int)arg1;
- (CDStruct_982099be *)preferences;
- (void)setAutocorrectionEnabled:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (id)valueForKey:(int)arg1;
- (BOOL)boolForKey:(int)arg1;

@end

