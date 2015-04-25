//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface ATXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    CDUnknownBlockType _lockdownHandler;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _disconnectHandler;
    NSMutableSet *_outstandingMessages;
    BOOL _assertionHeld;
    id _context;
}

- (id)initWithXPCConnection:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_handleXPCError:(id)arg1;
- (void)shutdown;
- (void)sendMessage:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
- (id)eventQueue;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
@property(nonatomic) BOOL assertionHeld; // @synthesize assertionHeld=_assertionHeld;
@property(copy, nonatomic) CDUnknownBlockType lockdownHandler; // @synthesize lockdownHandler=_lockdownHandler;
- (unsigned int)_outstandingMessages;
- (void)_removeMessage:(id)arg1;
- (void)_registerMessage:(id)arg1;
- (void)_handleXPCMessage:(id)arg1;
- (void)_handleLockdownMessage:(void *)arg1;
- (void)_sendMessage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) NSString *serviceName;

@end

