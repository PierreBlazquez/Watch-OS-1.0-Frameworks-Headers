//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreCECBusDelegate.h"
#import "CoreCECDeviceDelegate.h"

@class CoreCECBus, CoreCECDevice;

@protocol CoreRCXPCClientCEC <CoreCECBusDelegate, CoreCECDeviceDelegate>
- (void)cecBus:(CoreCECBus *)arg1 activeSourceHasChangedTo:(CoreCECDevice *)arg2 fromDevice:(CoreCECDevice *)arg3;
@end

