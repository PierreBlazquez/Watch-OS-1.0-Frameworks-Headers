//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ABContactAddLinkedCardActionDelegate.h"
#import "ABContactGroupPickerDelegate.h"
#import "ABContactHeaderViewDelegate.h"
#import "ABContactViewControllerDelegate.h"
#import "ABContactViewDataSource.h"
#import "ABContactViewDelegate.h"
#import "ABPresenterDelegate.h"
#import "ABPropertyActionDelegate.h"
#import "ABPropertyCellDelegate.h"
#import "UIAdaptivePresentationControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIViewControllerRestoration.h"

@class ABCardFaceTimeGroup, ABCardGroup, ABCardLinkedCardsGroup, ABContactAction, ABContactAddFavoriteAction, ABContactAddLinkedCardAction, ABContactAddNewFieldAction, ABContactAddToExistingContactAction, ABContactCreateNewContactAction, ABContactHeaderDisplayView, ABContactHeaderEditView, ABContactHeaderView, ABContactToggleBlockCallerAction, ABContactView, ABMedicalIDAction, ABPropertyAction, ABPropertyFaceTimeAction, ABPropertyIDSRequest, ABPropertyLinkedCardsAction, ABSiriContactContextProvider, CNContact, CNContactStyle, HKHealthStore, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, UIView;

