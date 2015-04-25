//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "ACUISetupViewControllerDelegate.h"

@class ACUIAccountViewProvidersManager, NSArray, NSString;

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate>
{
    BOOL _dontShowSecondLevelOtherAccountTypes;
    NSArray *_preEnabledDataclasses;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
}

- (id)specifiers;
- (void)setupViewControllerDidDismiss:(id)arg1;
@property(readonly, nonatomic) ACUIAccountViewProvidersManager *viewProvidersManager;
- (id)_specifierForRegionalAccountType:(id)arg1;
- (id)giantSpecifierWithName:(id)arg1 forAccountTypeID:(id)arg2;
- (id)specifierForOtherAccounts;
- (id)_specifierForOutlookAccount;
- (id)_specifierForAOLAccount;
- (id)_specifierForYahooAccount;
- (id)_specifierForGmailAccount;
- (id)_specifiersForRegionalMailAccounts;
- (id)_specifierForExchangeAccount;
- (id)_specifierForiCloudAccount;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

