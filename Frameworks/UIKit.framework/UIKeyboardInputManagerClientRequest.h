//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation;

@interface UIKeyboardInputManagerClientRequest : NSObject
{
    NSInvocation *_invocation;
    unsigned int _errorCount;
}

+ (id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(BOOL)arg2;
@property(nonatomic) unsigned int errorCount; // @synthesize errorCount=_errorCount;
- (id)initWithInvocation:(id)arg1;
@property(readonly, nonatomic) NSInvocation *invocation;
- (void)dealloc;

@end
