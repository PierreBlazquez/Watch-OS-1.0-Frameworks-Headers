//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPSwipableViewDelegate.h"
#import "MPTransportControlsTarget.h"
#import "MPVideoControllerProtocol.h"
#import "MPVideoOverlayDelegate.h"
#import "MPVolumeControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class MPAVController, MPAVItem, MPAudioVideoRoutingPopoverController, MPInlineAudioOverlay, MPInlineVideoFullscreenViewController, MPSwipableView, MPTVOutWindow, MPVideoBackgroundView, MPVideoContainerView, MPVideoPlaybackOverlayView, MPVideoView, MPVolumeController, MPWeakTimer, NSSet, NSString, UIActivityIndicatorView, UIAlertView, UIColor, UIImage, UINavigationController, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView, UIView<MPVideoOverlay>, UIWindow, _UIHostedWindow;

@interface MPInlineVideoController : NSObject <MPVolumeControllerDelegate, MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget, UIAlertViewDelegate, UIPopoverControllerDelegate>
{
    id _delegate;
    MPAVItem *_item;
    MPAVController *_player;
    int _activeOverlayUserEvents;
    BOOL _automaticallyHandleTransportControls;
    BOOL _allowsDetailScrubbing;
    BOOL _allowsWirelessPlayback;
    BOOL _alwaysAllowHidingControlsOverlay;
    int _artworkImageStyle;
    BOOL _attemptAutoPlayWhenControlsHidden;
    MPVideoBackgroundView *_backgroundView;
    UIColor *_backstopColor;
    BOOL _canAnimateControlsOverlay;
    BOOL _canShowControlsOverlay;
    BOOL _controlsOverlayVisible;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    BOOL _disableAutoRotation;
    BOOL _disableControlsAutohide;
    BOOL _displayPlaybackErrorAlerts;
    BOOL _inlinePlaybackUsesTVOut;
    unsigned int _itemTypeOverride;
    UIImage *_posterImage;
    unsigned int _scaleMode;
    BOOL _TVOutEnabled;
    BOOL _TVOutEnabledMaster;
    BOOL _useHostedWindowWhenFullscreen;
    MPSwipableView *_view;
    MPVideoPlaybackOverlayView *_videoOverlayView;
    unsigned long long _visibleParts;
    int _audioOverlayStyle;
    BOOL _navigationBarHidden;
    NSString *_playbackErrorDescription;
    int _videoOverlayStyle;
    UIView *_advertisementView;
    UIAlertView *_alertSheet;
    UIWindow *_alternateTracksWindow;
    MPInlineAudioOverlay *_audioOverlayView;
    unsigned int _backgroundTaskId;
    BOOL _batteryMonitoringWasEnabled;
    UINavigationController *_chaptersContainerController;
    MPVideoContainerView *_containerView;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPInlineVideoFullscreenViewController *_fullscreenViewController;
    BOOL _fullscreenViewSizeIsExternallyManaged;
    UIWindow *_fullscreenWindow;
    BOOL _hasShownFirstVideoFrame;
    MPWeakTimer *_idleTimer;
    BOOL _inCloneMirrorMode;
    BOOL _isAnimatingOverlay;
    BOOL _isTransitioningFromFullscreen;
    BOOL _isTransitioningToFullscreen;
    UIActivityIndicatorView *_loadingIndicator;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    MPAudioVideoRoutingPopoverController *_routePopoverController;
    unsigned int _scaleModeOverride;
    BOOL _scheduledLoadingIndicator;
    UIView *_subtitlesView;
    BOOL _swallowNextTapGesture;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MPTVOutWindow *_tvOutWindow;
    UIView *_videoBackgroundView;
    NSSet *_viewsToFade;
    BOOL _wantsOverlayVisibleWhenItemIsAvailable;
    BOOL _wasPlaying;
    UIWindow *_windowForDisablingAutorotation;
    UIWindow *_windowForFullscreenTransition;
    BOOL _shouldDestroyVideoSnapshot;
    MPVolumeController *_volumeController;
}

