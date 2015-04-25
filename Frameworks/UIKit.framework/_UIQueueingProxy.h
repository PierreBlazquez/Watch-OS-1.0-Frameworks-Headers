//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UITargetedProxy.h>

@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy
{
    int _lock;
    unsigned int _suspensionCount;
    NSMutableArray *_queuedInvocations;
    CDUnknownBlockType _shouldSuspendInvocationBlock;
}

+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(CDUnknownBlockType)arg2;
+ (id)proxyWithTarget:(id)arg1;
- (void)removeAllEnqueuedInvocations;
- (void)_dispatchSuspendedMessages;
- (void)resume;
- (void)forwardInvocation:(id)arg1;
- (void)suspend;
- (id)description;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

@end

