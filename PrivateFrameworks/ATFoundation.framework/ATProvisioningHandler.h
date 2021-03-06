//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATMessageLinkObserver.h"
#import "ATMessageLinkRequestHandler.h"

@class NSString;

@interface ATProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler>
{
    int _endpointType;
    NSString *_expectedRequestCommand;
}

- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)messageLinkWasOpened:(id)arg1;
- (id)initAsEndpointType:(int)arg1;
- (void)_processProvisioningResponse:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_processProvisioningResponse:(id)arg1 toCommand:(id)arg2 onMessageLink:(id)arg3;
- (id)_paramsForRequest:(id)arg1;
- (void)_processProvisioningRequest:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_sendProvisioningRequest:(id)arg1 OnMessageLink:(id)arg2;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

