//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIConvolution9Horizontal : CIFilter
{
    CIImage *inputImage;
    CIVector *inputWeights;
    NSNumber *inputBias;
}

+ (id)customAttributes;
- (id)outputImage;
@property(retain, nonatomic) NSNumber *inputBias; // @synthesize inputBias;
@property(retain, nonatomic) CIVector *inputWeights; // @synthesize inputWeights;
- (BOOL)_isIdentity;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@end

