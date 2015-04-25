//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface SSXPCServer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_entitlementName;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_observers;
    NSString *_serviceName;
}

+ (id)mainServer;
- (void)removeObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3;
- (void)_dispatchMessage:(id)arg1 connection:(id)arg2;
- (id)initWithServiceName:(id)arg1 entitlement:(id)arg2 queue:(id)arg3;
- (id)initWithServiceName:(id)arg1;
- (void)start;
- (id)init;
- (void)dealloc;

@end

