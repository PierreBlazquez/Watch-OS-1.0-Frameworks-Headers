//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKAnalogScene.h>

@class NTKCollectionNode, UIColor;

@interface _NTKColorAnalogScene : NTKAnalogScene
{
    NTKCollectionNode *_ticks;
    UIColor *_monogramColor;
}

- (void)applyTransitionFraction:(float)arg1 fromTickColor:(id)arg2 toTickColor:(id)arg3;
- (void)showTicks;
- (void)hideTicks;
- (void)setTickAlphaFromFraction:(float)arg1;
- (float)_handAlphaForEditMode:(int)arg1;
- (id)monogramColor;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2;
- (float)_backgroundAlphaForEditMode:(int)arg1;
- (void)applyColor:(id)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_configureForEditMode:(int)arg1;
- (void)setZoomFraction:(float)arg1 diameter:(float)arg2;
- (void)cleanupAfterZoom;
- (void).cxx_destruct;
- (void)update:(double)arg1;
- (id)initWithSize:(struct CGSize)arg1;

@end

