//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VKAnimation : NSObject
{
    CDUnknownBlockType _stepHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _timingFunction;
    double _duration;
    double _startTimestamp;
    double _lastTimestamp;
    NSString *_name;
    int _priority;
    id <VKAnimationRunner> _runner;
    struct {
        unsigned int resuming:1;
        unsigned int runsForever:1;
        unsigned int startTimestampSet:1;
        unsigned int state:3;
    } _flags;
}

+ (void)setDragCoefficientGetter:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType stepHandler; // @synthesize stepHandler=_stepHandler;
- (void)transferToRunner:(id)arg1;
- (void)startWithRunner:(id)arg1;
- (id)initWithPriority:(int)arg1 name:(id)arg2;
- (id)initWithDuration:(double)arg1 priority:(int)arg2 name:(id)arg3;
@property(nonatomic) BOOL runsForever;
@property(readonly, nonatomic) BOOL running;
- (void)_stopAnimation:(BOOL)arg1;
- (id)initWithDuration:(double)arg1 name:(id)arg2;
- (void)onTimerFired:(double)arg1;
- (id)initWithDuration:(double)arg1;
- (void)pause;
- (id)initWithName:(id)arg1;
- (void)stop;
- (id)initWithPriority:(int)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) int priority; // @synthesize priority=_priority;
- (id).cxx_construct;
- (void)resume;
@property(copy, nonatomic) CDUnknownBlockType timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;
- (id)init;
- (void)dealloc;

@end

