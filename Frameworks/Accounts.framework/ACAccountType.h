//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ACAccountStore, NSSet, NSString, NSURL;

@interface ACAccountType : NSObject <NSSecureCoding>
{
    NSString *_accountTypeDescription;
    NSString *_identifier;
    NSString *_credentialType;
    NSURL *_objectID;
    int _visibility;
    NSString *_credentialProtectionPolicy;
    ACAccountStore *_accountStore;
    int _supportsAuthentication;
    BOOL _supportsMultipleAccounts;
    NSSet *_supportedDataclasses;
    NSSet *_syncableDataclasses;
    NSSet *_accessKeys;
    BOOL _encryptAccountProperties;
    NSString *_owningBundleID;
    NSString *_owningTeamID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int visibility;
@property(retain, nonatomic) NSURL *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSString *credentialType; // @synthesize credentialType=_credentialType;
@property(readonly, nonatomic) NSSet *supportedDataclasses; // @synthesize supportedDataclasses=_supportedDataclasses;
- (id)initWithManagedAccountType:(id)arg1;
@property(readonly, nonatomic) NSSet *accessKeys; // @synthesize accessKeys=_accessKeys;
@property(readonly, nonatomic) BOOL encryptAccountProperties; // @synthesize encryptAccountProperties=_encryptAccountProperties;
@property(nonatomic) BOOL supportsMultipleAccounts; // @synthesize supportsMultipleAccounts=_supportsMultipleAccounts;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
@property(retain, nonatomic) NSString *owningBundleID; // @synthesize owningBundleID=_owningBundleID;
@property(readonly, nonatomic) NSSet *syncableDataclasses; // @synthesize syncableDataclasses=_syncableDataclasses;
@property(nonatomic) int supportsAuthentication; // @synthesize supportsAuthentication=_supportsAuthentication;
@property(copy, nonatomic) id credentialProtectionPolicy;
- (void)setAccountTypeDescription:(id)arg1;
- (void).cxx_destruct;
- (void)setIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *accountTypeDescription; // @synthesize accountTypeDescription=_accountTypeDescription;
@property(nonatomic) __weak ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) NSString *owningTeamID; // @synthesize owningTeamID=_owningTeamID;
@property(readonly, nonatomic) BOOL accessGranted;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
@property(readonly, nonatomic) NSString *fullDescription;

@end

