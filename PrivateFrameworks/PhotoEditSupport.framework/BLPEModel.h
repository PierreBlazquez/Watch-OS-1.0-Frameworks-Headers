//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLPixelImageBuffer, CIFilter, NSMutableDictionary;

@interface BLPEModel : NSObject
{
    BLPixelImageBuffer *_sourceImageBuffer;
    BOOL _sourceImageDidChange;
    BOOL _processingFX;
    NSMutableDictionary *_TiltShiftProcessingCache;
    NSMutableDictionary *_AdaptiveGradientProcessingCache;
    NSMutableDictionary *_InkProcessingCache;
    BOOL _liveInteraction;
    CIFilter *_vintageFilter;
    CIFilter *_photoFiltersFilter;
    CIFilter *_duotoneFilter;
    CIFilter *_auraFilter;
    CIFilter *_blackAndWhiteFilter;
    CIFilter *_dramaFilter;
    CIFilter *_warmAndCoolFilter;
}

@property(nonatomic) BOOL liveInteraction; // @synthesize liveInteraction=_liveInteraction;
- (id)thumbImageWithGroupIndex:(int)arg1 amount:(float)arg2 version:(int)arg3;
- (id)initWithSourceImageBuffer:(id)arg1;
@property(retain, nonatomic) CIFilter *warmAndCoolFilter; // @synthesize warmAndCoolFilter=_warmAndCoolFilter;
@property(retain, nonatomic) CIFilter *dramaFilter; // @synthesize dramaFilter=_dramaFilter;
@property(retain, nonatomic) CIFilter *blackAndWhiteFilter; // @synthesize blackAndWhiteFilter=_blackAndWhiteFilter;
@property(retain, nonatomic) CIFilter *auraFilter; // @synthesize auraFilter=_auraFilter;
@property(retain, nonatomic) CIFilter *duotoneFilter; // @synthesize duotoneFilter=_duotoneFilter;
@property(retain, nonatomic) CIFilter *photoFiltersFilter; // @synthesize photoFiltersFilter=_photoFiltersFilter;
@property(retain, nonatomic) CIFilter *vintageFilter; // @synthesize vintageFilter=_vintageFilter;
- (id)ciImageWithInk:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withOptionsObject:(id)arg4 gradientRect:(struct CGRect)arg5 padding:(float)arg6 liveInteraction:(BOOL)arg7;
- (id)imageWithInk:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withOptionsObject:(id)arg4 gradientRect:(struct CGRect)arg5 padding:(float)arg6 liveInteraction:(BOOL)arg7;
- (id)processFX_NonCI:(id)arg1 tiltShiftCache:(id)arg2 groupIndex:(int)arg3 amount:(float)arg4 withOptionsObject:(id)arg5 analysisDictionary:(id)arg6 destRect:(struct CGRect)arg7 padding:(float)arg8;
- (id)imageWithAdaptiveGradientV2:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withCenter:(struct CGPoint)arg4 withSize:(float)arg5 withAngle:(float)arg6 gradientRect:(struct CGRect)arg7 liveInteraction:(BOOL)arg8;
- (id)imageWithAdaptiveGradientV1:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withCenter:(struct CGPoint)arg4 withSize:(float)arg5 withAngle:(float)arg6 gradientRect:(struct CGRect)arg7 liveInteraction:(BOOL)arg8;
- (id)processFX_CI:(id)arg1 groupIndex:(int)arg2 amount:(float)arg3 withOptionsObject:(id)arg4 analysisDictionary:(id)arg5 destRect:(struct CGRect)arg6 padding:(float)arg7;
- (BOOL)needInkProcessingCacheForGroupIndex:(int)arg1 andAmount:(float)arg2;
- (BOOL)needAdaptiveGradientProcessingCacheForGroupIndex:(int)arg1 andAmount:(float)arg2;
- (BOOL)needTiltShiftProcessingCacheForGroupIndex:(int)arg1 andAmount:(float)arg2;
- (void)releaseCachedFilters;
- (id)ciImageProcessFX_CI:(id)arg1 groupIndex:(int)arg2 amount:(float)arg3 withOptionsObject:(id)arg4 analysisDictionary:(id)arg5 destRect:(struct CGRect)arg6 padding:(float)arg7;
- (id)ciImageWithGroupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(id)arg3 analysisDictionary:(id)arg4 destRect:(struct CGRect)arg5 padding:(float)arg6;
- (void)updateSourceImageBuffer:(id)arg1;
- (id)imageWithGroupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(id)arg3 analysisDictionary:(id)arg4 destRect:(struct CGRect)arg5 padding:(float)arg6;
- (void)updateSourceImage:(id)arg1;
- (BOOL)canRenderCIImageWithGroupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(id)arg3;
- (id)initWithSourceImage:(id)arg1;
- (void)dealloc;

@end

