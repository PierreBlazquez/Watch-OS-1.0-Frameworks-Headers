//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSMutableArray;

@interface UITableViewWrapperView : UIScrollView
{
    NSMutableArray *_stuckToBackViews;
}

@property(readonly, nonatomic) NSArray *stuckToBackViews; // @synthesize stuckToBackViews=_stuckToBackViews;
- (void)_unstickView:(id)arg1;
- (void)_stickViewToBack:(id)arg1;
- (void)handleSwipeBeginning:(id)arg1;
- (BOOL)_forwardsToParentScroller;
- (void)willRemoveSubview:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

