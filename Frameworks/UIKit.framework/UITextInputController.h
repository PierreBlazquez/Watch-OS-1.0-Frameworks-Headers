//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextInput.h"
#import "UITextInputAdditions.h"
#import "UITextInput_Internal.h"

@class NSArray, NSDictionary, NSHashTable, NSLayoutManager, NSString, UIResponder<UITextInput>, UITextChecker, UITextInputTraits, UITextPosition, UITextRange, UIView, UIView<UITextInput>, UIView<UITextInputPrivate>, _UIDictationAttachment, _UITextInputControllerTokenizer, _UITextKitTextRange, _UITextServiceSession, _UITextUndoManager, _UITextUndoOperationTyping;

@interface UITextInputController : NSObject <UITextInput_Internal, UITextInput, UITextInputAdditions>
{
    id <UITextInputDelegate> _inputDelegate;
    _UITextKitTextRange *_selectedTextRange;
    _UITextInputControllerTokenizer *_tokenizer;
    NSLayoutManager *_layoutManager;
    NSHashTable *_observedScrollViews;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    UITextInputTraits *_textInputTraits;
    struct _NSRange _markedTextRange;
    struct _NSRange _markedTextSelection;
    struct {
        unsigned int delegateRespondsToTextInputShouldBeginEditing:1;
        unsigned int delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText:1;
        unsigned int delegateRespondsToTextInputDidChange:1;
        unsigned int delegateRespondsToTextInputDidChangeSelection:1;
        unsigned int delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange:1;
        unsigned int delegateRespondsToTextInputEditorDidChangeSelection:1;
        unsigned int delegateRespondsToTextInputPrepareAttributedTextForInsertion:1;
        unsigned int textOrSelectionChangeOriginatesWithKeyboard:1;
        unsigned int showingTextStyleOptions:1;
        unsigned int undoRedoInProgress:1;
        unsigned int textOrSelectionChangeOriginatesWithMarkedText:1;
        unsigned int nextSelectionChangeMustUpdate:1;
        unsigned int hasTextAlternatives:1;
        unsigned int suppressDelegateChangeNotifications:1;
    } _tiFlags;
    NSArray *_extraItemsBeforeTextStyleOptions;
    UIView<UITextInput> *_firstTextView;
    _UITextUndoManager *_undoManager;
    _UITextUndoOperationTyping *_undoOperationForCoalescing;
    UITextChecker *_textChecker;
    _UIDictationAttachment *_dictationPlaceholder;
    BOOL _allowsEditingTextAttributes;
    BOOL _continuousSpellCheckingEnabled;
    NSDictionary *_emptyStringAttributes;
    NSDictionary *_typingAttributes;
    id <UITextInputControllerDelegate> _delegate;
    struct _NSRange _previousSelectedRange;
}

