//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSilo;

@interface CLTimer : NSObject
{
    CLSilo *_silo;
    id <CLTimerScheduler> _scheduler;
    CDUnknownBlockType _handler;
    double _nextFireTime;
    double _fireInterval;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)invalidate;
@property(nonatomic) double fireInterval; // @synthesize fireInterval=_fireInterval;
@property(nonatomic) double nextFireTime; // @synthesize nextFireTime=_nextFireTime;
- (void)setNextFireTime:(double)arg1 interval:(double)arg2;
- (void)setNextFireAfterDelay:(double)arg1 interval:(double)arg2;
- (void)setNextFireAfterDelay:(double)arg1;
- (void)updateScheduler;
- (id)initInSilo:(id)arg1 withScheduler:(id)arg2;
- (void)shouldFire;

@end

