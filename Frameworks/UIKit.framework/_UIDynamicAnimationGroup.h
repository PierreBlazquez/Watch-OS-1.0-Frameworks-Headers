//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIDynamicAnimation.h>

@class NSArray, NSMutableArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation
{
    CDUnknownBlockType _applier;
    NSMutableArray *_animations;
    NSMutableArray *_runningAnimations;
}

- (void)removeAnimation:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)runWithGroupApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runWithGroupApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (BOOL)_animateForInterval:(double)arg1;
- (void)_stopAnimation;
@property(copy, nonatomic) NSArray *animations; // @synthesize animations=_animations;
- (void)dealloc;

@end

