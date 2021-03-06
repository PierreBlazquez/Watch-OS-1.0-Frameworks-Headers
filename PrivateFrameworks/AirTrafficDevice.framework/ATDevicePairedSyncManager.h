//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATIDSServiceListener.h"
#import "ATMessageLinkObserver.h"
#import "ATSessionObserver.h"

@class ATDeviceService, ATIDSService, NSObject<OS_dispatch_queue>, NSString;

@interface ATDevicePairedSyncManager : NSObject <ATMessageLinkObserver, ATIDSServiceListener, ATSessionObserver>
{
    ATDeviceService *_deviceService;
    NSObject<OS_dispatch_queue> *_queue;
    ATIDSService *_idsService;
    BOOL _initialSyncPhaseCompleted;
}

@property BOOL initialSyncPhaseCompleted; // @synthesize initialSyncPhaseCompleted=_initialSyncPhaseCompleted;
- (void)handleDeviceUnPairedNotification;
- (void)handleDevicePairedNotification;
- (BOOL)hasRestriction;
- (id)initWithIDSService:(id)arg1;
- (void)idsServiceDevicesDidChange:(id)arg1;
- (void).cxx_destruct;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

