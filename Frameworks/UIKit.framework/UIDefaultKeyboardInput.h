//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardInput.h"
#import "UITextInputPrivate.h"

@class NSDictionary, NSString, UIColor, UIImage, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate>
{
    UITextInputTraits *m_traits;
}

- (void)setupPlaceholderTextIfNeeded;
- (BOOL)isShowingPlaceholder;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (BOOL)selectionAtWordStart;
- (BOOL)selectionAtDocumentStart;
- (int)selectionState;
- (int)wordOffsetInRange:(id)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (struct CGRect)caretRect;
@property(nonatomic) BOOL forceEnableDictation;
@property(nonatomic) BOOL acceptsEmoji; // @dynamic acceptsEmoji;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (id)fontForCaretSelection;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (void)updateSelection;
- (BOOL)hasContent;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasSelection;
- (struct _NSRange)selectionRange;
- (id)textColorForCaretSelection;
- (void)selectAll;
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
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)takeTraitsFrom:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (id)textInputTraits;
- (id)selectionView;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (BOOL)isEditing;
- (struct CGRect)visibleBounds;
- (BOOL)isSecure;
- (void)setSecure:(BOOL)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (BOOL)isEditable;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegate;
- (void)dealloc;

// Remaining properties
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) int autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) int autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) BOOL contentsIsSingleValue; // @dynamic contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) BOOL deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL disablePrediction;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) UIColor *insertionPointColor; // @dynamic insertionPointColor;
@property(nonatomic) unsigned int insertionPointWidth; // @dynamic insertionPointWidth;
@property(nonatomic) BOOL isSingleLineDocument;
@property(nonatomic) int keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) int keyboardType; // @dynamic keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) int returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property(nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType; // @dynamic shortcutConversionType;
@property(nonatomic) int spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility; // @dynamic textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior; // @dynamic textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;

@end

