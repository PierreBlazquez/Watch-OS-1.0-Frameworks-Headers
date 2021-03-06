//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString, _IDSAccount;

@interface IDSAccount : NSObject
{
    _IDSAccount *_internal;
}

@property(readonly, retain, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) NSData *registrationCertificate;
- (void)_reregisterAndReidentify:(BOOL)arg1;
- (void)deactivateAndPurgeIdentify;
@property(readonly, nonatomic) NSArray *registeredURIs;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (void)removeRegistrationDelegate:(id)arg1;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
@property(retain, nonatomic) NSDictionary *accountInfo;
- (void)updateAccountWithAccountInfo:(id)arg1;
- (void)passwordUpdated;
@property(retain, nonatomic) NSString *loginID;
- (void)validateProfile;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)validateAliases:(id)arg1;
- (void)unvalidateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)authenticateAccount;
@property(readonly, nonatomic) int registrationStatus;
@property(readonly, retain, nonatomic) NSArray *vettedAliases;
@property(readonly, retain, nonatomic) NSArray *aliases;
@property(readonly, retain, nonatomic) NSDictionary *profileInfo;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (void)_callNearbyDevicesChanged;
@property(readonly, nonatomic) NSString *profileID;
@property(readonly, nonatomic) NSDictionary *regionServerContext;
@property(readonly, nonatomic) NSString *regionBasePhoneNumber;
@property(readonly, nonatomic) NSDate *dateRegistered;
@property(readonly, nonatomic) NSDate *nextRegistrationDate;
@property(readonly, retain, nonatomic) NSArray *nearbyDevices;
@property(readonly, nonatomic) BOOL canSend;
@property(readonly, retain, nonatomic) NSString *primaryServiceName;
- (void)_setIsEnabled:(BOOL)arg1;
- (id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
@property(readonly, retain, nonatomic) NSArray *aliasStrings;
- (void)setAuthToken:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *devices;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) int accountType;
@property(readonly, nonatomic) NSString *regionID;
@property(readonly, retain, nonatomic) NSString *displayName;
- (BOOL)_isEnabled;
@property(readonly, nonatomic) BOOL isActive;
- (id)description;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSString *serviceName;
- (void)setPassword:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)_internal;

@end

