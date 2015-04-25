//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationModuleView.h>

#import "NTKSunriseComplicationDisplay.h"

@class CLLocation, NSDate, NSString, NTKColoringLabel, UIFont;

@interface NTKSunriseLargeModuleView : NTKComplicationModuleView <NTKSunriseComplicationDisplay>
{
    NTKColoringLabel *_eventLabel;
    NTKColoringLabel *_timeCountdownLabel;
    NTKColoringLabel *_locationLabel;
    BOOL _eventAndTimeFits;
    float _checkedWidth;
    BOOL _showingSunrise;
    NSDate *_sunriseDate;
    NSDate *_sunsetDate;
    int _constantSun;
    NSString *_sunriseName;
    NSString *_sunsetName;
    NSString *_locationName;
    CLLocation *_location;
    BOOL _locked;
    BOOL _paused;
    UIFont *_smallCapsEventFont;
    UIFont *_smallCapsCountdownFont;
    struct NSNumber *_timerToken;
}

- (void)_localeChanged:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationText:(id)arg1;
- (void)setShowingSunrise:(BOOL)arg1;
- (void)setSunriseDate:(id)arg1 sunsetDate:(id)arg2 constantSun:(int)arg3;
- (void)_updateCountdownTimerIfNecessary;
- (void)setAnimatesForegroundColors:(BOOL)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)layoutContentView;
- (void).cxx_destruct;
- (void)setForegroundColor:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

