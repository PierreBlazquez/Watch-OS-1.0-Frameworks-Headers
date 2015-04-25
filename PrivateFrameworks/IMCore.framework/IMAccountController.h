//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface IMAccountController : NSObject
{
    NSMutableArray *_accounts;
    NSMutableDictionary *_accountMap;
    BOOL _isReadOnly;
    BOOL _cachesEnabled;
    NSArray *_operationalAccountsCache;
    NSMutableDictionary *_serviceToActiveAccountsMap;
    NSMutableDictionary *_serviceToAccountsMap;
    NSMutableDictionary *_serviceToConnectedAccountsMap;
    NSMutableDictionary *_serviceToOperationalAccountsMap;
}

+ (id)bestAccountFromAccounts:(id)arg1;
+ (id)sharedInstance;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)deleteAccount:(id)arg1;
@property(readonly, nonatomic) NSArray *activeAccounts;
- (id)_operationalPhoneAccountForService:(id)arg1;
- (id)__iCloudSystemAccountForService:(id)arg1;
- (void)_disableCache;
- (void)_enableCache;
- (id)jabberAccount;
- (id)aimAccount;
- (id)mostLoggedInAccount;
- (id)bestAccountWithCapability:(unsigned long long)arg1;
- (id)bestConnectedAccountForService:(id)arg1;
- (id)bestOperationalAccountForService:(id)arg1;
- (id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3;
- (BOOL)accountConnected:(id)arg1;
- (BOOL)accountConnecting:(id)arg1;
- (BOOL)activateAndHandleReconnectAccount:(id)arg1;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2;
- (BOOL)activateAccount:(id)arg1;
- (BOOL)addAccount:(id)arg1 atIndex:(int)arg2 locally:(BOOL)arg3;
- (BOOL)addAccount:(id)arg1 atIndex:(int)arg2;
- (BOOL)canDeleteAccount:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *_accounts;
@property(readonly, nonatomic) int numberOfAccounts;
- (id)accountAtIndex:(int)arg1;
- (id)bestActiveAccountForService:(id)arg1;
- (id)bestAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2;
- (BOOL)canActivateAccount:(id)arg1;
- (BOOL)activateAndHandleReconnectAccounts:(id)arg1;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3;
- (BOOL)activateAccounts:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3;
- (BOOL)canActivateAccounts:(id)arg1;
- (BOOL)_deactivateAccounts:(id)arg1;
- (BOOL)deactivateAccounts:(id)arg1 withDisable:(BOOL)arg2;
- (BOOL)deactivateAccount:(id)arg1;
- (void)_rebuildOperationalAccountsCache:(BOOL)arg1;
@property(readonly, nonatomic) NSArray *operationalAccounts;
- (BOOL)accountActive:(id)arg1;
- (void)_accountRegistrationStatusChanged:(id)arg1;
- (void)_activeAccountChanged:(id)arg1;
- (BOOL)deactivateAccounts:(id)arg1;
- (BOOL)activateAccounts:(id)arg1;
- (BOOL)deactivateAccount:(id)arg1 withDisable:(BOOL)arg2;
- (BOOL)deleteAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)addAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)_deactivateAccount:(id)arg1;
- (BOOL)activateAccount:(id)arg1 locally:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *connectedAccounts;
@property(readonly, nonatomic) id bestAccountForStatus;
- (void)autoLogin;
- (BOOL)addAccount:(id)arg1;
- (id)operationalAccountsWithCapability:(unsigned long long)arg1;
- (id)connectedAccountsWithCapability:(unsigned long long)arg1;
- (id)accountsWithCapability:(unsigned long long)arg1;
- (id)connectedAccountsForService:(id)arg1;
- (id)activeAccountsForService:(id)arg1;
- (id)_bestOperationalAccountForSendingForService:(id)arg1;
- (id)bestAccountForService:(id)arg1;
- (id)_bestAccountForAddresses:(id)arg1;
- (id)accountForUniqueID:(id)arg1;
@property(readonly, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (id)accountsForService:(id)arg1;
- (id)operationalAccountsForService:(id)arg1;
- (BOOL)readOnly;
- (id)init;
- (void)dealloc;

@end

