//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FTServices/FTMessageDelivery.h>

#import "FTMessageQueueDelegate.h"

@class IDSRemoteURLConnection;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate>
{
    IDSRemoteURLConnection *_remoteConnection;
    BOOL _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
}

- (BOOL)busy;
- (void)cancelMessage:(id)arg1;
- (BOOL)sendMessage:(id)arg1;
- (void)_updateWiFiAssertions;
- (void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2;
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id *)arg3;
- (BOOL)_tryRetryMessageWithTimeInterval:(double)arg1;
- (id)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3;
- (void)_dequeueIfNeeded;
- (void)_cleanupURLConnection;
- (void)_serverBagLoaded:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)_clearRetryTimer;
- (void)networkStateChanged;
- (void)invalidate;
- (id)init;
- (void)dealloc;

@end

