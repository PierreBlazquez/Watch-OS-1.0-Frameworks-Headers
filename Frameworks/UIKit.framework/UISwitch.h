//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, UIColor, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView<_UISwitchInternalViewProtocol>;

@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding>
{
    UILongPressGestureRecognizer *_pressGesture;
    UIPanGestureRecognizer *_panGesture;
    UIView<_UISwitchInternalViewProtocol> *_control;
    BOOL _onStateChangedByLongPressGestureRecognizer;
    BOOL _onStateChangedByPanGestureRecognizer;
    BOOL _on;
    float _enabledAlpha;
}

+ (Class)_internalViewClass;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (void)_setKnobBounceMass:(float)arg1;
- (float)_knobBounceMass;
- (void)_setKnobBounceStiffness:(float)arg1;
- (float)_knobBounceStiffness;
- (void)_setKnobBounceDamping:(float)arg1;
- (float)_knobBounceDamping;
- (void)_setKnobBounceDuration:(float)arg1;
- (float)_knobBounceDuration;
- (void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAlternateColors:(BOOL)arg1;
@property(nonatomic) float enabledAlpha; // @synthesize enabledAlpha=_enabledAlpha;
@property(nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) BOOL alwaysShowOnOffLabel;
@property(retain, nonatomic, getter=_onColor, setter=_setOnColor:) UIColor *onColor;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;
- (BOOL)_shouldAlterCodedFrame;
- (void)_commonInitNewLookNeue1;
- (void)_commonInitNewLook;
- (BOOL)_useOldSize;
- (void)_animateToOn:(BOOL)arg1 withDuration:(float)arg2 sendAction:(BOOL)arg3;
- (BOOL)_handleTranslationInPanGestureRecognizer:(id)arg1;
- (void)_handleLongPressNL:(id)arg1;
- (void)_handleTapNL:(id)arg1;
- (void)_handlePanNL:(id)arg1;
- (id)_onTintColor;
@property(retain, nonatomic) UIImage *offImage;
@property(retain, nonatomic) UIImage *onImage;
@property(retain, nonatomic) UIColor *onTintColor;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_setOnTintColor:(id)arg1;
@property(retain, nonatomic) UIColor *thumbTintColor;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_scriptingInfo;
@property(retain, nonatomic) UIColor *tintColor;
- (void)_encodeFrameWithCoder:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)setAlpha:(float)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