- (void)exitFullscreen;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
@property(nonatomic) int orientation;
@property(nonatomic) BOOL navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(readonly, retain, nonatomic) UIView *view;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
@property(nonatomic) unsigned int scaleMode; // @synthesize scaleMode=_scaleMode;
- (void)_flipToChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_doneWithChapters:(id)arg1;
- (void)fullscreenOverlayDidShow;
- (void)fullscreenOverlayDidHide;
- (void)fullscreenOverlayWillShowAnimated:(BOOL)arg1;
- (void)fullscreenOverlayWillHideAnimated:(BOOL)arg1;
@property(nonatomic) int videoOverlayStyle; // @synthesize videoOverlayStyle=_videoOverlayStyle;
- (BOOL)_shouldShowDestinationPlaceholder;
- (void)_transitionToFullscreenDidEnd;
- (void)_transitionFromFullscreenDidEnd;
- (void)_showOverlayDidEnd:(BOOL)arg1;
- (void)_showOverlayAnimated:(BOOL)arg1 quickHide:(BOOL)arg2;
@property(nonatomic) int audioOverlayStyle; // @synthesize audioOverlayStyle=_audioOverlayStyle;
- (BOOL)_overlayViewIsVisible;
- (void)_overlayIdleTimerFired:(id)arg1;
- (void)_resetOverlayIdleTimer:(double)arg1;
- (void)_validityChanged:(id)arg1;
- (void)_timedImageMetadataAvailable:(id)arg1;
- (void)_playbackError:(id)arg1;
- (void)_bufferingStateChanged:(id)arg1;
- (void)_hideOverlayDidEnd;
- (void)_delayedShowLoadingIndicator;
- (void)_flipFromChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_postScaleModeDidChange;
- (void)_updateBackgroundViewConfiguration:(BOOL)arg1;
- (void)_postViewControllerRequestsExitWithReason:(int)arg1;
- (void)_transitionFromFullscreenAnimated:(BOOL)arg1 fromDoneButton:(BOOL)arg2;
- (void)_tearDownTVOutWindow;
- (void)_destroyVideoSnapshotView;
- (void)_showVideoSnapshotView;
- (void)_updateDoubleTapGestureRecognizer;
- (BOOL)_useInlineControls;
- (void)_updateTVOutEnabled;
- (void)_transitionToFullscreenAnimated:(BOOL)arg1;
- (void)_resetOverlayIdleTimer;
- (void)_cancelOverlayIdleTimer;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_showOverlayAnimated:(BOOL)arg1;
- (void)_scaleModeDidChange:(id)arg1;
- (void)_transitionFromFullscreenAnimated:(BOOL)arg1;
- (void)_setupTVOutWindow;
- (BOOL)_isAnimatingFullscreenTransition;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (unsigned int)_effectiveItemType;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_registerForPlayerNotifications;
- (void)_updateBackgroundViewInformation;
- (void)_enableAirPlayVideoRoutesIfNecessary;
- (void)_setupSubviews;
- (void)_destroyVideoOverlayView;
- (void)_destroyAudioOverlayView;
- (void)_unregisterForPlayerNotifications;
- (void)_batteryStateDidChange:(id)arg1;
- (void)_applicationDidFinishSuspensionSnapshot:(id)arg1;
- (void)_applicationResumedEventsOnly:(id)arg1;
- (void)_itemTypeAvailable:(id)arg1;
- (void)_availableRoutesChanged:(id)arg1;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
@property(nonatomic) BOOL automaticallyHandleTransportControls; // @synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls;
- (void)overlay:(id)arg1 didEndUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didBeginUserEvent:(int)arg2;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)overlayTappedFullscreenButton:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (void)swipableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2;
@property(nonatomic) BOOL displayPlaybackErrorAlerts; // @synthesize displayPlaybackErrorAlerts=_displayPlaybackErrorAlerts;
@property(nonatomic) BOOL disableAutoRotation; // @synthesize disableAutoRotation=_disableAutoRotation;
@property(nonatomic) BOOL controlsOverlayVisible; // @synthesize controlsOverlayVisible=_controlsOverlayVisible;
@property(nonatomic) BOOL canAnimateControlsOverlay; // @synthesize canAnimateControlsOverlay=_canAnimateControlsOverlay;
@property(retain, nonatomic) UIColor *backstopColor; // @synthesize backstopColor=_backstopColor;
@property(nonatomic) BOOL attemptAutoPlayWhenControlsHidden; // @synthesize attemptAutoPlayWhenControlsHidden=_attemptAutoPlayWhenControlsHidden;
@property(nonatomic) BOOL allowsDetailScrubbing; // @synthesize allowsDetailScrubbing=_allowsDetailScrubbing;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)showAlternateTracksController:(id)arg1;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (BOOL)canShowQTAudioOnlyUI;
- (void)_delayedUpdateBackgroundView;
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned int)arg1;
- (void)_hideLoadingIndicator;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)_updateProgressControlForItem:(id)arg1;
@property(readonly, nonatomic) BOOL canChangeScaleMode;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (unsigned int)_itemTypeWithActualTypePreference;
@property(nonatomic) unsigned int itemTypeOverride; // @synthesize itemTypeOverride=_itemTypeOverride;
@property(nonatomic) int artworkImageStyle; // @synthesize artworkImageStyle=_artworkImageStyle;
@property(nonatomic) BOOL disableControlsAutohide;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
@property(nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_sizeDidChange:(id)arg1;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
@property(copy, nonatomic) NSString *playbackErrorDescription; // @synthesize playbackErrorDescription=_playbackErrorDescription;
- (void)prepareToDisplayVideo;
@property(readonly, nonatomic) BOOL viewControllerWillRequestExit;
@property(readonly, nonatomic) UIView *fullscreenView;
- (void)setControlsNeedLayout;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setClosedCaptions:(id)arg1;
@property(readonly, nonatomic) UIView *subtitlesView; // @synthesize subtitlesView=_subtitlesView;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
@property(readonly, nonatomic) unsigned int hostedWindowContextID;
@property(readonly, nonatomic) _UIHostedWindow *hostedWindow;
@property(nonatomic) BOOL inlinePlaybackUsesTVOut; // @synthesize inlinePlaybackUsesTVOut=_inlinePlaybackUsesTVOut;
@property(nonatomic) BOOL TVOutEnabled; // @synthesize TVOutEnabled=_TVOutEnabled;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
@property(nonatomic) BOOL alwaysAllowHidingControlsOverlay; // @synthesize alwaysAllowHidingControlsOverlay=_alwaysAllowHidingControlsOverlay;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts=_desiredParts;
@property(readonly, retain, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
@property(readonly, nonatomic) UIView *advertisementView; // @synthesize advertisementView=_advertisementView;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)displayVideoView;
- (void)setVideoSnapshotEnabled:(BOOL)arg1;
@property(nonatomic) BOOL canShowControlsOverlay; // @synthesize canShowControlsOverlay=_canShowControlsOverlay;
@property(readonly, retain, nonatomic) MPVideoView *videoView;
@property(nonatomic) BOOL allowsWirelessPlayback; // @synthesize allowsWirelessPlayback=_allowsWirelessPlayback;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isFullscreen) BOOL fullscreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

