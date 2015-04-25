//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSPointerArray;

@interface MPAVSystemRoutingController : NSObject
{
    NSPointerArray *_clientRoutingControllers;
    int _clientDiscoveryMode;
    NSObject<OS_dispatch_queue> *_serialQueue;
    int _debugNotifyToken;
}

+ (id)sharedRoutingController;
- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)dealloc;
- (void)unregisterClientRoutingController:(id)arg1;
- (void)registerClientRoutingController:(id)arg1;
- (void)_updateClientRouteDiscoveryMode;
- (void)_onQueueUpdateClientRouteDiscoveryMode;
- (void)_debugLogSystemControllerState;
- (void)_clientRoutingControllerDidUpdateDiscoveryModeNotification:(id)arg1;

@end

