//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion;

@interface _UIBackgroundTaskInfo : NSObject
{
    unsigned int _taskId;
    CDUnknownBlockType _expireHandler;
    BKSProcessAssertion *_processAssertion;
    int _count;
}

+ (id)backgroundTaskAssertionQueue;
- (void)fireExpirationHandler;
- (id)initWithProcessAssertion:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;

@end

