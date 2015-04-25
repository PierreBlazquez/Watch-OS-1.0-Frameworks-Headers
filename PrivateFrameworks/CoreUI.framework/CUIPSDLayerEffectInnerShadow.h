//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent
{
    int _blendMode;
    float _opacity;
    CUIColor *_color;
    short _angle;
    unsigned int _distance;
    unsigned int _blurSize;
}

@property unsigned int distance; // @synthesize distance=_distance;
- (unsigned int)effectType;
@property unsigned int blurSize; // @synthesize blurSize=_blurSize;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;
@property short angle; // @synthesize angle=_angle;
@property(retain) CUIColor *color; // @synthesize color=_color;
@property float opacity; // @synthesize opacity=_opacity;
- (id)init;
- (void)dealloc;
@property int blendMode; // @synthesize blendMode=_blendMode;

@end

