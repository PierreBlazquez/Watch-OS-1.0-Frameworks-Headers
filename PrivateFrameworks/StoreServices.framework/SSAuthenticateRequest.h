//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding.h"

@class NSString, SSAuthenticationContext;

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;
}

- (id)initWithAuthenticationContext:(id)arg1;
@property(readonly) SSAuthenticationContext *authenticationContext;
- (id)initWithAccount:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)start;
- (void)dealloc;
- (void)startWithAuthenticateResponseBlock:(CDUnknownBlockType)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SSAuthenticateRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

