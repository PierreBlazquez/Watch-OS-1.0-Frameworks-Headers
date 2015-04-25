//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActionSheet, UIColor, UIImageView, UIPopoverBackgroundView, UIPopoverController;

@interface _UIPopoverView : UIView
{
    UIView *_contentView;
    UIPopoverBackgroundView *_backgroundView;
    Class _backgroundViewClass;
    UIImageView *_toolbarShine;
    BOOL _showsBackgroundComponentHighlights;
    BOOL _showsBackgroundViewHighlight;
    BOOL _showsContentViewHighlight;
    UIActionSheet *_presentedActionSheet;
    UIPopoverController *_popoverController;
    float __dimmingViewTopEdgeInset;
}

+ (id)popoverViewContainingView:(id)arg1;
@property(retain, nonatomic) UIActionSheet *presentedActionSheet; // @synthesize presentedActionSheet=_presentedActionSheet;
@property(nonatomic) BOOL showsContentViewHighlight; // @synthesize showsContentViewHighlight=_showsContentViewHighlight;
@property(nonatomic) BOOL showsBackgroundViewHighlight; // @synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight;
@property(nonatomic) BOOL showsBackgroundComponentHighlights; // @synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights;
- (void)_presentationInPopoverDidEndForViewController:(id)arg1;
- (void)_presentationInPopoverWillBeginForViewController:(id)arg1;
- (void)_presentationInPopoverWillEndForViewController:(id)arg1;
- (void)_presentationInPopoverDidBeginForViewController:(id)arg1;
- (BOOL)toolbarIsVisible;
- (void)_setIgnoreTapsInDimmingView:(BOOL)arg1;
- (BOOL)_isIgnoringTapsInDimmingView;
- (id)_viewForModalPresentationOfViewController:(id)arg1;
- (void)_hideArrow;
- (void)_showArrow;
- (void)_setCornerRadius:(float)arg1;
- (void)_setFrame:(struct CGRect)arg1 arrowOffset:(float)arg2;
@property(nonatomic, setter=_setDimmingViewTopEdgeInset:) float _dimmingViewTopEdgeInset; // @synthesize _dimmingViewTopEdgeInset=__dimmingViewTopEdgeInset;
- (void)_layoutToolbarShine;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2;
- (id)standardChromeView;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(BOOL)arg3;
@property(copy, nonatomic) UIColor *popoverBackgroundColor;
@property(nonatomic) int backgroundStyle;
@property(nonatomic) float arrowOffset;
@property(nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
- (struct CGRect)_snapshotBounds;
@property(nonatomic) unsigned int arrowDirection;
- (BOOL)_allowsCustomizationOfContent;
- (id)toolbarShine;
- (void)setUseToolbarShine:(BOOL)arg1;
- (id)viewController;
- (id)backgroundView;
- (int)_style;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;
- (id)contentView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

