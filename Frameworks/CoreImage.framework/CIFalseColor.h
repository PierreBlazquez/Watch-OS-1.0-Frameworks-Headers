//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage;

@interface CIFalseColor : CIFilter
{
    CIImage *inputImage;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setDefaults;
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
- (id)_kernel;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@end

