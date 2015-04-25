//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUtilityTimeLabelImageComplicationView.h>

#import "NTKSunriseComplicationDisplay.h"

@class NSDate, NSString;

@interface NTKShortSunriseUtilityComplicationView : NTKUtilityTimeLabelImageComplicationView <NTKSunriseComplicationDisplay>
{
    BOOL _noInfo;
    BOOL _showingSunrise;
    NSDate *_sunrise;
    NSDate *_sunset;
    int _constantSun;
}

- (void)_updateContentForMaxSizeChange;
- (void)setShowingSunrise:(BOOL)arg1;
- (BOOL)transitionsAtAstronomicalTwilight;
- (void)setSunriseDate:(id)arg1 sunsetDate:(id)arg2 constantSun:(int)arg3;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

