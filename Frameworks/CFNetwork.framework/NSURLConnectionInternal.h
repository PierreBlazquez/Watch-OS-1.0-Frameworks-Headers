//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLAuthenticationChallengeSender.h"
#import "NSURLConnectionRequired.h"

@class NSDictionary, NSOperationQueue, NSString, NSURL, NSURLConnection, NSURLRequest;

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender>
{
    NSURLConnection *_connection;
    NSOperationQueue *_delegateQueue;
    NSURL *_url;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    id _delegate;
    NSDictionary *_connectionProperties;
    BOOL _connectionActive;
}

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)currentRequest;
- (id)originalRequest;
- (void)_invalidate;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)dealloc;
- (void)_withConnectionAndDelegate:(CDUnknownBlockType)arg1 onlyActive:(BOOL)arg2;
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;
- (BOOL)isConnectionActive;
- (void)_withActiveConnectionAndDelegate:(CDUnknownBlockType)arg1;
- (void)setConnectionActive:(BOOL)arg1;
- (void)_withConnectionDisconnectFromConnection;
- (void)_withConnectionAndDelegate:(CDUnknownBlockType)arg1;
- (id)_connectionProperties;
- (void)_setDelegateQueue:(id)arg1;
- (id)_timingData;
- (id)initWithInfo:(const struct InternalInit *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

