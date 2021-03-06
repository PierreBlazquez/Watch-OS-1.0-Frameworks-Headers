//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSTimer, PLOperator;

@interface PLNSTimerOperatorComposition : NSObject
{
    BOOL _repeats;
    CDUnknownBlockType _operatorBlock;
    NSDate *_fireDate;
    PLOperator *_operator;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSTimer *_timer;
    id _userInfo;
    double _interval;
    double _tolerance;
}

@property BOOL repeats; // @synthesize repeats=_repeats;
- (id)initWithWorkQueue:(id)arg1 withFireDate:(id)arg2 withInterval:(double)arg3 withTolerance:(double)arg4 repeats:(BOOL)arg5 withUserInfo:(id)arg6 withBlock:(CDUnknownBlockType)arg7;
@property(nonatomic) BOOL timerActive;
- (id)initWithOperator:(id)arg1 withFireDate:(id)arg2 withInterval:(double)arg3 withTolerance:(double)arg4 repeats:(BOOL)arg5 withUserInfo:(id)arg6 withBlock:(CDUnknownBlockType)arg7;
- (void)fireTimerEarly;
- (void)handleTimerFire;
@property __weak PLOperator *operator; // @synthesize operator=_operator;
@property(copy, nonatomic) CDUnknownBlockType operatorBlock; // @synthesize operatorBlock=_operatorBlock;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void).cxx_destruct;
@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;
@property double tolerance; // @synthesize tolerance=_tolerance;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

@end

