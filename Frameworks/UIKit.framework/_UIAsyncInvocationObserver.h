//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface _UIAsyncInvocationObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_postCompletionQueue;
}

+ (void)whenInvocationsCompleteForObservers:(id)arg1 do:(CDUnknownBlockType)arg2;
- (void)_didCompleteInvocation;
- (void)whenCompleteDo:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

@end

