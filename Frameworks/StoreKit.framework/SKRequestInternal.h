//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKPaymentQueueClient, SKXPCConnection;

@interface SKRequestInternal : NSObject
{
    int _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    SKXPCConnection *_connection;
    id <SKRequestDelegate> _delegate;
    int _state;
}

- (void)dealloc;

@end

