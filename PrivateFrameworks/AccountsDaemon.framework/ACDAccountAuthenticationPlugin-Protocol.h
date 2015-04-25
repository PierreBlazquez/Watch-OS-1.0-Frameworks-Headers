//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, ACAccountCredential, ACDAccountStore, ACDClient, NSDictionary, NSString;

@protocol ACDAccountAuthenticationPlugin <NSObject>

@optional
- (void)verifyCredentialsForAccount:(ACAccount *)arg1 accountStore:(ACDAccountStore *)arg2 completion:(void (^)(ACAccount *, NSError *))arg3;
- (ACAccountCredential *)credentialForAccount:(ACAccount *)arg1 client:(ACDClient *)arg2 error:(id *)arg3;
- (ACAccountCredential *)credentialForAccount:(ACAccount *)arg1 client:(ACDClient *)arg2;
- (void)verifyCredentialsForAccount:(ACAccount *)arg1 client:(ACDClient *)arg2 withHandler:(void (^)(ACAccount *, NSError *))arg3;
- (void)renewCredentialsForAccount:(ACAccount *)arg1 accountStore:(ACDAccountStore *)arg2 reason:(NSString *)arg3 completion:(void (^)(int, NSError *))arg4;
- (NSString *)renewalIDForAccount:(ACAccount *)arg1;
- (ACAccountCredential *)credentialForAccount:(ACAccount *)arg1 client:(ACDClient *)arg2 store:(ACDAccountStore *)arg3 error:(id *)arg4;
- (BOOL)isPushSupportedForAccount:(ACAccount *)arg1;
- (void)renewCredentialsForAccount:(ACAccount *)arg1 accountStore:(ACDAccountStore *)arg2 options:(NSDictionary *)arg3 completion:(void (^)(int, NSError *))arg4;
- (void)verifyCredentialsForAccount:(ACAccount *)arg1 accountStore:(ACDAccountStore *)arg2 options:(NSDictionary *)arg3 completion:(void (^)(ACAccount *, NSError *))arg4;
@end

