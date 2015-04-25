//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFComposeHeaderView.h>

#import "MFComposeRecipientAtomDelegate.h"
#import "MFMultiDragDestination.h"
#import "MFMultiDragSource.h"
#import "NSLayoutManagerDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIButton, UIColor, UIFont, UITextView, UIView, _MFAtomTextAttachment, _MFAtomTextView;

@interface MFComposeRecipientTextView : MFComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, MFMultiDragSource, MFMultiDragDestination, MFComposeRecipientAtomDelegate>
{
    _MFAtomTextView *_textView;
    UITextView *_inactiveTextView;
    UIColor *_inactiveTextColor;
    UIView *_atomContainerView;
    NSMutableArray *_atomViews;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    NSMutableDictionary *_atomLayoutOptionsByRecipient;
    int _atomViewAnimationDepth;
    struct _NSRange _dragSourceRange;
    id <MFDraggableItem> _pivotItem;
    BOOL _parentIsClosing;
    BOOL _textViewExclusionPathsAreValid;
    BOOL _isTextFieldCollapsed;
    BOOL _collapsedStateInitialized;
    BOOL _indicatesUnsafeRecipientsWhenCollapsed;
    BOOL _notifyDelegateOfSizeChange;
    NSTimer *_inputDelayTimer;
    NSTimer *_collapsableUpdateTimer;
    NSArray *_properties;
    NSMutableArray *_recipientsBeingRemoved;
    BOOL _editable;
    BOOL _allowsDragAndDrop;
    BOOL _separatorHidden;
    BOOL _focused;
    BOOL _didIgnoreFirstResponderResign;
    UIFont *_baseFont;
    int _maxRecipients;
    UIButton *_addButton;
    int _hideLastAtomComma;
    _MFAtomTextAttachment *_placeholderAttachment;
    double _inputDelay;
}

