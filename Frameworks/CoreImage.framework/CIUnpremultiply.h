//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIUnpremultiply : CIFilter
{
    CIImage *inputImage;
}

+ (id)customAttributes;
- (id)outputImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@end

