//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class HDIDSPersistentDictionary, IDSService, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HDIDSMessageCenter : NSObject <IDSServiceDelegate>
{
    NSString *_serviceIdentifier;
    NSString *_launchNotification;
    IDSService *_service;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    HDIDSPersistentDictionary *_persistentContextStore;
    NSDate *_nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    NSString *_cacheDirectoryPath;
    id <HDIDSMessageCenterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, copy, nonatomic) NSString *cacheDirectoryPath; // @synthesize cacheDirectoryPath=_cacheDirectoryPath;
- (void)addResponseHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addErrorHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addRequestHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (id)initWithIDSServiceIdentifier:(id)arg1 launchOnDemandNotification:(id)arg2 cacheDirectoryPath:(id)arg3;
- (void)_sendResponse:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) IDSService *idsService; // @dynamic idsService;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)dropExtantMessages;
- (id)_pbMappingForMessageID:(unsigned short)arg1;
- (void)_handleError:(id)arg1 context:(id)arg2;
- (void)_updateExpireTimerWithDate:(id)arg1;
- (void)_expireMessages;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (id)_queue;
- (void).cxx_destruct;
- (void)resume;
@property(nonatomic) __weak id <HDIDSMessageCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)sendRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

