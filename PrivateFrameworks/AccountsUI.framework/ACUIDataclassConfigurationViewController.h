//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, NSArray, NSMutableArray, NSMutableDictionary, NSString, PSSpecifier;

@interface ACUIDataclassConfigurationViewController : ACUIViewController
{
    BOOL _forceMailSetup;
    NSMutableArray *_dirtyDataclassCells;
    NSString *_accountIdentifier;
    NSMutableDictionary *_allDesiredDataclassActions;
    BOOL _isMergingSyncData;
    PSSpecifier *_deleteButtonSpecifier;
    PSSpecifier *_accountSummaryCellSpecifier;
    NSArray *_dataclassSpecifiers;
    NSArray *_otherSpecifiers;
    BOOL _didShowDataclassActionPickerDuringRemoval;
    BOOL _firstTimeSetup;
    BOOL _shouldShowDeleteAccountButton;
    BOOL _shouldEnableDeleteAccountButton;
    BOOL _shouldEnableAccountSummaryCell;
    BOOL _isMailSetupForced;
    NSArray *_preEnabledDataclasses;
    ACAccount *_account;
    PSSpecifier *_dataclassGroupSpecifier;
}

+ (BOOL)shouldPresentAsModalSheet;
- (id)_accountIdentifier;
- (id)specifiers;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)displayedShortAccountTypeString;
- (id)displayedAccountTypeString;
- (void)doneButtonTapped:(id)arg1;
@property(nonatomic) BOOL isMailSetupForced; // @synthesize isMailSetupForced=_isMailSetupForced;
@property(readonly, nonatomic) __weak PSSpecifier *deleteButtonSpecifier; // @synthesize deleteButtonSpecifier=_deleteButtonSpecifier;
- (void)appendDeleteAccountButton;
- (void)setDataclass:(id)arg1 enabled:(BOOL)arg2;
- (void)reloadDynamicSpecifiersWithAnimation:(BOOL)arg1;
- (int)deleteButtonIndex;
- (id)messageForAccountDeletionProgressUI;
- (BOOL)_promptUserToConfirmAccountDeletion;
- (BOOL)_isShowingDeleteAccountButton;
- (void)_notifyRootControllerOfAccountSetupCompletion;
- (BOOL)_confirmDeleteLocalDataForDataclasses:(id)arg1;
- (BOOL)_confirmKeepLocalDataForDataclasses:(id)arg1;
- (void)_showDelayedActivityInProgressUIWithMessage:(id)arg1;
- (id)_activityInProgressTextForDataclass:(id)arg1 isBeingEnabled:(BOOL)arg2;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (void)resetDirtyDataclassSwitchCells;
- (BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1;
- (void)_setDataclass:(id)arg1 enabled:(BOOL)arg2;
- (void)_markDataclassSwitchCellAsDirty:(id)arg1;
@property(copy, nonatomic) NSArray *preEnabledDataclasses; // @synthesize preEnabledDataclasses=_preEnabledDataclasses;
- (id)dataclassSwitchStateForSpecifier:(id)arg1;
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;
- (id)specifierForDataclass:(id)arg1;
- (BOOL)shouldShowSpecifierForDataclass:(id)arg1;
@property(nonatomic) __weak PSSpecifier *dataclassGroupSpecifier; // @synthesize dataclassGroupSpecifier=_dataclassGroupSpecifier;
- (id)_orderDataclassList:(id)arg1;
@property(nonatomic) BOOL shouldEnableAccountSummaryCell; // @synthesize shouldEnableAccountSummaryCell=_shouldEnableAccountSummaryCell;
- (id)valueForAccountSummaryCell;
- (Class)accountInfoControllerClass;
@property(nonatomic) BOOL shouldEnableDeleteAccountButton; // @synthesize shouldEnableDeleteAccountButton=_shouldEnableDeleteAccountButton;
- (void)deleteButtonTapped:(id)arg1;
- (id)titleForDeleteButton;
@property(nonatomic) BOOL shouldShowDeleteAccountButton; // @synthesize shouldShowDeleteAccountButton=_shouldShowDeleteAccountButton;
- (id)otherSpecifiers;
- (BOOL)shouldShowOtherSpecifiersDuringFirstSetup;
- (id)_specifiersForDataclasses:(id)arg1;
- (id)specifierForAccountSummaryCell;
- (BOOL)shouldVerifyBeforeAccountSave;
- (id)_navigationTitle;
@property(nonatomic, getter=isFirstTimeSetup) BOOL firstTimeSetup; // @synthesize firstTimeSetup=_firstTimeSetup;
- (void)forceMailSetup;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;
- (void)cancelButtonTapped:(id)arg1;

@end

