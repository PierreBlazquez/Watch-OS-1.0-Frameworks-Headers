//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SSXPCCoding.h"

@class NSData, NSLock, NSNumber, NSString;

@interface SSAccount : NSObject <SSXPCCoding, NSCopying>
{
    int _accountKind;
    NSString *_accountName;
    int _accountScope;
    int _accountSource;
    BOOL _active;
    BOOL _activeLockerAccount;
    int _availableServiceTypes;
    NSData *_bioToken;
    NSString *_creditsString;
    BOOL _demo;
    BOOL _didFallbackToPassword;
    int _enabledServiceTypes;
    NSString *_firstName;
    NSString *_itunesPassSerialNumber;
    NSString *_lastName;
    NSLock *_lock;
    BOOL _newCustomer;
    NSString *_secureToken;
    NSString *_storeFrontID;
    NSNumber *_uniqueIdentifier;
}

- (void)setBiometricToken:(id)arg1;
- (id)popBiometricToken;
- (BOOL)mergeValuesFromAccount:(id)arg1;
- (id)copyLockdownRepresentation;
@property(getter=isActiveLockerAccount) BOOL activeLockerAccount;
- (void)resetTransientData;
- (void)removeEnabledServiceTypes:(int)arg1;
- (void)removeAvailableServiceTypes:(int)arg1;
- (void)getKeybagSyncDataWithType:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getITunesMatchStatusWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addEnabledServiceTypes:(int)arg1;
- (void)addAvailableServiceTypes:(int)arg1;
@property(readonly, getter=isAuthenticated) BOOL authenticated;
- (void)getTermsAndConditionsWithBlock:(CDUnknownBlockType)arg1;
- (void)getPurchasedItemsForItems:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(CDUnknownBlockType)arg1;
- (void)acceptTermsAndConditions:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initDemoAccount;
@property(getter=isSocialEnabled) BOOL socialEnabled;
@property int enabledServiceTypes;
@property int availableServiceTypes;
@property(getter=isNewCustomer) BOOL newCustomer;
- (void)setDidFallbackToPassword:(BOOL)arg1;
@property int accountSource;
@property int accountScope;
@property int accountKind;
@property(copy) NSString *storeFrontIdentifier;
@property(copy) NSString *ITunesPassSerialNumber;
@property(copy) NSString *creditsString;
- (BOOL)didFallbackToPassword;
- (void)_sendBlockingXPCMessage:(id)arg1;
@property(copy) NSString *secureToken;
@property(getter=isDemoAccount) BOOL demoAccount;
- (void)setLockdownDictionary:(id)arg1;
@property(copy) NSString *lastName;
@property(copy) NSString *firstName;
@property(copy) NSString *accountName;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
@property(retain) NSNumber *uniqueIdentifier;
@property(getter=isActive) BOOL active;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