- (BOOL)_isSecureTextEntry;
- (id)_selectedAttributedText;
- (void)changeWillBeUndone:(id)arg1;
- (void)_setUndoRedoInProgress:(BOOL)arg1;
- (void)undoDidChangeText;
- (void)undoWillChangeText;
- (void)_ensureSelectionVisible;
- (void)preheatTextChecker;
- (void)_selectionDidScroll:(id)arg1;
- (void)_toggleFontTrait:(int)arg1;
- (void)_removeShortcutController;
- (BOOL)_delegateShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)_copySelectionToClipboard;
- (void)removeTextStylingFromString:(id)arg1;
- (id)_selectedText;
- (id)textRangeForNSRange:(struct _NSRange)arg1;
- (void)coalesceInTextView:(id)arg1 affectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (BOOL)_undoRedoInProgress;
- (BOOL)isCoalescing;
- (void)_undoManagerWillUndo:(id)arg1;
- (id)_fixupTypingAttributeForAttributes:(id)arg1;
@property(copy, nonatomic, getter=_emptyStringAttributes, setter=_setEmptyStringAttributes:) NSDictionary *emptyStringAttributes; // @synthesize emptyStringAttributes=_emptyStringAttributes;
- (id)_attributesForReplacementInRange:(struct _NSRange)arg1;
- (id)_whitelistedTypingAttributes;
- (id)_characterPositionForPoint:(struct CGPoint)arg1;
- (id)_rectsForRange:(struct _NSRange)arg1;
- (struct CGRect)_caretRectForOffset:(unsigned int)arg1;
- (unsigned int)_validCaretPositionFromCharacterIndex:(unsigned int)arg1 downstream:(BOOL)arg2;
- (BOOL)_shouldConsiderTextViewForGeometry:(id)arg1;
- (void)checkSpellingForWordInRange:(id)arg1;
@property(nonatomic) struct _NSRange previousSelectedRange; // @synthesize previousSelectedRange=_previousSelectedRange;
@property(nonatomic) BOOL continuousSpellCheckingEnabled; // @synthesize continuousSpellCheckingEnabled=_continuousSpellCheckingEnabled;
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;
- (void)removeSpellingMarkersForCurrentWord;
- (void)_insertAttributedText:(id)arg1 fromKeyboard:(BOOL)arg2;
- (void)removeAlternativesForCurrentWord;
- (void)checkSpellingForSelectionChangeIfNecessary;
- (void)_insertText:(id)arg1 fromKeyboard:(BOOL)arg2;
- (void)registerUndoOperationForType:(int)arg1 actionName:(id)arg2 affectedRange:(struct _NSRange)arg3 replacementText:(id)arg4;
- (struct _NSRange)nsRangeForTextRange:(id)arg1;
- (id)_newAttributedStringForInsertionOfText:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_sendDelegateWillChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2;
- (void)_setSelectedRange:(struct _NSRange)arg1;
- (void)_invalidateTypingAttributes;
- (void)_coordinateSelectionChange:(CDUnknownBlockType)arg1;
- (void)_sendDelegateChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2;
- (void)_setSelectedTextRange:(id)arg1;
- (void)_ensureSelectionValid;
- (void)_forceUnmarkTextDueToEditing;
- (void)_teardownTextContainerView:(id)arg1;
- (void)_setupTextContainerView:(id)arg1;
- (void)_cancelDictationIfNecessaryForChangeInRange:(struct _NSRange)arg1;
- (void)_updateFirstTextView;
- (void)_textContainerDidChangeView:(id)arg1;
- (void)_commonInitWithLayoutManager:(id)arg1;
- (void)stopCoalescing;
- (void)_clearSelectionUI;
- (void)_removeDefinitionController;
- (BOOL)_mightHaveSelection;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 replacingRange:(struct _NSRange)arg3 resultLength:(unsigned int *)arg4;
- (struct _NSRange)_rangeForBackwardsDelete;
- (BOOL)_shouldHandleResponderAction:(SEL)arg1;
- (BOOL)_canHandleResponderAction:(SEL)arg1;
- (void)_addToTypingAttributes:(id)arg1 value:(id)arg2;
- (id)textChecker;
- (struct _NSRange)_selectedRange;
@property(readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (BOOL)_selectionAtWordStart;
- (void)_phraseBoundaryGesture:(id)arg1;
- (void)_setInternalGestureRecognizers;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (BOOL)_isEmptySelection;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_keyInput;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (int)_indexForTextPosition:(id)arg1;
- (id)_fullRange;
- (id)_selectableText;
- (BOOL)_usesAsynchronousProtocol;
- (BOOL)_hasMarkedText;
- (id)_newPhraseBoundaryGestureRecognizer;
- (id)_firstTextView;
- (id)_textColorForCaretSelection;
- (id)_fontForCaretSelection;
- (int)_selectionAffinity;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (void)_resetShowingTextStyle:(id)arg1;
- (BOOL)_selectionAtDocumentStart;
- (void)_selectAll;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_fullText;
- (id)_positionAtStartOfWords:(unsigned int)arg1 beforePosition:(id)arg2;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (unsigned long)_characterAfterCaretSelection;
- (id)_wordContainingCaretSelection;
- (unsigned long)_characterInRelationToCaretSelection:(int)arg1;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_moveCurrentSelection:(int)arg1;
- (unsigned long)_characterInRelationToRangedSelection:(int)arg1;
- (unsigned long)_characterBeforeCaretSelection;
- (void)_setGestureRecognizers;
- (void)_unmarkText;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_deleteByWord;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_extendCurrentSelection:(int)arg1;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)select:(id)arg1;
- (void)updateSelection;
- (struct _NSRange)_selectedNSRange;
- (void)forwardInvocation:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)selectAll:(id)arg1;
@property(readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property(nonatomic) BOOL allowsEditingTextAttributes; // @synthesize allowsEditingTextAttributes=_allowsEditingTextAttributes;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
- (void)selectAll;
@property(nonatomic) int selectionAffinity;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)_hasDictationPlaceholder;
- (struct _NSRange)markedRange;
- (id)_textStorage;
- (void)_selectionGeometryChanged;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)metadataDictionariesForDictationResults;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (id)_layoutManager;
- (void)clearText;
- (BOOL)hasText;
- (int)atomStyle;
- (BOOL)drawsAsAtom;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)_filteredAttributedTextInRange:(struct _NSRange)arg1;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange)arg1;
@property(nonatomic) struct _NSRange selectedRange;
- (void)delegateWillChangeAttributedText:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy, nonatomic) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
- (void)didEndEditing;
- (void)_invalidateEmptyStringAttributes;
- (struct CGRect)_selectionClipRect;
- (id)selectionView;
- (id)interactionAssistant;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (id)initWithLayoutManager:(id)arg1;
- (void)_performWhileSuppressingDelegateNotifications:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
- (id)_parentScrollView;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
- (BOOL)_isDisplayingShortcutViewController;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)undoManager;
@property(nonatomic) id <UITextInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *textInputView;

@end
