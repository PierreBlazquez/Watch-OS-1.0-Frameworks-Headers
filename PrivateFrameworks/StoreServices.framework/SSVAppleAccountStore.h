//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, ACAccountStore, NSObject<OS_dispatch_queue>;

@interface SSVAppleAccountStore : NSObject
{
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ACAccount *_primaryAppleAccount;
}

+ (id)sharedAccountStore;
- (void)_accountStoreDidChangeNotification:(id)arg1;
@property(readonly) ACAccount *primaryAppleAccount;
- (void).cxx_destruct;
- (id)init;

@end

