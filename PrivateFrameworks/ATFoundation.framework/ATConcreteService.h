//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATService.h"

#import "ATMessageLinkObserver.h"
#import "ATMessageLinkRequestHandler.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface ATConcreteService : ATService <ATMessageLinkObserver, ATMessageLinkRequestHandler>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_signalSource;
    double _startTime;
}

- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)stop;
- (void).cxx_destruct;
- (BOOL)run;
- (void)removeObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

