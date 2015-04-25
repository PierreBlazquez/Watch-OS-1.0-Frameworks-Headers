//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCoding.h"

@class UIResponder, UIWindow;

@interface UINavigationTransitionView : UIView <NSCoding>
{
    id _delegate;
    UIView *_fromView;
    UIView *_toView;
    int _transition;
    UIResponder *_firstResponderToRestore;
    UIWindow *_originalWindow;
    float _fromViewAlpha;
    unsigned int _isTransitioning:1;
    unsigned int _popoverWillCleanUpNavigationTransition:1;
    unsigned int _usesRoundedCorners:1;
}

+ (double)defaultDurationForTransition:(int)arg1;
- (void)_cleanupTransitionFromPopover;
@property(nonatomic) BOOL popoverWillCleanUpNavigationTransition;
- (void)_notifyDelegateTransitionDidStopWithContext:(id)arg1;
- (void)_cleanupTransition;
- (void)_navigationTransitionDidStop;
@property(nonatomic) BOOL usesRoundedCorners;
@property(readonly) UIView *fromView; // @synthesize fromView=_fromView;
- (BOOL)transition:(int)arg1 toView:(id)arg2;
- (BOOL)_isTransitioningFromView:(id)arg1;
@property(readonly) BOOL isTransitioning;
- (BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