+ (id)defaultFont;
@property(copy, nonatomic) NSArray *recipients;
- (void)setProperty:(int)arg1;
- (BOOL)finishEnteringRecipient;
- (BOOL)_useRightToLeftLayout;
@property(copy, nonatomic) NSArray *addresses;
- (void)selectComposeRecipientAtom:(id)arg1;
@property(readonly, nonatomic) float offsetForRowWithTextField;
@property(readonly, nonatomic) unsigned int numberOfRowsOfTextInField;
- (id)atomViewForRecipient:(id)arg1;
- (id)atomViewsInRange:(struct _NSRange)arg1;
- (void)invalidateAtomPresentationOptions;
@property(retain, nonatomic) UIColor *inactiveTextColor;
- (void)removeRecipient:(id)arg1;
- (unsigned int)_atomPresentationOptionsForRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)parentDidClose;
- (void)parentWillClose;
@property(nonatomic, getter=isSeparatorHidden) BOOL separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
- (void)_tapGestureRecognized:(id)arg1;
- (void)setProperties:(id)arg1;
@property(readonly, nonatomic) UITextView *textView;
- (void)_longPressGestureRecognized:(id)arg1;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)hasContent;
- (void)setLabel:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)clearText;
- (void)willMoveToSuperview:(id)arg1;
@property(readonly, nonatomic) NSString *text;
- (BOOL)becomeFirstResponder;
@property(nonatomic) id <MFComposeRecipientTextViewDelegate> delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) int hideLastAtomComma; // @synthesize hideLastAtomComma=_hideLastAtomComma;
@property(nonatomic) int maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property(nonatomic) BOOL focused; // @synthesize focused=_focused;
@property(nonatomic) BOOL indicatesUnsafeRecipientsWhenCollapsed; // @synthesize indicatesUnsafeRecipientsWhenCollapsed=_indicatesUnsafeRecipientsWhenCollapsed;
@property(readonly, nonatomic) UIView *atomContainerView; // @synthesize atomContainerView=_atomContainerView;
- (void)atomTextView:(id)arg1 didChangeWritingDirection:(int)arg2;
- (void)atomTextViewDidResignFirstResponder:(id)arg1;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)_invalidateAtomPresentationOptionsCache;
@property(retain, nonatomic) UIFont *baseFont; // @synthesize baseFont=_baseFont;
- (struct _NSRange)_rangeForComposeRecipientAtom:(id)arg1;
- (void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3;
- (struct _NSRange)_placeholderAttachmentRange;
@property(retain, nonatomic) _MFAtomTextAttachment *placeholderAttachment; // @synthesize placeholderAttachment=_placeholderAttachment;
- (id)_placeholderAttachmentForRecipient:(id)arg1;
@property(nonatomic) BOOL allowsDragAndDrop; // @synthesize allowsDragAndDrop=_allowsDragAndDrop;
- (void)_notifyDelegateOfSizeChange;
- (void)_removeAddressAtomSubview:(id)arg1;
- (BOOL)_shouldAnimateAtomViewChanges;
- (void)_addAddressAtomSubview:(id)arg1;
- (id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2;
- (void)_resetSelectionState;
- (void)_notifyDelegateOfTextChange:(id)arg1;
@property(nonatomic) double inputDelay; // @synthesize inputDelay=_inputDelay;
- (id)_atomViewAtCharacterIndex:(unsigned int)arg1;
- (void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(struct _NSRange)arg2;
- (BOOL)_isAddButtonVisible;
- (BOOL)_hasUnsafeRecipients;
- (BOOL)_textViewContainsAtomizedRecipients;
- (id)_baseAttributes;
- (id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1;
- (BOOL)_isTextViewCollapsed;
- (BOOL)_canAddAdditionalAtoms;
- (void)_setTextViewIsCollapsed:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_userEnteredTextWithRange:(struct _NSRange *)arg1;
- (void)_didRemoveRecipient:(id)arg1;
- (void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned int)arg2;
- (id)_atomAttachmentForRecipient:(id)arg1;
- (void)_beginAtomViewAnimations;
- (void)_addRecord:(void *)arg1 identifier:(int)arg2;
- (void)addRecipient:(id)arg1 index:(unsigned int)arg2 animate:(BOOL)arg3;
- (void)_removeAllRecipients;
- (void)_recomputeTextContainerExclusionPaths;
- (void)_updateInactiveTextView;
- (void)_invalidateTextContainerExclusionPaths;
- (struct UIEdgeInsets)_recipientViewEdgeInsets;
- (void)_setAddButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_addButtonTapped:(id)arg1;
- (BOOL)containsAddress:(id)arg1;
- (void)addAddress:(id)arg1;
- (id)itemsForDragAtPoint:(struct CGPoint)arg1;
- (BOOL)allowsDrag;
- (id)supportedDropTypes:(id)arg1;
- (struct CGRect)frameForDroppedItem:(id)arg1;
- (void)animatePlaceholderForDragFailureWithItems:(id)arg1;
- (void)willDropItems:(id)arg1;
- (void)dragStartedWithItems:(id)arg1;
- (id)viewForDraggedItem:(id)arg1 atScale:(float)arg2;
- (BOOL)shouldCollapseMultipleItems;
- (struct CGRect)frameForDraggedItem:(id)arg1 isPivotView:(out char *)arg2;
- (void)dragEnteredAtPoint:(struct CGPoint)arg1 withItems:(id)arg2;
- (void)dragExitedWithItems:(id)arg1;
- (void)dragMovedToPoint:(struct CGPoint)arg1 withItems:(id)arg2;
- (id)destinationViewForDrop;
- (void)dragCompletedWithItems:(id)arg1 success:(BOOL)arg2;
- (void)dropItems:(id)arg1;
- (id)viewForDragSource;
@property(readonly, copy, nonatomic) NSArray *uncommentedAddresses;
@property(readonly, nonatomic) BOOL didIgnoreFirstResponderResign; // @synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign;
- (void)setEditable:(BOOL)arg1 animated:(BOOL)arg2;
- (float)textFieldOffsetForNumberOfRowsToScroll:(unsigned int)arg1 numberOfRowsAboveField:(int)arg2;
- (void)refreshPreferredContentSize;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)addRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)invalidateAtomPresentationOptionsForRecipient:(id)arg1;
- (void)reflow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
