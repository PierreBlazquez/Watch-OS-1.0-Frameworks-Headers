//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebDocumentView.h"

@class DOMHTMLDocument, DOMHTMLElement, NSArray;

@interface MFComposeBodyField : UIWebDocumentView
{
    DOMHTMLElement *_body;
    DOMHTMLDocument *_document;
    DOMHTMLElement *_blockquote;
    struct CGSize _originalSize;
    struct CGSize _layoutSize;
    BOOL _shouldShowStandardButtons;
    unsigned int _isDirty:1;
    unsigned int _forwardingNotification:1;
    unsigned int _isLoading:1;
    unsigned int _needsReplaceImages:1;
    struct _NSRange _rangeToSelect;
    id <MFMailComposeViewDelegate> _mailComposeViewDelegate;
    int _preventLayout;
    BOOL _prefersFirstLineSelection;
    unsigned int _imageCount;
    NSArray *_attachmentURLsToReplaceWithFilenames;
}

+ (void)addAdditionalItemsToCalloutBar;
- (BOOL)isDirty;
- (void)setLoading:(BOOL)arg1;
- (float)contentWidth;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (void)ensureSelection;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)webViewDidChange:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (void)deferredBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)invalidate;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)rectOfElementWithID:(id)arg1;
- (id)htmlString;
- (void)htmlString:(id *)arg1 otherHtmlStringsAndAttachments:(id *)arg2 charsets:(id *)arg3;
- (id)plainTextContent;
- (id)plainTextAlternative;
- (BOOL)containsRichText;
- (void)insertPhotoOrVideoWithInfoDictionary:(id)arg1;
- (void)deleteTemporarySelectionMarkersFromDocument:(id)arg1;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg1;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)prependString:(id)arg1;
- (void)setPrefersFirstLineSelection;
- (void)appendQuotedMarkupString:(id)arg1 baseURL:(id)arg2;
- (void)addDOMNode:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (BOOL)isForwardingNotification;
- (void)endPreventingLayout;
- (void)beginPreventingLayout;
- (void)setAttachmentURLsToBeReplacedWithFilename:(id)arg1;
- (void)unscaleImages;
- (void)scaleImagesToScale:(unsigned int)arg1;
- (void)setLayoutInterval:(int)arg1;
- (void)setCaretPosition:(unsigned int)arg1;
- (id)mailComposeViewDelegate;
- (void)_removeInlineAttachment:(id)arg1;
- (id)_addInlineAttachmentWithData:(id)arg1 text:(id)arg2 type:(id)arg3;
- (void)addSelectedAttachmentsToPasteboard:(id)arg1;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3;
- (void)restoreSelectionFromTemporaryMarkers;
- (id)temporaryEndingSelectionMarker;
- (void)removeBlockQuoteFromTree:(id)arg1;
- (void)splitUpBlockQuotesOverlappingEndOfRange:(id)arg1;
- (void)splitUpBlockQuotesOverlappingStartOfRange:(id)arg1;
- (id)insertTemporarySelectionMarkersForRange:(id)arg1;
- (void)saveSelectionForUndo;
- (void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(int)arg5;
- (void)deleteRange:(id)arg1;
- (void)replaceNode:(id)arg1 oldNode:(id)arg2;
- (void)insertNode:(id)arg1 parent:(id)arg2 offset:(int)arg3;
- (void)deleteNode:(id)arg1;
- (void)restoreSelectionFromTemporaryMarkers:(BOOL)arg1;
- (void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3;
- (void)appendMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4;
- (void)addMarkupString:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)_ensureQuotedImagesHaveAttachmentStyleForElement:(id)arg1;
- (void)_nts_AddDOMNode:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)setMarkupString:(id)arg1 baseURL:(id)arg2 quote:(BOOL)arg3;
- (void)setMarkupString:(id)arg1;
- (void)webViewDidDraw:(id)arg1;
- (void)replaceImagesIfNecessary;
- (void)_finishedLoadingURLRequest:(id)arg1 success:(BOOL)arg2;
- (void)replaceImages;
- (void)didUndoOrRedo:(id)arg1;
- (void)updateQuoteLevelMenu;
- (void)layoutWithMinimumSize;
- (void)setPinHeight:(float)arg1;
- (void)setMailComposeViewDelegate:(id)arg1;
@property BOOL shouldShowStandardButtons; // @synthesize shouldShowStandardButtons=_shouldShowStandardButtons;
- (void)changeQuoteLevel:(int)arg1;
- (void)setDirty:(BOOL)arg1;

@end

