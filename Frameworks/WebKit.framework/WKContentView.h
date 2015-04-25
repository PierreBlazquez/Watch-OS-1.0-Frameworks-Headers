//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextInputPrivate.h"
#import "UIWKInteractionViewProtocol.h"
#import "UIWebFormAccessoryDelegate.h"
#import "UIWebTouchEventsGestureRecognizerDelegate.h"
#import "WKFileUploadPanelDelegate.h"

@class NSDictionary, NSString, UIColor, UIImage, UITextInteractionAssistant, UITextPosition, UITextRange, UIWebFormAccessory, WKBrowsingContextController, WKWebView;

@interface WKContentView : UIView <UIGestureRecognizerDelegate, UIWebTouchEventsGestureRecognizerDelegate, UITextInputPrivate, UIWebFormAccessoryDelegate, UIWKInteractionViewProtocol, WKFileUploadPanelDelegate>
{
    struct RefPtr<WebKit::WebPageProxy> _page;
    WKWebView *_webView;
    BOOL _isBackground;
    struct RetainPtr<UIWebTouchEventsGestureRecognizer> _touchEventGestureRecognizer;
    BOOL _canSendTouchEventsAsynchronously;
    struct RetainPtr<WKSyntheticClickTapGestureRecognizer> _singleTapGestureRecognizer;
    struct RetainPtr<_UIWebHighlightLongPressGestureRecognizer> _highlightLongPressGestureRecognizer;
    struct RetainPtr<UILongPressGestureRecognizer> _longPressGestureRecognizer;
    struct RetainPtr<UITapGestureRecognizer> _doubleTapGestureRecognizer;
    struct RetainPtr<UITapGestureRecognizer> _twoFingerDoubleTapGestureRecognizer;
    struct RetainPtr<WKInspectorNodeSearchGestureRecognizer> _inspectorNodeSearchGestureRecognizer;
    struct RetainPtr<UIWKTextInteractionAssistant> _textSelectionAssistant;
    struct RetainPtr<UIWKSelectionAssistant> _webSelectionAssistant;
    struct RetainPtr<UITextInputTraits> _traits;
    struct RetainPtr<UIWebFormAccessory> _formAccessoryView;
    struct RetainPtr<_UIHighlightView> _highlightView;
    struct RetainPtr<UIView> _interactionViewsContainerView;
    struct RetainPtr<NSString> _markedText;
    struct RetainPtr<WKActionSheetAssistant> _actionSheetAssistant;
    struct RetainPtr<WKAirPlayRoutePicker> _airPlayRoutePicker;
    struct RetainPtr<WKFormInputSession> _formInputSession;
    struct RetainPtr<WKFileUploadPanel> _fileUploadPanel;
    struct unique_ptr<WebKit::SmartMagnificationController, std::__1::default_delete<WebKit::SmartMagnificationController>> _smartMagnificationController;
    id <UITextInputDelegate> _inputDelegate;
    unsigned long long _latestTapHighlightID;
    struct TapHighlightInformation _tapHighlightInformation;
    struct WKAutoCorrectionData _autocorrectionData;
    struct InteractionInformationAtPosition _positionInformation;
    struct AssistedNodeInformation _assistedNodeInformation;
    struct RetainPtr<NSObject<WKFormPeripheral>> _inputPeripheral;
    struct CGPoint _lastInteractionLocation;
    BOOL _isEditable;
    BOOL _showingTextStyleOptions;
    BOOL _hasValidPositionInformation;
    BOOL _isTapHighlightIDValid;
    BOOL _potentialTapInProgress;
    BOOL _hasTapHighlightForPotentialTap;
    BOOL _selectionNeedsUpdate;
    BOOL _shouldRestoreSelection;
    BOOL _usingGestureForSelection;
    BOOL _inspectorNodeSearchEnabled;
    BOOL _didAccessoryTabInitiateFocus;
    struct unique_ptr<WebKit::PageClientImpl, std::__1::default_delete<WebKit::PageClientImpl>> _pageClient;
    struct RetainPtr<WKBrowsingContextController> _browsingContextController;
    struct RetainPtr<UIView> _rootContentView;
    struct RetainPtr<UIView> _fixedClippingView;
    struct RetainPtr<WKInspectorIndicationView> _inspectorIndicationView;
    struct RetainPtr<WKInspectorHighlightView> _inspectorHighlightView;
    struct HistoricalVelocityData _historicalKinematicData;
}

