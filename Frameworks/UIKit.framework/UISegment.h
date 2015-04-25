//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSArray, NSString, UIView, _UIBadgeView, _UISegmentedControlAppearanceStorage;

@interface UISegment : UIImageView
{
    UIView *_info;
    _UISegmentedControlAppearanceStorage *_appearanceStorage;
    float _width;
    struct CGSize _contentOffset;
    int _barStyle;
    unsigned int _rightSegmentState;
    NSString *_badgeValue;
    _UIBadgeView *_badgeView;
    id _objectValue;
    struct {
        unsigned int style:3;
        unsigned int size:2;
        unsigned int selected:1;
        unsigned int highlighted:1;
        unsigned int showDivider:1;
        unsigned int hasImage:1;
        unsigned int position:3;
        unsigned int autosizeText:1;
        unsigned int isMomentary:1;
        unsigned int wasSelected:1;
        unsigned int needsBackgroundAndContentViewUpdate:1;
    } _segmentFlags;
    NSArray *_infoConstraints;
    float _requestedScaleFactor;
}

+ (id)_backgroundImageWithStorage:(id)arg1 style:(int)arg2 mini:(BOOL)arg3 state:(unsigned int)arg4 position:(unsigned int)arg5 drawMode:(int *)arg6 defaultBlock:(CDUnknownBlockType)arg7;
@property(nonatomic) float requestedScaleFactor; // @synthesize requestedScaleFactor=_requestedScaleFactor;
@property(copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints; // @synthesize _infoConstraints;
- (id)viewForBaselineLayout;
- (float)_idealWidth;
- (id)infoName;
- (void)_forceInfoDisplay;
- (void)_positionInfoWithoutAnimation;
- (void)animateRemoveForWidth:(float)arg1;
- (void)animateAdd:(BOOL)arg1;
- (void)setShowDivider:(BOOL)arg1;
- (BOOL)showDivider;
@property(getter=isMomentary) BOOL momentary;
@property(readonly) UIView *badgeView;
- (void)setAutosizeText:(BOOL)arg1;
- (void)setWasSelected:(BOOL)arg1;
- (void)updateForAppearance:(id)arg1 style:(int)arg2;
- (id)initWithInfo:(id)arg1 style:(int)arg2 size:(int)arg3 barStyle:(int)arg4 tintColor:(id)arg5 appearanceStorage:(id)arg6 position:(unsigned int)arg7 autosizeText:(BOOL)arg8;
- (void)_updateBackgroundAndContentViewsIfNeeded;
- (struct CGRect)contentRect;
- (float)_barHeight;
- (struct CGSize)_maximumTextSize;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)_paddingInsets;
- (void)_invalidateInfoConstraints;
- (void)_setEnabledAppearance:(BOOL)arg1;
- (id)_currentOptionsStyleTextShadowColor;
- (id)_currentOptionsStyleTextColor;
- (id)disabledTextColor;
- (id)_attributedTextForState:(unsigned int)arg1 selected:(BOOL)arg2;
- (void)updateMasking;
- (BOOL)_hasSelectedColor;
- (void)_positionInfo;
- (void)updateDividerViewForChangedSegment:(id)arg1;
- (void)_updateBackgroundAndContentViews;
- (id)_dividerImage;
- (id)_dividerImageIsCustom:(char *)arg1;
- (void)setNeedsBackgroundAndContentViewUpdate;
- (BOOL)_shouldUsePadMomentaryAppearance;
- (unsigned int)_segmentState;
- (BOOL)_isInMiniBar;
- (id)objectValue;
- (void)_commonSegmentInit;
- (void)setObjectValue:(id)arg1;
- (void)_updateTextColors;
- (void)insertDividerView;
@property(copy, nonatomic) NSString *badgeValue;
- (void)updateConstraints;
- (id)label;
@property(getter=isSelected) BOOL selected;
@property int controlSize;
- (BOOL)isHighlighted;
- (void)setBarStyle:(int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)contentSize;
- (void)setContentOffset:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)tintColorDidChange;
- (void)setTintColor:(id)arg1;
- (id)_tintColorArchivingKey;
- (BOOL)useBlockyMagnificationInClassic;
- (void)setEnabled:(BOOL)arg1;
- (void)setPosition:(unsigned int)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
