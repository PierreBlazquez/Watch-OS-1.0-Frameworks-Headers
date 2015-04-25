//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XPCClientDelegate.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString, XPCClient;

@interface WPTransfer : NSObject <XPCClientDelegate>
{
    int _advertiserState;
    int _scannerState;
    id <WPTransferDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    XPCClient *_connection;
    NSObject<OS_xpc_object> *_server;
}

- (void)ignoreDevice;
- (void)startAdvertising;
- (void)startScan;
@property int advertiserState; // @synthesize advertiserState=_advertiserState;
@property int scannerState; // @synthesize scannerState=_scannerState;
- (void)updateScannerState:(int)arg1;
- (void)updateAdvertiserState:(int)arg1;
- (id)stateToString:(int)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 options:(id)arg4;
- (void)initXPCHandler:(id)arg1;
- (void)connectionDied;
- (void)messageArrived:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3;
- (void)stopAdvertising;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)stopScan;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
@property(retain) NSObject<OS_xpc_object> *server; // @synthesize server=_server;
@property(retain) XPCClient *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property __weak id <WPTransferDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)connectionInterrupted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

