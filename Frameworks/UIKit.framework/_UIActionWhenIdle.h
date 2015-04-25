//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation;

@interface _UIActionWhenIdle : NSObject
{
    NSInvocation *_invocation;
}

+ (id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void)addObserverToRunLoop;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (BOOL)isValid;
- (void)invoke;
- (void)invalidate;
- (void)dealloc;

@end
