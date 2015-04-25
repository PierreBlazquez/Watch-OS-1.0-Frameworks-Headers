//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKPaymentQueueClient;

@interface SKRequest : NSObject
{
    id _requestInternal;
}

- (void)_beginBackgroundTask;
- (void)_shutdownRequest;
- (void)start;
@property(nonatomic) id <SKRequestDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)cancel;
@property(copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;
- (void)_sendXPCMessage;
- (void)_startWithMessage:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)_endBackgroundTask;

@end
