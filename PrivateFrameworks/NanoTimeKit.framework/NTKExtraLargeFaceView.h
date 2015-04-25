//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKFaceView.h>

@class NTKExtraLargeTimeView, NTKFaceColorScheme, UIView;

@interface NTKExtraLargeFaceView : NTKFaceView
{
    UIView *_zoomingIconCircleView;
    UIView *_zoomingIconTimeView;
    NTKFaceColorScheme *_colorScheme;
    float _currentFaceViewScale;
    float _currentFaceOffsetY;
    NTKExtraLargeTimeView *_timeLabel;
}

- (void)_prepareForStatusChange:(BOOL)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2;
- (void)_bringForegroundViewsToFront;
- (void)_layoutForegroundContainerView;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1;
- (struct CGRect)_keylineFrameForCustomEditMode:(int)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (float)_verticalPaddingForStatusBar;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (BOOL)_needsForegroundContainerView;
- (void)_cleanupAfterZoom;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
@property(retain, nonatomic) NTKExtraLargeTimeView *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

