//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBDataProviderConnectionClientEndpoint.h"
#import "NSXPCListenerDelegate.h"

@class BBDataProviderConnection, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCListener;

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint>
{
    NSXPCListener *_wakeupListener;
    BBDataProviderConnection *__dataProviderConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connectionToServer;
    int _listeningToken;
}

+ (id)resolverForConnection:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)ping:(CDUnknownBlockType)arg1;
- (id)dataProviderConnection;
- (void)_queue_registerWithServer:(CDUnknownBlockType)arg1;
- (void)setDataProviderConnection:(id)arg1;
- (void)_registerForPublicationNotification;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)invalidate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

