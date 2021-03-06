//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSString;

@interface NSURL (Telephony)
+ (id)telephonyURLForTelEmergencyCall;
+ (id)telephonyURLForTelEmergency;
+ (id)URLWithScheme:(id)arg1;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(BOOL)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(BOOL)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
- (id)telephonyParameterDictionary;
@property(readonly) BOOL isBasebandLogURL;
- (id)webSafeTelephoneURL;
- (BOOL)isWebSafeTelephoneURL;
- (id)numberQualifiedForAddressBook;
- (id)formattedPhoneNumber;
@property(readonly) BOOL wasAlreadyAssisted;
@property(readonly) BOOL suppressAssist;
@property(readonly) BOOL forceAssist;
@property(readonly) NSString *originatingUIIdentifier;
@property(readonly) int addressBookUID;
@property(readonly) NSString *overrideName;
- (id)_mobilePhonePathParameters;
@property(readonly) BOOL isVoicemailURL;
@property(readonly) BOOL isEmergencyCallURL;
@property(readonly) BOOL isEmergencyURL;
- (id)_mobilePhoneQueryParameters;
- (id)_phoneNumberConvertNumbersToLatin:(BOOL)arg1;
@property(readonly) int callService;
@property(readonly) NSString *phoneNumber;
- (BOOL)hasTelephonyScheme;
@end

