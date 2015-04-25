//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

#import "_CIFilterProperties.h"

@class CIImage, NSArray, NSString;

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties>
{
    CIImage *inputImage;
    NSString *inputCameraModel;
    NSArray *inputCorrectionInfo;
}

- (id)outputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (void)setDefaults;
@property(copy, nonatomic) NSArray *inputCorrectionInfo; // @synthesize inputCorrectionInfo;
@property(copy, nonatomic) NSString *inputCameraModel; // @synthesize inputCameraModel;
- (BOOL)_isIdentity;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@end

