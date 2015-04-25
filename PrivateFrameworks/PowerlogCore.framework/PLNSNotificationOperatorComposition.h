//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, PLOperator;

@interface PLNSNotificationOperatorComposition : NSObject
{
    NSArray *_notificationNames;
    CDUnknownBlockType _operatorBlock;
    PLOperator *_operator;
    NSObject<OS_dispatch_queue> *_workQueue;
    id _observer;
}

- (id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithOperator:(id)arg1 forNotification:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithOperator:(id)arg1 forNotifications:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)listenForNotifications:(BOOL)arg1;
@property(retain) NSArray *notificationNames; // @synthesize notificationNames=_notificationNames;
- (void)notificationCallback:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 forNotifications:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSString *notificationName;
@property __weak PLOperator *operator; // @synthesize operator=_operator;
@property(copy, nonatomic) CDUnknownBlockType operatorBlock; // @synthesize operatorBlock=_operatorBlock;
- (void).cxx_destruct;
@property(retain) id observer; // @synthesize observer=_observer;
- (void)dealloc;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

@end