- (void)_willStartScrollingOrZooming;
@property(readonly, nonatomic) BOOL isBackground;
- (id)wordRangeContainingCaretSelection;
- (void)moveForward:(unsigned int)arg1;
- (void)moveBackward:(unsigned int)arg1;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (struct CGRect)rectContainingCaretSelection;
- (struct _NSRange)_markedTextNSRange;
- (struct CGRect)rectForNSRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) const struct WKAutoCorrectionData *autocorrectionData;
- (void)accessibilityRetrieveSpeakSelectionContent;
- (void)_showDictionary:(id)arg1;
- (void)executeEditCommandWithCallback:(id)arg1;
- (void)_reanalyze:(id)arg1;
- (void)_finishInteraction;
- (void)ensurePositionInformationIsUpToDate:(struct CGPoint)arg1;
- (SEL)_actionForLongPress;
- (BOOL)requiresAccessoryView;
- (void)_showTapHighlight;
- (void)_addDefaultGestureRecognizers;
- (void)_inspectorNodeSearchRecognized:(id)arg1;
- (void)_removeDefaultGestureRecognizers;
- (void)_updateTapHighlight;
- (void)_cancelInteraction;
- (void)_singleTapDidReset:(id)arg1;
- (void)_singleTapCommited:(id)arg1;
@property(readonly, nonatomic) UIWebFormAccessory *formAccessoryView;
- (void)_performAction:(int)arg1;
- (void)_attemptClickAtLocation:(struct CGPoint)arg1;
- (void)_overflowScrollingDidEnd;
- (void)_overflowScrollingWillBegin;
- (void)_disableInspectorNodeSearch;
- (void)_enableInspectorNodeSearch;
- (void)_showRunOpenPanel:(struct WebOpenPanelParameters *)arg1 resultListener:(struct WebOpenPanelResultListenerProxy *)arg2;
- (void)_showPlaybackTargetPicker:(BOOL)arg1 fromRect:(const struct IntRect *)arg2;
- (void)_didUpdateBlockSelectionWithTouch:(int)arg1 withFlags:(int)arg2 growThreshold:(float)arg3 shrinkThreshold:(float)arg4;
- (void)_startAssistingNode:(const struct AssistedNodeInformation *)arg1 userIsInteracting:(BOOL)arg2 blurPreviousNode:(BOOL)arg3 userObject:(id)arg4;
- (void)_didGetTapHighlightForRequest:(unsigned long long)arg1 color:(const struct Color *)arg2 quads:(const Vector_15a74068 *)arg3 topLeftRadius:(const struct IntSize *)arg4 topRightRadius:(const struct IntSize *)arg5 bottomLeftRadius:(const struct IntSize *)arg6 bottomRightRadius:(const struct IntSize *)arg7;
- (void)_commitPotentialTapFailed;
- (void)_webTouchEvent:(const struct NativeWebTouchEvent *)arg1 preventsNativeGestures:(BOOL)arg2;
- (void)_didHandleKeyEvent:(id)arg1;
- (void)_selectionChanged;
- (void)_positionInformationDidChange:(const struct InteractionInformationAtPosition *)arg1;
- (BOOL)_interpretKeyEvent:(id)arg1 isCharEvent:(BOOL)arg2;
@property(readonly, nonatomic) const struct InteractionInformationAtPosition *positionInformation;
- (void)_updatePositionInformation;
- (BOOL)_scrollToRect:(struct CGRect)arg1 withOrigin:(struct CGPoint)arg2 minimumScrollDistance:(float)arg3;
- (void)_decidePolicyForGeolocationRequestFromOrigin:(struct WebSecurityOrigin *)arg1 frame:(struct WebFrameProxy *)arg2 request:(struct GeolocationPermissionRequestProxy *)arg3;
- (void)_setAcceleratedCompositingRootView:(id)arg1;
- (unique_ptr_54a90528)_createDrawingAreaProxy;
- (void)_setAccessibilityWebProcessToken:(id)arg1;
@property(nonatomic, getter=isShowingInspectorIndication) BOOL showingInspectorIndication;
- (void)_showInspectorHighlight:(const struct Highlight *)arg1;
- (void)_updateChangedSelection;
- (void)_stopAssistingNode;
- (void)_hideInspectorHighlight;
- (void)_accessibilityRegisterUIProcessTokens;
- (void)_didEndScrollingOrZooming;
- (void)updateFixedClippingView:(struct FloatRect)arg1;
- (void)_windowDidMoveToScreenNotification:(id)arg1;
- (void)cleanupInteraction;
- (void)setupInteraction;
@property(readonly, nonatomic) struct CGPoint lastInteractionLocation;
- (void)_didRelaunchProcess;
- (void)_zoomToFocusRect:(struct CGRect)arg1 selectionRect:(struct CGRect)arg2 fontSize:(float)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 allowScaling:(BOOL)arg6 forceScroll:(BOOL)arg7;
- (void)_didCommitLayerTree:(const struct RemoteLayerTreeTransaction *)arg1;
- (void)_didCommitLoadForMainFrame;
- (void)_processDidExit;
- (void)scrollViewWillStartPanOrPinchGesture;
- (struct OpaqueWKPage *)_pageRef;
@property(readonly, nonatomic) BOOL isAssistingNode;
- (void)didUpdateVisibleRect:(struct CGRect)arg1 unobscuredRect:(struct CGRect)arg2 unobscuredRectInScrollViewCoordinates:(struct CGRect)arg3 scale:(float)arg4 minimumScale:(float)arg5 inStableState:(BOOL)arg6 isChangingObscuredInsetsInteractively:(BOOL)arg7;
- (id)initWithFrame:(struct CGRect)arg1 context:(struct WebContext *)arg2 configuration:(struct WebPageConfiguration)arg3 webView:(id)arg4;
- (void)didZoomToScale:(float)arg1;
- (void)didFinishScrolling;
- (void)willStartZoomOrScroll;
@property(readonly, nonatomic) WKBrowsingContextController *browsingContextController;
- (Vector_56fb5731 *)assistedNodeSelectOptions;
- (BOOL)_zoomToRect:(struct CGRect)arg1 withOrigin:(struct CGPoint)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6;
- (void)_zoomOutWithOrigin:(struct CGPoint)arg1;
@property(readonly, nonatomic) const struct AssistedNodeInformation *assistedNodeInformation;
- (void)setMarkedText:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_updateAccessory;
- (void)_displayFormNodeInputView;
- (void)_prevAccessoryTab:(id)arg1;
- (void)_nextAccessoryTab:(id)arg1;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)_stopAssistingKeyboard;
- (void)_startAssistingKeyboard;
- (void)accessoryClear;
- (void)accessoryAutoFill;
- (void)accessoryTab:(BOOL)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct WebPageProxy *page;
- (void)_updateForScreen:(id)arg1;
- (id)wordContainingCaretSelection;
- (void)accessoryDone;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id).cxx_construct;
- (BOOL)isAnyTouchOverActiveArea:(id)arg1;
- (BOOL)shouldIgnoreWebTouch;
- (BOOL)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (void)_showImageSheet;
- (void)_longPressRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_twoFingerDoubleTapRecognized:(id)arg1;
- (void)_doubleTapRecognized:(id)arg1;
- (void)_singleTapRecognized:(id)arg1;
- (void)_showLinkSheet;
- (void)_showDataDetectorsSheet;
- (void)useSelectionAssistantWithMode:(int)arg1;
- (id)webSelectionAssistant;
- (void)fileUploadPanelDidDismiss:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)_resetShowingTextStyle:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (unsigned short)characterBeforeCaretSelection;
- (BOOL)_selectionAtDocumentStart;
- (unsigned long)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned long)_characterBeforeCaretSelection;
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
- (void)moveByOffset:(int)arg1;
- (struct CGRect)unobscuredContentRect;
- (float)inverseScale;
- (id)unscaledView;
- (void)selectWordBackward;
- (BOOL)isReplaceAllowed;
- (void)selectWordForReplacement;
- (void)replaceText:(id)arg1 withText:(id)arg2;
- (BOOL)pointIsNearMarkedText:(struct CGPoint)arg1;
- (void)requestDictationContext:(CDUnknownBlockType)arg1;
- (void)replaceDictatedText:(id)arg1 withText:(id)arg2;
- (void)clearSelection;
- (void)changeBlockSelectionWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(int)arg2 forHandle:(int)arg3;
- (void)_cancelLongPressGestureRecognizer;
- (id)webSelectionRects;
- (BOOL)pointIsInAssistedNode:(struct CGPoint)arg1;
- (BOOL)hasSelectablePositionAtPoint:(struct CGPoint)arg1;
- (id)markedText;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)requestAutocorrectionRectsForString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestAutocorrectionContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct CGRect)textLastRect;
- (struct CGRect)textFirstRect;
- (void)changeSelectionWithTouchesFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withGesture:(int)arg3 withState:(int)arg4;
- (void)changeSelectionWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(int)arg2 baseIsStart:(BOOL)arg3;
- (void)changeSelectionWithGestureAt:(struct CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (id)fontForCaretSelection;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)requiresKeyEvents;
- (void)setBottomBufferHeight:(float)arg1;
- (id)automaticallySelectedOverlay;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)select:(id)arg1;
- (id)selectedText;
@property(nonatomic) int selectionGranularity;
- (BOOL)hasContent;
- (BOOL)hasSelection;
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
- (void)selectAll:(id)arg1;
- (id)selectedDOMRange;
- (BOOL)_requiresKeyboardResetOnReload;
- (id)inputAccessoryView;
- (id)inputView;
- (BOOL)hasMarkedText;
- (struct _NSRange)selectionRange;
- (id)textColorForCaretSelection;
- (void)selectAll;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)metadataDictionariesForDictationResults;
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
- (BOOL)hasText;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)takeTraitsFrom:(id)arg1;
- (id)textInputTraits;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (void)_didScroll;
- (id)_scroller;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)canBecomeFirstResponder;
@property(readonly, nonatomic) BOOL isEditable;
- (id)keyCommands;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(nonatomic) BOOL acceptsEmoji;
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) int autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) BOOL contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) BOOL deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL disablePrediction;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) BOOL forceEnableDictation;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned int insertionPointWidth;
@property(nonatomic) BOOL isSingleLineDocument;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;

@end
