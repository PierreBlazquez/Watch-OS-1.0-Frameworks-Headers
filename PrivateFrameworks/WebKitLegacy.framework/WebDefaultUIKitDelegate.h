//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WebDefaultUIKitDelegate : NSObject
{
}

+ (id)sharedUIKitDelegate;
- (void)webViewDidLayout:(id)arg1;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (struct CGRect)documentVisibleRectForWebView:(id)arg1;
- (struct CGPoint)contentsPointForWebView:(id)arg1;
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (struct CGPoint)interactionLocation;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (id)checkSpellingOfString:(id)arg1;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;
- (BOOL)isUnperturbedDictationResultMarker:(id)arg1;
- (int)deviceOrientation;
- (void)showPlaybackTargetPicker:(BOOL)arg1 fromRect:(struct CGRect)arg2;
- (int)getPasteboardChangeCount;
- (id)readDataFromPasteboard:(id)arg1 withIndex:(int)arg2;
- (BOOL)performsTwoStepPaste:(id)arg1;
- (int)getPasteboardItemsCount;
- (void)writeDataToPasteboard:(id)arg1;
- (BOOL)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (void)webViewDidReceiveMobileDocType:(id)arg1;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webViewDidRestoreFromPageCache:(id)arg1;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(BOOL)arg3 acceptMIMETypes:(id)arg4;
- (void)webViewDidEndOverflowScroll:(id)arg1;
- (void)webViewDidStartOverflowScroll:(id)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;
- (void)webViewDidDrawTiles:(id)arg1;
- (BOOL)hasRichlyEditableSelection;
- (void)deleteFromInput;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2;
- (id)supportedPasteboardTypesForCurrentSelection;

@end

