//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKRecipientSelectionController.h>

#import "UITextFieldDelegate.h"

@class NSArray, NSString;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate>
{
    CDUnknownBlockType _sendBlock;
}

- (void)_updateBackfillForNewRecipients;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
- (void)atomizeAndSendTimeoutHandler;
- (void)atomizeAndInvokeBlock:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSArray *expandedRecipients;
@property(readonly, retain, nonatomic) NSArray *proposedRecipients;
- (BOOL)alwaysShowSearchResultsTable;
- (BOOL)shouldSuppressSearchResultsTable;
- (BOOL)shouldAtomizeToConversationName;
- (BOOL)peoplePickerShouldUsePopovers;
- (void)addRecipient:(id)arg1;
- (void)recipientSelectionControllerDidChange;
- (BOOL)homogenizePreferredServiceForiMessage;
- (BOOL)searchListShouldUsePopvoers;
- (void)reset;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CKComposeRecipientSelectionControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

