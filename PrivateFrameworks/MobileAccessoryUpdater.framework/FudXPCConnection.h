//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FudConnection.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface FudXPCConnection : NSObject <FudConnection>
{
    NSString *clientIdentifier;
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    NSObject<OS_dispatch_queue> *sessionQueue;
    NSObject<OS_dispatch_queue> *replyQueue;
    CDUnknownBlockType messageHandler;
    int notifyToken;
    BOOL didStop;
}

- (id)initWithClientName:(id)arg1 replyHandlerQueue:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)sendMessageToFud:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendMessageToFud:(id)arg1;
- (BOOL)createSession;
- (BOOL)registerForBSDNotifications;
- (void)stop;
- (void)dealloc;
- (void)createConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

