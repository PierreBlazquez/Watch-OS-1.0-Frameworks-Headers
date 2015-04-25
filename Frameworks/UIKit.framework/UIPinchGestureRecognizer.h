//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer
{
    float _initialTouchDistance;
    float _initialTouchScale;
    double _lastTouchTime;
    float _velocity;
    float _previousVelocity;
    float _scaleThreshold;
    struct CGAffineTransform _transform;
    struct CGPoint _anchorSceneReferencePoint;
    UITouch *_touches[2];
    float _hysteresis;
    id _transformAnalyzer;
    unsigned int _endsOnSingleTouch:1;
}

@property(nonatomic) float scaleThreshold; // @synthesize scaleThreshold=_scaleThreshold;
- (void)_setEndsOnSingleTouch:(BOOL)arg1;
- (BOOL)_endsOnSingleTouch;
- (void)_resetGestureRecognizer;
@property(readonly, nonatomic) float velocity;
@property(nonatomic) float scale;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
@property(nonatomic, getter=_hysteresis, setter=_setHysteresis:) float hysteresis; // @synthesize hysteresis=_hysteresis;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

