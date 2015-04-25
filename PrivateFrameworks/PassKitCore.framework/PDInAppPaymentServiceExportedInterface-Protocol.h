//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSNumber, NSString, NSXPCListenerEndpoint, PKPaymentRequest;

@protocol PDInAppPaymentServiceExportedInterface
- (void)retrievePaymentListenerEndpointForHostIdentifier:(NSString *)arg1 handler:(void (^)(BOOL, NSXPCListenerEndpoint *))arg2;
- (void)registerPaymentListenerEndpoint:(NSXPCListenerEndpoint *)arg1 forHostIdentifier:(NSString *)arg2 handler:(void (^)(BOOL))arg3;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(PKPaymentRequest *)arg1 forHostIdentifier:(NSString *)arg2 orientation:(NSNumber *)arg3 handler:(void (^)(BOOL))arg4;
- (void)inAppPaymentServiceSuspended;
- (void)inAppPaymentServiceResumed;
@end

