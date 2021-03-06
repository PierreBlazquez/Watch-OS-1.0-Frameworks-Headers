//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UIDelayedAction;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction *_touchDelay;
    struct CGPoint _startSceneReferenceLocation;
}

- (void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)arg1;
- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (void)sendDelayedTouches;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

