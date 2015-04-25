//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIColor, UIImageView, UITapGestureRecognizer, UIView;

@interface PUICPageView : UIScrollView <UIScrollViewDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    struct CGPoint _zeroOffset;
    UIImageView *_outlineView;
    UIView *_outlineBackingView;
    BOOL _swipingToDelete;
    BOOL _allowsSelect;
    BOOL _allowsDelete;
    int _layoutRule;
    UIColor *_outlineColor;
    float _outlineStrokeWidth;
    float _outlineCornerRadius;
    float _outlineAlpha;
    float _contentAlpha;
    UIColor *_outlineBackingColor;
    id <PUICPageDelegate> _pageDelegate;
    UIView *_contentView;
    unsigned int _deleteEdge;
    struct CGSize _pageSize;
    struct CGSize _contentViewSize;
    struct UIEdgeInsets _outlineInsets;
}

@property(retain, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
@property(nonatomic) unsigned int deleteEdge; // @synthesize deleteEdge=_deleteEdge;
@property(nonatomic) BOOL allowsDelete; // @synthesize allowsDelete=_allowsDelete;
@property(nonatomic) BOOL allowsSelect; // @synthesize allowsSelect=_allowsSelect;
@property(nonatomic) struct CGSize contentViewSize; // @synthesize contentViewSize=_contentViewSize;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) __weak id <PUICPageDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property(retain, nonatomic) UIColor *outlineBackingColor; // @synthesize outlineBackingColor=_outlineBackingColor;
@property(nonatomic) float contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) struct UIEdgeInsets outlineInsets; // @synthesize outlineInsets=_outlineInsets;
@property(nonatomic) float outlineCornerRadius; // @synthesize outlineCornerRadius=_outlineCornerRadius;
@property(nonatomic) float outlineStrokeWidth; // @synthesize outlineStrokeWidth=_outlineStrokeWidth;
@property(nonatomic) int layoutRule; // @synthesize layoutRule=_layoutRule;
- (void)cancelDelete:(BOOL)arg1;
- (void)_handleScrollingStopped;
- (void)_setUpOutlineBackingView;
- (float)_deleteFractionForOffset:(struct CGPoint)arg1;
- (void)_tearDownOutlineBackingView;
- (void)_updateBouncing;
- (void)_handleTap:(id)arg1;
- (void).cxx_destruct;
- (void)applyConfiguration;
@property(nonatomic) float outlineAlpha; // @synthesize outlineAlpha=_outlineAlpha;
- (void)prepareForReuse;
- (void)_updateContentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