@interface ABContactViewController : UITableViewController <ABPropertyActionDelegate, ABPropertyCellDelegate, ABContactGroupPickerDelegate, ABPresenterDelegate, UIPopoverControllerDelegate, ABContactAddLinkedCardActionDelegate, ABContactHeaderViewDelegate, ABContactViewControllerDelegate, UIAdaptivePresentationControllerDelegate, ABContactViewDataSource, ABContactViewDelegate, UIViewControllerRestoration>
{
    NSArray *_displayedProperties;
    BOOL _needsReload;
    BOOL _disablingRotation;
    int _animating;
    BOOL _isMailVIP;
    BOOL _allowsEditing;
    BOOL _alwaysEditing;
    BOOL _allowsActions;
    BOOL _allowsPropertyActions;
    BOOL _allowsCardActions;
    BOOL _allowsConferencing;
    BOOL _allowsSharing;
    BOOL _allowsAddToFavorites;
    BOOL _allowsSendMessage;
    BOOL _allowsContactBlocking;
    BOOL _allowsAddingToAddressBook;
    BOOL _shouldShowLinkedContacts;
    BOOL _allowsOnlyPhoneActions;
    BOOL _allowsOnlyFaceTimeActions;
    BOOL _allowsDeletion;
    BOOL _hideCardActions;
    CNContact *_contact;
    NSString *_alternateName;
    NSString *_message;
    NSString *_primaryProperty;
    UIView *_personHeaderView;
    ABCardGroup *_cardTopGroup;
    ABCardGroup *_cardBottomGroup;
    ABCardGroup *_cardFooterGroup;
    id <ABContactViewControllerDelegate> _contactDelegate;
    id <ABPresenterDelegate> _presentingDelegate;
    ABContactView *_displayContactView;
    ABContactView *_editingContactView;
    ABContactHeaderDisplayView *_displayHeaderView;
    ABContactHeaderEditView *_editingHeaderView;
    NSMutableArray *_mutableContacts;
    NSDictionary *_propertyGroups;
    NSMutableArray *_displayGroups;
    NSMutableArray *_editingGroups;
    NSArray *_nameEditingGroups;
    NSMutableDictionary *_groupsAfterGroup;
    NSMapTable *_cachedLabelWidths;
    ABCardGroup *_cardPrimaryPropertyActionsGroup;
    ABCardGroup *_cardActionsGroup;
    ABCardGroup *_cardMedicalIDGroup;
    ABCardGroup *_cardBlockContactGroup;
    ABCardFaceTimeGroup *_cardFaceTimeGroup;
    ABCardLinkedCardsGroup *_cardLinkedCardsGroup;
    ABPropertyAction *_sendMessageAction;
    ABPropertyFaceTimeAction *_faceTimeAction;
    ABPropertyFaceTimeAction *_faceTimeAudioAction;
    ABPropertyLinkedCardsAction *_linkedCardsAction;
    ABContactAddLinkedCardAction *_addLinkedCardAction;
    ABContactAction *_shareContactAction;
    ABContactAddFavoriteAction *_addFavoriteAction;
    ABContactToggleBlockCallerAction *_blockAction;
    ABContactAddNewFieldAction *_addNewFieldAction;
    ABContactCreateNewContactAction *_createNewContactAction;
    ABContactAddToExistingContactAction *_addToExistingContactAction;
    ABMedicalIDAction *_medicalIDAction;
    ABCardGroup *_cardEditingActionsGroup;
    ABCardGroup *_cardEditingDeleteContactGroup;
    ABContactAction *_deleteContactAction;
    ABSiriContactContextProvider *_siriContextProvider;
    NSMutableArray *_linkedContactsEdits;
    ABPropertyIDSRequest *_iMessageIDSRequest;
    ABPropertyIDSRequest *_faceTimeIDSRequest;
    NSDictionary *_userActivityUserInfo;
    HKHealthStore *_healthStore;
    CNContactStyle *_contactStyle;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (id)boolStateRestorationProperties;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(nonatomic) BOOL allowsAddingToAddressBook; // @synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook;
@property(retain, nonatomic) NSString *primaryProperty; // @synthesize primaryProperty=_primaryProperty;
- (BOOL)needsReload;
@property(nonatomic) BOOL allowsSharing; // @synthesize allowsSharing=_allowsSharing;
@property(nonatomic) BOOL allowsContactBlocking; // @synthesize allowsContactBlocking=_allowsContactBlocking;
- (void)setNeedsReload;
@property(copy, nonatomic) NSArray *displayedProperties; // @synthesize displayedProperties=_displayedProperties;
@property(nonatomic) BOOL allowsActions; // @synthesize allowsActions=_allowsActions;
@property(nonatomic) id <ABContactViewControllerDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (id)tableView;
- (void)actionDidFinish:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (int)adaptivePresentationStyleForPresentationController:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (id)viewForHeaderInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
@property(nonatomic) BOOL allowsDeletion; // @synthesize allowsDeletion=_allowsDeletion;
- (void)saveChanges;
@property(retain, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property(retain, nonatomic) NSDictionary *userActivityUserInfo; // @synthesize userActivityUserInfo=_userActivityUserInfo;
@property(retain, nonatomic) ABCardGroup *cardEditingDeleteContactGroup; // @synthesize cardEditingDeleteContactGroup=_cardEditingDeleteContactGroup;
@property(retain, nonatomic) ABCardGroup *cardEditingActionsGroup; // @synthesize cardEditingActionsGroup=_cardEditingActionsGroup;
@property(retain, nonatomic) ABContactAddLinkedCardAction *addLinkedCardAction; // @synthesize addLinkedCardAction=_addLinkedCardAction;
@property(retain, nonatomic) ABPropertyLinkedCardsAction *linkedCardsAction; // @synthesize linkedCardsAction=_linkedCardsAction;
@property(retain, nonatomic) ABCardGroup *cardBlockContactGroup; // @synthesize cardBlockContactGroup=_cardBlockContactGroup;
@property(retain, nonatomic) ABCardGroup *cardActionsGroup; // @synthesize cardActionsGroup=_cardActionsGroup;
@property(retain, nonatomic) ABCardGroup *cardPrimaryPropertyActionsGroup; // @synthesize cardPrimaryPropertyActionsGroup=_cardPrimaryPropertyActionsGroup;
@property(retain, nonatomic) NSDictionary *propertyGroups; // @synthesize propertyGroups=_propertyGroups;
@property(retain, nonatomic) ABContactHeaderEditView *editingHeaderView; // @synthesize editingHeaderView=_editingHeaderView;
@property(retain, nonatomic) ABContactHeaderDisplayView *displayHeaderView; // @synthesize displayHeaderView=_displayHeaderView;
@property(retain, nonatomic) ABContactView *editingContactView; // @synthesize editingContactView=_editingContactView;
@property(retain, nonatomic) ABContactView *displayContactView; // @synthesize displayContactView=_displayContactView;
@property(retain, nonatomic) ABCardGroup *cardBottomGroup; // @synthesize cardBottomGroup=_cardBottomGroup;
@property(retain, nonatomic) ABCardGroup *cardTopGroup; // @synthesize cardTopGroup=_cardTopGroup;
@property(nonatomic) BOOL hideCardActions; // @synthesize hideCardActions=_hideCardActions;
@property(nonatomic) BOOL allowsSendMessage; // @synthesize allowsSendMessage=_allowsSendMessage;
@property(nonatomic) BOOL allowsCardActions; // @synthesize allowsCardActions=_allowsCardActions;
@property(nonatomic) BOOL allowsPropertyActions; // @synthesize allowsPropertyActions=_allowsPropertyActions;
@property(nonatomic) BOOL alwaysEditing; // @synthesize alwaysEditing=_alwaysEditing;
- (float)desiredHeightForWidth:(float)arg1;
- (CDStruct_89ddc8e1)transitionToEditing:(BOOL)arg1;
- (id)indexPathOfDisplayedPropertyItem:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4;
- (id)cardActions;
@property(nonatomic) BOOL isMailVIP; // @synthesize isMailVIP=_isMailVIP;
- (float)contactView:(id)arg1 heightForItemAtIndex:(int)arg2 inGroup:(id)arg3;
- (int)numberOfGroupsInContactView:(id)arg1;
@property(readonly) BOOL isPresentingModalViewController;
- (id)defaultValueForPropertyCell:(id)arg1;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(int)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
- (id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3;
@property(readonly, nonatomic) ABCardGroup *cardFooterGroup; // @synthesize cardFooterGroup=_cardFooterGroup;
- (id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2;
@property(retain, nonatomic) ABCardLinkedCardsGroup *cardLinkedCardsGroup; // @synthesize cardLinkedCardsGroup=_cardLinkedCardsGroup;
- (id)_addLinkedCardAction;
- (id)_linkedCardsAction;
@property(nonatomic) BOOL shouldShowLinkedContacts; // @synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts;
@property(retain, nonatomic) ABMedicalIDAction *medicalIDAction; // @synthesize medicalIDAction=_medicalIDAction;
@property(retain, nonatomic) ABCardGroup *cardMedicalIDGroup; // @synthesize cardMedicalIDGroup=_cardMedicalIDGroup;
- (void)addCardGroup:(id)arg1 afterGroup:(id)arg2;
@property(retain, nonatomic) ABPropertyIDSRequest *faceTimeIDSRequest; // @synthesize faceTimeIDSRequest=_faceTimeIDSRequest;
@property(retain, nonatomic) ABCardFaceTimeGroup *cardFaceTimeGroup; // @synthesize cardFaceTimeGroup=_cardFaceTimeGroup;
@property(nonatomic) BOOL allowsConferencing; // @synthesize allowsConferencing=_allowsConferencing;
@property(retain, nonatomic) ABPropertyIDSRequest *iMessageIDSRequest; // @synthesize iMessageIDSRequest=_iMessageIDSRequest;
- (void)_updateEmailTransportButtonsForItems:(id)arg1;
- (void)_updatePhoneTransportButtonsForItems:(id)arg1;
- (void)_updateIMessageTransportButtonsForItems:(id)arg1;
- (id)_allDisplayPropertyItemsFromGroups:(id)arg1;
@property(retain, nonatomic) ABPropertyFaceTimeAction *faceTimeAudioAction; // @synthesize faceTimeAudioAction=_faceTimeAudioAction;
- (id)_faceTimeAudioAction;
@property(retain, nonatomic) ABPropertyFaceTimeAction *faceTimeAction; // @synthesize faceTimeAction=_faceTimeAction;
- (id)_faceTimeAction;
@property(retain, nonatomic) ABContactAction *deleteContactAction; // @synthesize deleteContactAction=_deleteContactAction;
@property(retain, nonatomic) ABContactAddNewFieldAction *addNewFieldAction; // @synthesize addNewFieldAction=_addNewFieldAction;
- (id)_addNewFieldAction;
@property(retain, nonatomic) ABContactAddToExistingContactAction *addToExistingContactAction; // @synthesize addToExistingContactAction=_addToExistingContactAction;
- (id)_addToExistingContactAction;
@property(retain, nonatomic) ABContactCreateNewContactAction *createNewContactAction; // @synthesize createNewContactAction=_createNewContactAction;
- (id)_addCreateNewContactAction;
- (void)blockListDidChange:(id)arg1;
@property(retain, nonatomic) ABContactToggleBlockCallerAction *blockAction; // @synthesize blockAction=_blockAction;
@property(retain, nonatomic) ABContactAction *shareContactAction; // @synthesize shareContactAction=_shareContactAction;
@property(retain, nonatomic) ABContactAddFavoriteAction *addFavoriteAction; // @synthesize addFavoriteAction=_addFavoriteAction;
- (id)_addFavoriteActionWithConferencing:(BOOL)arg1 telephony:(BOOL)arg2;
@property(nonatomic) BOOL allowsAddToFavorites; // @synthesize allowsAddToFavorites=_allowsAddToFavorites;
- (id)_shareContactAction;
@property(retain, nonatomic) ABPropertyAction *sendMessageAction; // @synthesize sendMessageAction=_sendMessageAction;
- (id)_sendMessageActionAllowingEmailIDs:(BOOL)arg1;
- (void)_setupPrimaryPropertyActions;
- (void)_setupAddToAddressBookActions;
- (void)_setupCardActions;
- (void)_setupEditingCardActions;
- (void)updateContactsViewWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateItemsInGroup:(id)arg1;
- (int)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2;
- (void)_updateLabelWidthsForGroup:(id)arg1;
@property(retain, nonatomic) NSMapTable *cachedLabelWidths; // @synthesize cachedLabelWidths=_cachedLabelWidths;
- (void)_updateLabelWidthsForItem:(id)arg1;
@property(nonatomic) id <ABPresenterDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
- (void)_addedGroupWithName:(id)arg1;
- (id)_dateForProperty:(id)arg1;
- (void)_validateGroup:(id)arg1;
- (void)_setupContactBlockingActionsWithUpdate:(BOOL)arg1;
- (void)addLinkedContact:(id)arg1;
- (void)addToExistingContact:(id)arg1;
- (void)createNewContact:(id)arg1;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)reloadCardGroup:(id)arg1;
- (void)_updateAvailableTransportsForItems:(id)arg1;
- (int)_modalPresentationStyleForViewController:(id)arg1;
- (void)contactView:(id)arg1 didSelectItemAtIndex:(int)arg2 inGroup:(id)arg3;
- (id)_itemAtIndexPath:(id)arg1;
- (void)addEditingItemAtIndexPath:(id)arg1;
- (void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2;
- (void)removeLinkedContact:(id)arg1;
- (id)contactView:(id)arg1 cellForItemAtIndex:(int)arg2 inGroup:(id)arg3;
- (id)_cellForIndexPath:(id)arg1;
- (BOOL)_indexPathIsActionItem:(id)arg1;
- (int)_numberOfItemsInCustomGroup:(id)arg1;
- (id)_cardGroupAtIndex:(int)arg1;
@property(retain, nonatomic) ABSiriContactContextProvider *siriContextProvider; // @synthesize siriContextProvider=_siriContextProvider;
- (void)_scrollContactView:(id)arg1 toVisibleGroupInContactView:(id)arg2;
- (void)saveLinkedContactChanges;
- (void)_saveChangesForGroups:(id)arg1;
- (void)_linkEditableContactForEditedReadOnlyContact;
- (void)saveModelChangesToContact;
@property(retain, nonatomic) NSMutableArray *linkedContactsEdits; // @synthesize linkedContactsEdits=_linkedContactsEdits;
@property(retain, nonatomic) NSMutableArray *mutableContacts; // @synthesize mutableContacts=_mutableContacts;
- (CDStruct_89ddc8e1)editingTransition;
@property(retain, nonatomic) NSMutableArray *displayGroups; // @synthesize displayGroups=_displayGroups;
- (BOOL)_modelHasChanges;
- (BOOL)_modelIsEmpty;
- (void)toggleEditing:(id)arg1;
- (void)updateDoneButton;
- (void)editCancel:(id)arg1;
- (id)navigationItemController;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 destructive:(BOOL)arg5;
@property(retain, nonatomic) NSMutableDictionary *groupsAfterGroup; // @synthesize groupsAfterGroup=_groupsAfterGroup;
- (id)_currentGroups;
- (void)_updateUserActivity;
- (void)_addFaceTimeGroupAnimated:(BOOL)arg1;
@property(readonly, nonatomic) ABContactHeaderView *contactHeaderView;
- (void)_updateAvailableTransports;
- (id)_loadEditingGroups;
- (id)_loadDisplayGroups;
- (void)setupActions;
- (void)_reloadMedicalIDGroup;
- (void)_reloadPropertyGroupsPreservingChanges:(BOOL)arg1;
- (void)_reloadLinkedCardsGroup;
- (void)_reloadFaceTimeGroup;
- (void)_updateLabelWidthForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareCell:(id)arg1;
- (void)_updateLabelWidths;
- (int)indexOfGroup:(id)arg1;
- (id)cardGroupForProperty:(id)arg1;
@property(retain, nonatomic) NSArray *nameEditingGroups; // @synthesize nameEditingGroups=_nameEditingGroups;
- (id)_loadNameEditingGroups;
- (void)updateEditNavigationItemsAnimated:(BOOL)arg1;
- (void)localeDidChange:(id)arg1;
- (void)setNeedsReloadLazy;
- (id)_loadPropertyGroups;
- (id)_loadMutableLinkedContactsForUnifiedContact:(id)arg1;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
@property(retain, nonatomic) NSMutableArray *editingGroups; // @synthesize editingGroups=_editingGroups;
- (void)headerPhotoDidUpdate;
@property(retain, nonatomic) UIView *personHeaderView; // @synthesize personHeaderView=_personHeaderView;
- (void)headerHeightDidChange;
- (void)updateWithNewContact:(id)arg1;
- (void)reloadDataIfNeeded;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void)contactGroupPickerDidCancel:(id)arg1;
- (void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2;
- (id)alreadyPickedGroups;
@property(readonly, nonatomic) ABContactView *contactView;
- (void)setMergeContact:(id)arg1;
- (BOOL)shouldAllowSelectingContact:(id)arg1;
- (void)applyStyleProvider:(id)arg1;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)actionDidUpdate:(id)arg1;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (void)actionWasCanceled:(id)arg1;
@property(retain, nonatomic) CNContactStyle *contactStyle; // @synthesize contactStyle=_contactStyle;
@property(nonatomic) BOOL allowsOnlyFaceTimeActions; // @synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions;
@property(nonatomic) BOOL allowsOnlyPhoneActions; // @synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

