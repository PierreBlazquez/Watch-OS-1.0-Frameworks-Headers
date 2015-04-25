//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

@interface BLDuotoneFilter : CIFilter
{
    BOOL _needsReprocess;
    float _lastAmount;
    float _lastStrength;
    BOOL _lastAddColor;
    int _lastVersion;
    CIImage *_inputImage;
    NSNumber *_inputAmount;
    NSNumber *_inputStrength;
    NSNumber *_inputAddColor;
    NSNumber *_inputVersion;
    CIFilter *_colorCubeFilter;
}

- (id)outputImage;
@property(copy, nonatomic) NSNumber *inputVersion; // @synthesize inputVersion=_inputVersion;
@property(copy, nonatomic) NSNumber *inputAddColor; // @synthesize inputAddColor=_inputAddColor;
@property(retain, nonatomic) CIFilter *colorCubeFilter; // @synthesize colorCubeFilter=_colorCubeFilter;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength=_inputStrength;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount=_inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;

@end

