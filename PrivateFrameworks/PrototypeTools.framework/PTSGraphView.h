//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PrototypeTools/PT2DGraphView.h>

#import "PTSHUDControl.h"
#import "_UISettingsKeyPathObserver.h"

@class NSString, _UISettings, _UISettingsGroup;

@interface PTSGraphView : PT2DGraphView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    BOOL _enabled;
    _UISettings *_settings;
    _UISettingsGroup *_settingsGroup;
    NSString *_xAxisValueKeyPath;
    NSString *_yAxisValueKeyPath;
    NSString *_valueKeyPath;
    int _alignment;
}

+ (id)graphView;
+ (struct CGRect)defaultFrame;
@property(copy, nonatomic) NSString *yAxisValueKeyPath; // @synthesize yAxisValueKeyPath=_yAxisValueKeyPath;
@property(copy, nonatomic) NSString *xAxisValueKeyPath; // @synthesize xAxisValueKeyPath=_xAxisValueKeyPath;
- (void)updateGraphData;
@property(nonatomic) __weak _UISettingsGroup *settingsGroup; // @synthesize settingsGroup=_settingsGroup;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
