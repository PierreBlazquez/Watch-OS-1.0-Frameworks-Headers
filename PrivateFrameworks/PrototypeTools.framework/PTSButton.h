//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "PTSHUDControl.h"
#import "_UISettingsKeyPathObserver.h"

@class NSString, _UISettings;

@interface PTSButton : UIButton <PTSHUDControl, _UISettingsKeyPathObserver>
{
    _UISettings *_settings;
    int _alignment;
    NSString *_valueKeyPath;
}

+ (id)showControlsModeButton;
+ (id)addSettingsButton;
+ (id)editSavedModeTableButton;
+ (id)showSavedModeButton;
+ (id)saveSettingsButton;
+ (id)restoreDefaultValuesButton;
+ (id)hideHUDButton;
+ (struct CGRect)defaultFrame;
+ (id)button;
- (id)initWithDefaultFrame;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
- (void).cxx_destruct;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enabled;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

