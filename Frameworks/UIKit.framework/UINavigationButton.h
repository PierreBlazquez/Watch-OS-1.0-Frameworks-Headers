//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, NSSet, NSString, UIBarButtonItem, UIColor, UIImage, UINavigationItem;

@interface UINavigationButton : UIButton
{
    NSSet *_possibleTitles;
    int _style;
    int _barStyle;
    UIColor *_navigationBarTintColor;
    struct CGSize _boundsAdjustment;
    id _appearanceStorage;
    NSSet *_possibleSystemItems;
    unsigned int _size:2;
    unsigned int _wantsLetterpressContent:1;
    UIBarButtonItem *_originatingButtonItem;
    UINavigationItem *_originatingNavigationItem;
    BOOL _createdByBarButtonItem;
    BOOL _isFontScaleInvalid;
    BOOL _wantsBlendModeForAccessibilityBackgrounds;
    BOOL __barItemHidden;
    float _minimumWidth;
    float _maximumWidth;
    int _buttonItemStyle;
    NSDictionary *_stylesForSizingTitles;
    float _fontScaleAdjustment;
    Class _appearanceGuideClass;
    struct UIEdgeInsets __additionalSelectionInsets;
}

+ (void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(int)arg2 isEnabled:(BOOL)arg3 withAccessibilityBackground:(BOOL)arg4 wantsBlendModeForAccessibilityBackgrounds:(BOOL)arg5;
+ (id)defaultFont;
@property(nonatomic, setter=_setBarItemHidden:) BOOL _barItemHidden; // @synthesize _barItemHidden=__barItemHidden;
@property(nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets; // @synthesize _additionalSelectionInsets=__additionalSelectionInsets;
@property(nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic, setter=_setFontScaleInvalid:) BOOL _isFontScaleInvalid; // @synthesize _isFontScaleInvalid;
@property(nonatomic, setter=_setCreatedByBarButtonItem:) BOOL _createdByBarButtonItem; // @synthesize _createdByBarButtonItem;
@property(copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // @synthesize _stylesForSizingTitles;
@property(nonatomic, setter=_setButtonItemStyle:) int _buttonItemStyle; // @synthesize _buttonItemStyle;
@property(nonatomic) float maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) float minimumWidth; // @synthesize minimumWidth=_minimumWidth;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (id)_backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBoundsAdjustment:(struct CGSize)arg1;
- (BOOL)_isModernButton;
@property(nonatomic) UINavigationItem *originatingNavigationItem;
@property(nonatomic) UIBarButtonItem *originatingButtonItem;
- (id)initWithImage:(id)arg1 style:(int)arg2;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3 applyBezel:(BOOL)arg4 forBarStyle:(int)arg5 buttonItemStyle:(int)arg6;
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3;
- (id)initWithTitle:(id)arg1 style:(int)arg2;
- (struct UIEdgeInsets)_pathImageEdgeInsets;
- (struct UIEdgeInsets)_pathTitleEdgeInsets;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setWantsLetterpressContent;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
@property(nonatomic) int controlSize;
- (void)_adjustBounds;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(BOOL)arg8 forButtonItemStyle:(int)arg9;
- (void)_setTitleFrozen:(BOOL)arg1;
- (void)_updateTitleColorsForState:(unsigned int)arg1;
- (id)_adjustedDefaultTitleFont;
- (void)_updateContentInsets;
- (struct UIEdgeInsets)_buttonTitleEdgeInsets;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned int)arg1 style:(int)arg2 isMini:(BOOL)arg3;
- (id)_tintColor;
- (int)_barButtonItemStyle;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)_defaultTitleShadowColorForState:(unsigned int)arg1;
- (void)_updateTitleForLetterpress;
- (struct CGRect)_selectedIndicatorBounds;
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(BOOL)arg2;
- (struct CGSize)_defaultTitleShadowOffsetForState:(unsigned int)arg1;
- (id)_defaultTitleColorForState:(unsigned int)arg1;
@property(nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) BOOL _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (BOOL)_hasBaselineAlignedAbsoluteVerticalPosition:(out float *)arg1 withinNavBar:(id)arg2 forSize:(struct CGSize)arg3;
- (void)_accessibilityButtonShapesParametersDidChange;
- (BOOL)_showsAccessibilityBackgroundWhenEnabled;
- (void)_setTintColor:(id)arg1;
- (BOOL)contentsEqualTo:(id)arg1 withStyle:(int)arg2;
@property(nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)setNavigationBarTintColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (BOOL)_wantsAccessibilityButtonShapes;
@property(nonatomic, setter=_setFontScaleAdjustment:) float _fontScaleAdjustment; // @synthesize _fontScaleAdjustment;
- (void)_prepareToAppearInNavigationItem:(id)arg1 onLeft:(BOOL)arg2;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_appearanceStorage;
- (id)initWithTitle:(id)arg1;
- (void)_updateStyle;
- (id)_scriptingInfo;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *title;
- (id)initWithImage:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)layoutSubviews;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIColor *tintColor;

@end

