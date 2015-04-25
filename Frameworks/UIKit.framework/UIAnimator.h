//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UIAnimator : NSObject
{
    NSMutableArray *_animations;
    double _lastUpdateTime;
    id _heartbeat[3];
    int _heartbeatClientCount[3];
}

+ (id)sharedAnimator;
+ (void)enableAnimation;
+ (void)disableAnimation;
- (BOOL)_isRunningAnimation:(id)arg1;
- (void)_LCDHeartbeatCallback:(id)arg1;
- (void)_TVHeartbeatCallback:(id)arg1;
- (void)_TimerHeartbeatCallback:(id)arg1;
- (void)_advanceAnimationsOfType:(int)arg1 withTimestamp:(double)arg2;
- (float)fractionForAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (void)removeAnimationsForTarget:(id)arg1;
- (void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3;
- (void)_startAnimation:(id)arg1 withStartTime:(double)arg2;
- (void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 startTime:(double)arg4;
- (void)stopAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3;
- (void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2;
- (void)dealloc;

@end

