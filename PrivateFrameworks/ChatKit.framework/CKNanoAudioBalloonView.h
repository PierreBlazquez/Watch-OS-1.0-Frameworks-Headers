//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

#import "CKAudioBalloonView.h"

@class CKWaveformProgressView, NSString, UIImageView, UILabel;

@interface CKNanoAudioBalloonView : CKColoredBalloonView <CKAudioBalloonView>
{
    BOOL _playing;
    BOOL _played;
    NSString *_timeFormat;
    UILabel *_timeLabel;
    UIImageView *_playbackStateImage;
    CKWaveformProgressView *_waveformProgressView;
    double _time;
    double _duration;
}

+ (id)pauseImage;
+ (id)sharedVolumeControlView;
+ (id)playImage;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic, getter=isControlHidden) BOOL controlHidden;
@property(nonatomic) int waveformContentMode;
@property(copy, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
- (void)updateVolumeControlVisibility;
- (void)updateProgress;
- (void)updateTimeString;
@property(retain, nonatomic) CKWaveformProgressView *waveformProgressView; // @synthesize waveformProgressView=_waveformProgressView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *playbackStateImage; // @synthesize playbackStateImage=_playbackStateImage;
@property(nonatomic, getter=isPlayed) BOOL played; // @synthesize played=_played;
- (void)configureForMessagePart:(id)arg1;
- (void)setWaveform:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)prepareForDisplay;
@property(nonatomic) double time; // @synthesize time=_time;
- (void)prepareForReuse;
- (struct UIEdgeInsets)alignmentRectInsets;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

