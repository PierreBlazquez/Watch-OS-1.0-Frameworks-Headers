//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardSplitTransitionView.h>

@class CALayer, NSMutableDictionary, UIKBCacheToken;

@interface UIKeyboardSliceTransitionView : UIKeyboardSplitTransitionView
{
    struct CGImage *_defaultKeyplaneImage;
    struct CGImage *_splitKeyplaneImage;
    CALayer *_leftKeys;
    CALayer *_rightKeys;
    CALayer *_spaceFill;
    NSMutableDictionary *_controlKeys;
    CALayer *_topEdgeHighlight;
    UIKBCacheToken *_keyplaneToken;
    int _orientation;
    struct {
        unsigned int position:1;
        unsigned int slices:1;
        unsigned int backgroundAndShadows:1;
        unsigned int backgroundGradients:1;
        unsigned int topEdgeHighlight:1;
        unsigned int shiftKeys:1;
        unsigned int returnKeys:1;
        unsigned int moreIntlKeys:1;
    } _rebuildFlags;
}

- (void)rebuildSliceTransitions;
- (void)refreshKeyplaneImages;
- (void)rebuildBackgroundGradientTransitions;
- (void)rebuildBackgroundAndShadowTransitions;
- (void)rebuildPositionTransition;
- (id)meshTransformForProgress:(float)arg1;
- (void)updateTransitionForSlice:(id)arg1 withStart:(id)arg2 startContents:(id)arg3 end:(id)arg4 endContents:(id)arg5 updateContents:(BOOL)arg6;
- (struct CGImage *)getKeyboardImageAsSplit:(BOOL)arg1;
- (void)rebuildShadows;
- (void)rebuildTopEdgeHighlightTransition;
- (float)adjustedRightWidthAtMergePoint;
- (float)adjustedLeftWidthAtMergePoint;
- (id)crossfadeOpacityAnimation;
- (void)setRebuildFlags;
- (void)_delayedUpdateTransition;
- (void)updateTransition;
- (void)rebuildReturnSlices;
- (void)rebuildShiftSlices;
- (void)rebuildMoreIntlKeys;
- (BOOL)canDisplayTransition;
- (void)rebuildControlKeys:(int)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(int)arg3 orientation:(int)arg4;
- (void)initializeLayers;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (void)transformForProgress:(float)arg1;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)updateWithProgress:(float)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

