//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "PTSHUDControl.h"
#import "_UISettingsKeyPathObserver.h"

@class NSString, _UISettings;

@interface PTSInfoLabel : UILabel <PTSHUDControl, _UISettingsKeyPathObserver>
{
    _UISettings *_settings;
    NSString *_valueKeyPath;
    int _alignment;
}

+ (id)infoLabel;
+ (id)infoLabelForSettings:(id)arg1 valueKeyPath:(id)arg2;
+ (struct CGRect)defaultFrame;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enabled;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

