//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding.h"

@class NSString, SSAuthenticationContext, SSLookupProperties;

@interface SSLookupRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;
    int _personalizationStyle;
    SSLookupProperties *_properties;
    int _resultFilters;
}

@property(nonatomic) int resultFilters; // @synthesize resultFilters=_resultFilters;
@property(nonatomic) int personalizationStyle; // @synthesize personalizationStyle=_personalizationStyle;
- (void)_setTimeoutInterval:(id)arg1;
@property(readonly, copy, nonatomic) SSLookupProperties *_lookupProperties;
@property(nonatomic) BOOL authenticatesIfNeeded;
@property(nonatomic) int localizationStyle;
@property(copy, nonatomic) NSString *keyProfile;
- (id)valueForRequestParameter:(id)arg1;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)start;
- (id)init;
- (void)dealloc;
- (void)startWithLookupBlock:(CDUnknownBlockType)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

