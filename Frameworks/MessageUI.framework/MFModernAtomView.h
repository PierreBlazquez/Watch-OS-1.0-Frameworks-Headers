//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDefaultKeyboardInput.h"

#import "MFModernAtomViewResembling.h"

@class MFModernAtomBackgroundView, MFModernAtomIconView, NSString, UIActivityIndicatorView, UIColor, UIFont, UILabel, UIView;

@interface MFModernAtomView : UIDefaultKeyboardInput <MFModernAtomViewResembling>
{
    MFModernAtomIconView *_badgeIconView;
    MFModernAtomIconView *_accessoryIconView;
    UIColor *_effectiveTintColor;
    unsigned int _disabledPresentationOptions;
    UIView *_baselineView;
    MFModernAtomBackgroundView *_background;
    UIView *_compositingView;
    UIView *_titleLabelFillView;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    float _scalingFactor;
    BOOL _isPrimaryAddressAtom;
    BOOL _separatorHidden;
    BOOL _separatorIsLeftAligned;
    BOOL _selected;
    UIFont *_titleFont;
    unsigned int _presentationOptions;
}

+ (float)horizontalPadding;
+ (id)defaultFont;
+ (float)defaultHeight;
+ (struct CGPoint)defaultBaselinePoint;
+ (id)_badgeImagesForPresentationOptions:(unsigned int)arg1 iconOrder:(const unsigned int *)arg2 orderingLength:(unsigned int)arg3 tintColor:(id)arg4 large:(BOOL)arg5 variant:(int)arg6;
+ (id)_SMSTintColor;
+ (id)_failureTintColor;
+ (id)_defaultLabelAttributesWithFont:(id)arg1;
+ (id)primaryAtomFont;
+ (id)_defaultLabelAttributes;
+ (id)_defaultTintColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) BOOL separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) struct CGPoint baselinePoint;
@property(readonly, nonatomic) struct CGRect selectionFrame;
- (id)viewForBaselineLayout;
@property(nonatomic) int separatorStyle;
@property(readonly, nonatomic) MFModernAtomBackgroundView *backgroundView;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_label;
@property(nonatomic) float scale; // @synthesize scale=_scalingFactor;
- (struct CGSize)intrinsicContentSize;
- (void)tintColorDidChange;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
@property(copy, nonatomic) NSString *title;
@property(readonly, copy) NSString *description;
- (void)layoutSubviews;
- (void)dealloc;
@property(readonly, nonatomic) MFModernAtomIconView *badgeIconView; // @synthesize badgeIconView=_badgeIconView;
@property(readonly, nonatomic) MFModernAtomIconView *accessoryIconView; // @synthesize accessoryIconView=_accessoryIconView;
@property(readonly, nonatomic) unsigned int effectivePresentationOptions;
- (void)clearPresentationOption:(unsigned int)arg1;
- (void)appendPresentationOption:(unsigned int)arg1;
@property(nonatomic) unsigned int presentationOptions; // @synthesize presentationOptions=_presentationOptions;
@property(nonatomic) BOOL separatorIsLeftAligned; // @synthesize separatorIsLeftAligned=_separatorIsLeftAligned;
@property(nonatomic) BOOL hidesVIPIndicator;
@property(nonatomic) BOOL isPrimaryAddressAtom; // @synthesize isPrimaryAddressAtom=_isPrimaryAddressAtom;
- (void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
- (float)_leftInset;
- (float)_rightInset;
- (void)_updateFontIfNecessary;
- (float)_rightPadding;
- (float)_leftPadding;
- (float)preferredWidthWithSizeConstraints:(struct CGSize)arg1;
- (void)_setPresentationOption:(unsigned int)arg1 enabled:(BOOL)arg2;
- (void)_updateCompositingFilters;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned int)arg3;
- (void)_updateActivityIndicator;
- (int)_preferredIconVariant;
- (void)_setEffectiveTintColor:(id)arg1;
@property(readonly, nonatomic) UIColor *effectiveTintColor;
- (void)_invalidatePresentationOptions;
- (id)initWithFrame:(struct CGRect)arg1 presentationOptions:(unsigned int)arg2 separatorStyle:(int)arg3;
- (float)preferredWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
