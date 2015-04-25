//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QLPreviewItemInteractionDelegate.h"
#import "QLSwippableItemProtocol.h"
#import "UIDocumentPasswordViewDelegate.h"

@class NSLayoutConstraint, NSString, NSTimer, QLDisplayBundle, QLGenericView, QLProgressView, UIDocumentPasswordView, UIView;

@interface QLPreviewViewController : UIViewController <QLPreviewItemInteractionDelegate, UIDocumentPasswordViewDelegate, QLSwippableItemProtocol>
{
    id <QLPreviewItemInteractionDelegate> _displayBundleDelegate;
    id <QLPreviewItem> _previewItem;
    int _index;
    CDStruct_6904a77d _clientContext;
    int _previewMode;
    BOOL _needsReload;
    BOOL _swiping;
    BOOL _shouldSwapDisplayBundles;
    UIView *_scalingView;
    UIView *_contentContainerView;
    UIView *_accessoryContainerView;
    float _aspectRatio;
    float _scaleFactor;
    float _navigationBarVerticalOffset;
    QLDisplayBundle *_displayBundle;
    QLDisplayBundle *_newDisplayBundle;
    NSTimer *_progressTimer;
    QLProgressView *_progressView;
    NSString *_loadingTextForMissingFiles;
    BOOL _overlayHidden;
    UIDocumentPasswordView *_documentPasswordView;
    NSLayoutConstraint *_documentPasswordViewKeyboardConstraint;
    QLGenericView *_airPlayPasswordView;
    BOOL _loadedWithPassword;
    BOOL _visible;
    struct CGRect _initialFrame;
}

@property int index; // @synthesize index=_index;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)loadView;
@property(readonly) UIView *snapshotView;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property id <QLPreviewItemInteractionDelegate> displayBundleDelegate; // @synthesize displayBundleDelegate=_displayBundleDelegate;
- (void)preloadIfNeeded;
@property(readonly) UIView *airPlayView;
@property(readonly) QLDisplayBundle *displayBundle;
- (void)setAspectRatio:(float)arg1 scaleFactor:(float)arg2;
- (void)didFinishSwiping;
- (void)willStartSwiping;
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (void)_showPasswordView;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
- (void)_swapDisplayBundles;
- (void)_scheduleShowProgressiveUI;
- (void)_showGenericDisplayBundleForPreviewItem:(id)arg1;
- (void)_keyboardVisibilityChanged:(id)arg1;
- (void)_removeDisplayBundles;
- (void)_hideProgressiveUI;
- (void)_hidePasswordView;
- (void)_updateProgressUIWithDuration:(double)arg1;
- (void)refreshPreviewItem;
- (void)_refreshPreviewItem:(BOOL)arg1 withPassword:(id)arg2;
- (void)_showProgressUI;
- (void)_prepareDisplayBundle:(id)arg1 preload:(BOOL)arg2 withHints:(id)arg3;
- (void)_cancelScheduledShowProgressiveUI;
- (void)_layoutViews;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)showContentsWasTappedForPreviewItem:(id)arg1;
@property CDStruct_6904a77d clientContext;
- (void)setNavigationBarVerticalOffset:(float)arg1;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (void)endTrackingViewUpdates;
- (void)beginTrackingViewUpdates;
@property(readonly) int airPlayMode;
@property int previewMode;
- (void)cancelLoadIfNeeded;
- (void)viewDidUpdateForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItemDidLoad:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setLoadingTextForMissingFiles:(id)arg1;
@property(retain) id <QLPreviewItem> previewItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

