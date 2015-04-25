//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

@interface OSDOscarDevice : NSObject
{
    unsigned int service;
    unsigned int connect;
    struct IONotificationPort *notifyPort;
    unsigned int notifyHandle;
    struct __IOHIDEventSystemClient *_HIDSystemClient;
    struct __IOHIDServiceClient *_OscarPlugin;
    NSObject<OS_dispatch_semaphore> *__sema;
}

+ (id)getOscarIOReport;
- (_Bool)forceOscarPanic;
- (int)_getOscarProperty:(unsigned char)arg1 property:(unsigned int)arg2 value:(void *)arg3 size:(unsigned int *)arg4 error:(id *)arg5;
- (_Bool)_unregisterForOscarNotification;
- (_Bool)_registerForOscarNotification;
- (_Bool)_setOscarProperty:(struct __CFString *)arg1 withObject:(void *)arg2;
- (struct __IOHIDServiceClient *)getOscarPlugin;
@property(nonatomic) struct __IOHIDServiceClient *OscarPlugin; // @synthesize OscarPlugin=_OscarPlugin;
@property(nonatomic) struct __IOHIDEventSystemClient *HIDSystemClient; // @synthesize HIDSystemClient=_HIDSystemClient;
- (int)getOscarState;
- (id)desiredTestingSampleRateForDevice:(unsigned char)arg1 error:(id *)arg2;
- (id)readRegisterForDevice:(unsigned char)arg1 address:(unsigned char)arg2 length:(unsigned char)arg3 error:(id *)arg4;
- (double)oscarStartupTimeForDevice:(unsigned char)arg1 error:(id *)arg2;
- (id)oscarSampleRatesForDevice:(unsigned char)arg1 error:(id *)arg2;
- (_Bool)forceOscarPanicWithReason:(id)arg1;
- (_Bool)waitForOscarBootedWithTimeout:(double)arg1;
- (_Bool)wakeOnOscarSeconds:(int)arg1;
- (_Bool)pingOscar:(id *)arg1;
- (struct __IOHIDEventSystemClient *)getHIDSystem;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *_sema; // @synthesize _sema=__sema;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
