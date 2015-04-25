//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, NSTimer, UIView;

@interface QLDisplayBundle : UIViewController
{
    id <QLPreviewItemInteractionDelegate> _delegate;
    id <QLPreviewItem> _previewItem;
    BOOL _overlayHidden;
    int _previewMode;
    BOOL _loaded;
    BOOL _loading;
    NSString *_password;
    NSTimer *_refreshTimer;
    int _index;
    CDStruct_6904a77d clientContext;
}

+ (BOOL)needsAVControls;
+ (double)allowedLoadingDelay;
@property BOOL loaded; // @synthesize loaded=_loaded;
- (void)cancelLoad;
@property(readonly) struct CGRect contentFrame;
@property BOOL loading; // @synthesize loading=_loading;
@property int index; // @synthesize index=_index;
- (id)printPageRenderer;
@property(readonly) UIView *accessoryView;
- (void)viewDidAppear:(BOOL)arg1;
- (int)modalPresentationStyle;
- (void)didReceiveMemoryWarning;
@property id <QLPreviewItemInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)init;
- (void)dealloc;
@property CDStruct_6904a77d clientContext; // @synthesize clientContext;
- (id)gestureRecognizersForFullScreenDisplay;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (id)printPageHelper;
- (id)pdfPreviewData;
- (void)setNavigationBarVerticalOffset:(float)arg1;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (void)endTrackingViewUpdates;
- (void)beginTrackingViewUpdates;
@property(readonly) int airPlayMode;
- (BOOL)canCopyToPasteboard;
- (BOOL)adaptativeHeight;
- (BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2;
- (void)didFailLoadingWithError:(id)arg1;
- (BOOL)overlayIsHidden;
@property int previewMode;
- (void)cancelLoadIfNeeded;
- (BOOL)canBeCached;
- (void)viewDidUpdate;
@property(readonly) UIView *airplayView;
- (void)_notifyDidLoadWithError:(id)arg1;
- (void)didLoad;
- (void)loadIfNeededWithHints:(id)arg1;
- (void)_performCancelLoad;
- (void)loadWithHints:(id)arg1;
- (void)togglePlayState;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)enterBackground;
@property(retain) id <QLPreviewItem> previewItem;
@property(retain) NSString *password;

@end
