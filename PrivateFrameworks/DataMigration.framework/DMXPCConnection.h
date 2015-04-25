//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface DMXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_replyQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

- (void)_handleMessage:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (id)initWithServiceName:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)resume;
- (void)invalidate;
- (void)handleMessage:(id)arg1;

@end

