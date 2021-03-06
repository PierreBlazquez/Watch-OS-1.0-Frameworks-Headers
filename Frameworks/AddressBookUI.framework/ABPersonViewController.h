//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFContextProvider.h"
#import "UIViewControllerRestoration.h"

@class ABContactViewController, ABPersonTableViewActionsDelegate, ABPersonTableViewDataSource, ABPersonTableViewSharingDelegate, ABPersonViewControllerHelper, ABUIPerson, AFContextManager, NSArray, NSString, NSTimer, UIFont, UIImage, UIView;

@interface ABPersonViewController : UIViewController <AFContextProvider, UIViewControllerRestoration>
{
    id <ABPersonViewControllerDelegate> _personViewDelegate;
    id _helper;
    id _internal;
    BOOL _internal2;
    NSTimer *_editAnimationTimer;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyPhoneActions;
    BOOL _allowsOnlyFaceTimeActions;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    ABContactViewController *_contactViewController;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(nonatomic) void *addressBook;
@property(copy, nonatomic) NSString *attribution;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
@property(nonatomic) BOOL allowsSharing;
@property(nonatomic) BOOL allowsContactBlocking; // @synthesize allowsContactBlocking=_allowsContactBlocking;
@property(nonatomic) void *displayedPerson;
@property(nonatomic) BOOL shouldShowLinkedPeople;
@property(nonatomic) id <ABPersonViewControllerDelegate> personViewDelegate;
- (void)updateTitle;
- (void)updateNavigationButtons;
@property(copy, nonatomic) NSArray *displayedProperties;
@property(nonatomic) BOOL allowsSounds;
- (id)initWithAddressBook:(void *)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
@property(nonatomic) BOOL allowsActions;
@property(nonatomic) BOOL allowsCancel;
@property(nonatomic) BOOL allowsEditing;
@property(copy, nonatomic) NSString *message;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)_getRotationContentSettings:(CDStruct_3421d26a *)arg1;
- (BOOL)_allowsAutorotation;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UIView *tableHeaderView;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)applicationWillTerminate:(id)arg1;
@property(readonly, nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
@property(nonatomic) BOOL allowsDeletion;
- (void)saveChanges;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider;
@property(nonatomic) id <ABPersonEditDelegate> editDelegate;
- (void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)helper:(id)arg1 didToggleEditingWhileInViewMode:(BOOL)arg2;
- (void)_handleLocalChange:(struct __CFDictionary *)arg1;
- (void)helperDidReloadAfterChangingDisplayedPeople:(id)arg1;
- (void)_editAnimationTimerFired:(id)arg1;
- (void)pickerCancel:(id)arg1;
- (void)startDelayingChangeNotifications;
- (BOOL)isDelayingChangeNotifications;
- (void)stopDelayingChangeNotificationsAndDeliverNow:(BOOL)arg1;
- (void)_removeContextProviderOnMainThread;
@property(readonly, nonatomic) AFContextManager *contextManager;
@property(retain, nonatomic) ABContactViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
- (void)cancelEditing:(BOOL)arg1;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (BOOL)_updateAllDataForExternalChange;
- (void)_updateTableDataForExternalChange;
- (BOOL)_updatePeopleDataForExternalChange;
- (void)addressBookChangedLocally:(struct __CFDictionary *)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
@property(retain, nonatomic) UIView *customFooterView;
- (void)setCardContentProvider:(id)arg1;
@property(nonatomic) BOOL allowsSettingAsPreferredCardForName;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3 style:(int)arg4;
@property(copy, nonatomic) CDUnknownBlockType willWeiboLocationCallback;
@property(retain, nonatomic) UIImage *shareLocationSnapshotImage;
@property(copy, nonatomic) NSString *shareLocationURL;
@property(copy, nonatomic) NSString *shareMessageSubject;
@property(copy, nonatomic) NSString *shareMessageBody;
@property(nonatomic) BOOL shareMessageBodyIsHTML;
- (void)shareContactByEmail:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType willTweetLocationCallback;
- (BOOL)manuallyLinkPerson:(id)arg1;
@property(nonatomic) BOOL observesExternalChanges;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2;
@property(nonatomic) BOOL appearsInLinkingPeoplePicker;
- (BOOL)shouldShowLinkingUIOnCard;
@property(nonatomic) BOOL badgeEmailPropertiesForMailVIP;
@property(nonatomic) BOOL allowsVibrations;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3 important:(BOOL)arg4;
@property(nonatomic) BOOL shouldAlignPersonHeaderViewToImage;
@property(readonly, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate; // @synthesize sharingDelegate=_sharingDelegate;
@property(retain, nonatomic) UIView *customMessageView;
@property(retain, nonatomic) UIFont *messageDetailFont;
@property(retain, nonatomic) UIFont *messageFont;
@property(copy, nonatomic) NSString *messageDetail;
- (void)setEditing:(BOOL)arg1 saveChanges:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setShouldShowLinkingUIOnCard:(BOOL)arg1;
@property(retain, nonatomic) ABUIPerson *displayedUIPerson;
@property(readonly, nonatomic) ABPersonViewControllerHelper *helper;
- (BOOL)handleExternalChange;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
@property(readonly, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
- (void)setCustomAppearanceProvider:(id)arg1;
- (id)newActionButton;
- (float)ab_heightToFitForViewInPopoverView;
@property(nonatomic) BOOL allowsConferencing;
@property(nonatomic) BOOL allowsAddToFavorites;
- (void)editCancel:(id)arg1;
@property(retain, nonatomic) UIView *customHeaderView;
@property(retain, nonatomic) UIView *personHeaderView;
- (void)peoplePickerLinkButtonTapped;
@property(nonatomic) BOOL allowsOnlyFaceTimeActions; // @synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions;
@property(nonatomic) BOOL allowsOnlyPhoneActions; // @synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions;
- (BOOL)isReadonly;
- (int)abViewControllerType;
- (BOOL)supportedInterfaceOrientation:(int)arg1;
- (void)updateRecord;

@end

