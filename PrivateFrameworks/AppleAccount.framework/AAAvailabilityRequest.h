//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAAvailabilityRequest : AARequest
{
    ACAccount *_account;
}

+ (Class)responseClass;
- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)urlString;

@end

