//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class AVPlayer, AVSubtitleLayerInternal, CADisplay;

@interface AVSubtitleLayer : CALayer
{
    AVSubtitleLayerInternal *_subtitleLayer;
}

+ (id)subtitleLayerWithPlayer:(id)arg1;
@property(retain, nonatomic) AVPlayer *player;
- (void)finalize;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)arg1;
@property(readonly, nonatomic) CADisplay *subtitleLayerDisplay;
@property(nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;
- (void)subtitleRenderingNeedsLayout;
- (long)getLayout:(struct SubtitleLayoutParameters)arg1 suggestLayout:(struct CGRect *)arg2 shouldUpdateCachedSubtitleSample:(BOOL)arg3;
- (void)_updateNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (long)updateSubtitle:(id)arg1 forcedSubtitleSample:(BOOL)arg2 shouldBeHidden:(char *)arg3;
- (void)_setSubtitleSample:(id)arg1;
- (void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2;

@end

