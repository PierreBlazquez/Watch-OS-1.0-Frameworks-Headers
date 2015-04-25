//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer
{
    double _maximumDuration;
    float _minimumPrimaryMovement;
    float _maximumPrimaryMovement;
    float _minimumSecondaryMovement;
    float _maximumSecondaryMovement;
    float _rateOfMinimumMovementDecay;
    float _rateOfMaximumMovementDecay;
    unsigned int _numberOfTouchesRequired;
    NSMutableArray *_touches;
    unsigned int _direction;
    struct CGPoint _startLocation;
    struct CGPoint *_startLocations;
    double _startTime;
    unsigned int _failed:1;
}

@property(nonatomic) float rateOfMaximumMovementDecay; // @synthesize rateOfMaximumMovementDecay=_rateOfMaximumMovementDecay;
@property(nonatomic) float rateOfMinimumMovementDecay; // @synthesize rateOfMinimumMovementDecay=_rateOfMinimumMovementDecay;
@property(nonatomic) float maximumSecondaryMovement; // @synthesize maximumSecondaryMovement=_maximumSecondaryMovement;
@property(nonatomic) float minimumSecondaryMovement; // @synthesize minimumSecondaryMovement=_minimumSecondaryMovement;
@property(nonatomic) float maximumPrimaryMovement; // @synthesize maximumPrimaryMovement=_maximumPrimaryMovement;
@property(nonatomic) float minimumPrimaryMovement; // @synthesize minimumPrimaryMovement=_minimumPrimaryMovement;
@property(nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
- (BOOL)_checkForSwipeWithDelta:(struct CGPoint)arg1 time:(double)arg2;
- (void)_appendSubclassDescription:(id)arg1;
- (void)_resetGestureRecognizer;
- (struct CGPoint)locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
@property(nonatomic) unsigned int numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(readonly, nonatomic) struct CGPoint startPoint;
@property(nonatomic) unsigned int direction; // @synthesize direction=_direction;
- (unsigned int)numberOfTouches;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

