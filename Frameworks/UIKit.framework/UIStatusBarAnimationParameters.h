//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIStatusBarAnimationParameters : NSObject
{
    double _duration;
    double _delay;
    int _curve;
    id <_UIBasicAnimationFactory> _animationFactory;
    double _startTime;
}

+ (void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 frameInterval:(float)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)animateWithParameters:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) id <_UIBasicAnimationFactory> animationFactory; // @synthesize animationFactory=_animationFactory;
- (id)initWithEmptyParameters;
- (BOOL)shouldAnimate;
@property(nonatomic) int curve; // @synthesize curve=_curve;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)initWithDefaultParameters;
- (id)init;
- (void)dealloc;

@end

