//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface AAInviteFamilyMemberRequest : AAFamilyRequest
{
    NSString *_inviteeEmail;
    NSString *_inviteeCompositeName;
    NSString *_inviteeShortName;
}

- (id)urlRequest;
@property(copy, nonatomic) NSString *inviteeShortName; // @synthesize inviteeShortName=_inviteeShortName;
@property(copy, nonatomic) NSString *inviteeCompositeName; // @synthesize inviteeCompositeName=_inviteeCompositeName;
@property(copy, nonatomic) NSString *inviteeEmail; // @synthesize inviteeEmail=_inviteeEmail;
- (BOOL)isUserInitiated;
- (void).cxx_destruct;
- (id)urlString;

@end
