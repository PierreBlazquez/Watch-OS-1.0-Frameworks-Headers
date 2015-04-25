//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKBackgroundImageFaceView.h>

#import "PUICVideoPlayerViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, NTKDelayedBlock, NTKTaskScheduler, NTKVideoListing, PUICVideoPlayerView, UIImageView, UITapGestureRecognizer;

@interface NTKVideoFaceView : NTKBackgroundImageFaceView <PUICVideoPlayerViewDelegate, UIGestureRecognizerDelegate>
{
    PUICVideoPlayerView *_videoPlayerView;
    unsigned int _theme;
    NTKVideoListing *_currentListing;
    NTKDelayedBlock *_playNextVideoDelayBlock;
    NTKDelayedBlock *_unpauseDelayBlock;
    NTKTaskScheduler *_taskScheduler;
    UITapGestureRecognizer *_tapToPlayGesture;
    UIImageView *_posterImageView;
    BOOL _paused;
    BOOL _shouldChangeVariantForScreenWake;
    BOOL _preLoadedVideoOnSleep;
    int _previousDataMode;
}

- (void)videoPlayerView:(id)arg1 didPauseAfterPlayingVideoToEnd:(id)arg2;
- (BOOL)videoPlayerView:(id)arg1 shouldPauseAfterPlayingVideoToEnd:(id)arg2;
- (BOOL)_shouldDelayBeforePlayingNextVideo;
- (void)_playNextVideo;
- (void)_updateDateComplicationTextColor;
- (void)_playQueuedUpVideo;
- (void)_transitionToPosterView:(id)arg1;
- (id)_posterImageViewWithTheme:(unsigned int)arg1;
- (void)_updateDateComplicationTextColorWithColor:(id)arg1;
- (void)_queuePreloadVideoTask;
- (void)_createVideoPlayerViewIfNeeded;
- (void)_updateImageToBlur;
- (id)_newPosterImageView;
- (void)_updatePaused;
- (void)_handleScreenWake;
- (void)_changeCurrentListing;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_handleTapToPlayVideoGesture:(id)arg1;
- (id)_blurSourceImage;
- (void)_handleOrdinaryScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_applySlow;
- (void)_prepareForEditing;
- (id)_viewForEditOption:(id)arg1;
- (void)_beginTransitionToOption;
- (BOOL)_needsVignette;
- (float)_rightSideMarginForDigitalTimeHeroPosition;
- (id)_selectedContentView;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2;
- (void)_applyDataMode;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_configureForEditMode:(int)arg1;
- (void)_cleanupAfterZoom;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

