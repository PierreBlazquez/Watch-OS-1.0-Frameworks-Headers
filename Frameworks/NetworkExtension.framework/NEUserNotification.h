//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface NEUserNotification : NSObject
{
    BOOL _isBanner;
    struct __CFUserNotification *_notification;
    struct __CFRunLoopSource *_notificationSource;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property struct __CFUserNotification *notification; // @synthesize notification=_notification;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (BOOL)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
- (id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned int)arg3;
- (id)initBannerWithHeader:(id)arg1 message:(id)arg2 disagreeMessage:(id)arg3;
@property struct __CFRunLoopSource *notificationSource; // @synthesize notificationSource=_notificationSource;
@property BOOL isBanner; // @synthesize isBanner=_isBanner;

@end
