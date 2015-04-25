//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUI/TPLegacyBottomBar.h>

@class NSArray, NSTimer, TPLegacyLockKnobView, TPLegacyLockTextView, TPLegacyWell, UIImageView, UIView;

@interface TPLegacyBottomLockBar : TPLegacyBottomBar
{
    NSArray *_labels;
    int _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLegacyLockKnobView *_knobView;
    UIView *_trackArrow;
    TPLegacyLockTextView *_labelView;
    TPLegacyWell *_well;
    float _knobTrackInsetLeft;
    float _fontSize;
    float _deltaFromDefaultLabelWidth;
    UIImageView *_backgroundView;
}

+ (float)defaultLabelFontSize;
+ (struct CGSize)defaultSize;
- (id)labels;
- (void)setTextAlpha:(float)arg1;
- (void)setKnobWellWidthToDefault;
- (void)setKnobWellWidth:(float)arg1;
- (id)well;
- (void)freezeKnobInUnlockedPosition;
- (void)relock;
- (int)currentLabelIndex;
- (id)knob;
- (id)initForIncomingCallWithFrame:(struct CGRect)arg1;
- (void)finishedCyclingLabelOut;
- (void)cycleToLabelAtIndex:(int)arg1;
- (void)cycleToNextLabel;
- (void)_adjustLabelOrigin;
- (float)_calcKnobYOffset;
- (void)_setLabel:(id)arg1;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (void)stopCyclingLabels;
- (void)startCyclingLabels;
- (id)initWithFrame:(struct CGRect)arg1 knobColor:(int)arg2;
- (void)_adjustKnobOrigin;
- (id)initWithFrame:(struct CGRect)arg1 knobImage:(id)arg2;
- (id)_knobImageForColor:(int)arg1;
- (float)defaultWellWidth;
- (id)wellImageName;
- (BOOL)usesBackgroundImage;
- (void)slideBack:(BOOL)arg1;
- (void)upInKnob;
- (void)knobDragged:(float)arg1;
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;
- (float)knobTrackInsetRight;
- (float)knobTrackInsetLeft;
- (void)downInKnob;
- (void)setWellAlpha:(float)arg1;
- (void)setSuppressDrawingBackground:(BOOL)arg1;
- (void)setLabels:(id)arg1;
- (float)fontSize;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)setKnobImage:(id)arg1;
- (void)setKnobColor:(int)arg1;
- (void)setFontSize:(float)arg1;
- (void)setLabel:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (BOOL)_canDrawContent;
- (void)unlock;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)labelView;

@end

