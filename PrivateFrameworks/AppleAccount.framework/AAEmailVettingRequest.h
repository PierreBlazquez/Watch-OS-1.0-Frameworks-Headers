//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAEmailVettingRequest : AARequest
{
    ACAccount *_account;
}

- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (void).cxx_destruct;

@end

