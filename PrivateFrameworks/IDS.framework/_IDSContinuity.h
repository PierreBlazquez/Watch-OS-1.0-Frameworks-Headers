//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSDaemonListenerProtocol.h"

@class CUTWeakReference, NSObject<OS_dispatch_queue>, NSString;

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol>
{
    id _delegateContext;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    int _state;
}

- (void)_daemonDied:(id)arg1;
- (void)_handleReconnect;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)continuityDidDiscoverType:(int)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartScanningForType:(int)arg1 withError:(id)arg2;
- (void)continuityDidStopScanningForType:(int)arg1;
- (void)continuityDidStartScanningForType:(int)arg1;
- (void)continuityDidFailToStartAdvertisingOfType:(int)arg1 withError:(id)arg2;
- (void)continuityDidStopAdvertisingOfType:(int)arg1;
- (void)continuityDidStartAdvertisingOfType:(int)arg1;
- (void)continuityDidStopTrackingPeer:(id)arg1 forType:(int)arg2;
- (void)continuityDidStopTrackingPeer:(id)arg1;
- (void)continuityDidStartTrackingPeer:(id)arg1 forType:(int)arg2 error:(id)arg3;
- (void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)continuityDidLosePeer:(id)arg1 forType:(int)arg2;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidUpdateState:(int)arg1;
- (void)stopTrackingPeer:(id)arg1 forType:(int)arg2;
- (void)startTrackingPeer:(id)arg1 forType:(int)arg2;
- (void)stopScanningForType:(int)arg1;
- (void)startScanningForType:(int)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)startScanningForType:(int)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4;
- (void)stopAdvertisingOfType:(int)arg1;
- (void)startAdvertisingOfType:(int)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 delegateContext:(id)arg3;
@property(readonly) int state; // @synthesize state=_state;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

