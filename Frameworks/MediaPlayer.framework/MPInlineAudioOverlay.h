//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPPlaybackControlsView.h>

@class MPInlineAudioTransportControls, NSString, UILabel, UIView;

@interface MPInlineAudioOverlay : MPPlaybackControlsView
{
    id <MPVideoControllerProtocol> _videoViewController;
    int _style;
    UIView *_backgroundView;
    MPInlineAudioTransportControls *_transportControls;
    UILabel *_streamingLabel;
    NSString *_playbackErrorDescription;
    UILabel *_playbackErrorDescriptionLabel;
}

- (void)setPlayer:(id)arg1;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setItem:(id)arg1;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCurrentTime:(double)arg1;
- (struct CGRect)_frameInBackgroundViewForDescriptionLabel:(id)arg1;
- (id)_newDescriptionLabel;
- (void)_updateVisiblePartsForAvailableRoutes;
- (id)newProgressIndicator;
- (void)reloadView;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
@property(nonatomic) __weak id <MPVideoControllerProtocol> videoViewController; // @synthesize videoViewController=_videoViewController;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_itemDurationDidChangeNotification:(id)arg1;
@property(copy, nonatomic) NSString *playbackErrorDescription; // @synthesize playbackErrorDescription=_playbackErrorDescription;

@end

