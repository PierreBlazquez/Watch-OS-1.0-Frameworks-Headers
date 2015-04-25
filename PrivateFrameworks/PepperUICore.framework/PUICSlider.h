//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

#import "PUICCrownInputSequencerDelegate.h"

@class NSObject<OS_dispatch_source>, NSString, PUICCrownInputSequencer, UIView, _PUICSliderAccessoryState;

@interface PUICSlider : UISlider <PUICCrownInputSequencerDelegate>
{
    int _style;
    int _touchTarget;
    PUICCrownInputSequencer *_crownInputSequencer;
    struct CGRect _currentTrackLayoutBounds;
    float _stepValue;
    float _value;
    float _disabledValue;
    BOOL _isEnabled;
    _PUICSliderAccessoryState *_minimumImageState;
    _PUICSliderAccessoryState *_maximumImageState;
    UIView *_fillView;
    UIView *_gutterView;
    UIView *_crownGlowView;
    NSObject<OS_dispatch_source> *_crownGlowDismissTimer;
    BOOL _shouldAutomaticallAdjustValueOnTouch;
    BOOL _shouldFadeAccessoryImages;
    id <PUICSliderDelegate> _delegate;
    unsigned int _numberOfSteps;
    float _pillHighlightedGlowOpacity;
}

@property(nonatomic) float pillHighlightedGlowOpacity; // @synthesize pillHighlightedGlowOpacity=_pillHighlightedGlowOpacity;
@property(nonatomic) BOOL shouldFadeAccessoryImages; // @synthesize shouldFadeAccessoryImages=_shouldFadeAccessoryImages;
@property(nonatomic) BOOL shouldAutomaticallAdjustValueOnTouch; // @synthesize shouldAutomaticallAdjustValueOnTouch=_shouldAutomaticallAdjustValueOnTouch;
- (void)sliderDidFinishAnimatingFromValue:(float)arg1 toValue:(float)arg2;
- (id)initWithSliderStyle:(int)arg1;
- (void)_fadeAccessoryImagesForValue:(float)arg1 animated:(BOOL)arg2;
- (void)_cancelCrownGlowDismissTimer;
- (void)_updateSequencerConfiguration;
- (void)_setMaximumImageAlpha:(float)arg1 animated:(BOOL)arg2;
- (void)_setMinimumImageAlpha:(float)arg1 animated:(BOOL)arg2;
- (void)_cancelTouchTarget;
- (void)_animatePressView:(id)arg1 state:(id)arg2;
- (int)_touchTargetFromTouches:(id)arg1;
- (void)_setValue:(float)arg1 animated:(BOOL)arg2 sendAction:(BOOL)arg3;
- (void)_updateCrownGlowLayer;
- (void)_updateTrackViews;
@property(nonatomic) unsigned int numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_maxTrackView;
- (id)_minTrackView;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)_updateAppearanceForEnabled:(BOOL)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (BOOL)canBecomeFirstResponder;
@property(readonly, nonatomic) float cornerRadius;
- (BOOL)isEnabled;
- (float)value;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) id <PUICSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

