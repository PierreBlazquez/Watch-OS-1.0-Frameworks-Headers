//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMService : NSObject
{
}

+ (id)jabberService;
+ (id)subnetService;
+ (id)aimService;
+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;
+ (unsigned int)statusForABPerson:(id)arg1;
+ (unsigned int)statusForIMPerson:(id)arg1;
+ (BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2;
+ (unsigned int)myStatus;
+ (id)myIdleTime;
+ (id)serviceWithName:(id)arg1;
+ (id)allServicesNonBlocking;
+ (id)allServices;
+ (id)imageURLForStatus:(unsigned int)arg1;
+ (id)imageNameForStatus:(unsigned int)arg1;
+ (void)forgetStatusImageAppearance;
+ (id)callService;
+ (id)facetimeService;
+ (id)notificationCenter;
+ (id)iMessageService;
+ (id)smsService;
- (id)infoForDisplayedPeople;
- (id)infoForAllPeople;
- (id)infoForPerson:(id)arg1;
- (id)myScreenNames;
- (id)screenNamesForPerson:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (id)infoForPreferredScreenNames;
- (id)infoForAllScreenNames;
- (id)infoForScreenName:(id)arg1;
- (BOOL)initialSyncPerformed;
- (void)logout;
- (void)login;
- (unsigned int)status;
- (id)localizedShortName;
- (id)localizedName;
- (BOOL)isEnabled;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

