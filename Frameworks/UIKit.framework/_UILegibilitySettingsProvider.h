//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface _UILegibilitySettingsProvider : NSObject
{
    BOOL _hasContrast;
    BOOL _accumulatorIsPrimed;
    float _mostRecentSaturation;
    float _accumulatedSaturation;
    float _mostRecentBrightness;
    float _accumulatedBrightness;
    UIColor *_contentColor;
    float _mostRecentContrast;
    float _accumulatedContrast;
    float _mostRecentLuminance;
    float _accumulatedLuminance;
    int _currentStyle;
    double _nextChangeBarrier;
}

+ (int)styleForContentColor:(id)arg1;
+ (int)styleForContentColor:(id)arg1 contrast:(float)arg2;
@property(nonatomic) float mostRecentLuminance; // @synthesize mostRecentLuminance=_mostRecentLuminance;
@property(nonatomic) float mostRecentContrast; // @synthesize mostRecentContrast=_mostRecentContrast;
@property(nonatomic) float mostRecentBrightness; // @synthesize mostRecentBrightness=_mostRecentBrightness;
@property(nonatomic) float mostRecentSaturation; // @synthesize mostRecentSaturation=_mostRecentSaturation;
- (BOOL)accumulateChangesToContentColor:(id)arg1;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(nonatomic) double nextChangeBarrier; // @synthesize nextChangeBarrier=_nextChangeBarrier;
@property(nonatomic) int currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) float accumulatedContrast; // @synthesize accumulatedContrast=_accumulatedContrast;
@property(nonatomic) BOOL accumulatorIsPrimed; // @synthesize accumulatorIsPrimed=_accumulatorIsPrimed;
@property(nonatomic) float accumulatedSaturation; // @synthesize accumulatedSaturation=_accumulatedSaturation;
@property(nonatomic) float accumulatedLuminance; // @synthesize accumulatedLuminance=_accumulatedLuminance;
@property(nonatomic) float accumulatedBrightness; // @synthesize accumulatedBrightness=_accumulatedBrightness;
@property(nonatomic) BOOL hasContrast; // @synthesize hasContrast=_hasContrast;
- (BOOL)accumulateChangesToContentColor:(id)arg1 contrast:(float)arg2;
- (void)clearContentColorAccumulator;
- (id)settings;
- (void)dealloc;

@end

