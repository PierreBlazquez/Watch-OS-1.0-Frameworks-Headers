//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/_NSXPCDistantObjectWithError.h>

@class NSDictionary;

@interface _NSXPCDistantObjectWithUserInfoAndError : _NSXPCDistantObjectWithError
{
    NSDictionary *_userInfo;
}

- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 interface:(id)arg3 userInfo:(id)arg4 error:(CDUnknownBlockType)arg5;

@end

