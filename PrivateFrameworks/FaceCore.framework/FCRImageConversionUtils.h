//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FCRImageConversionUtils : NSObject
{
}

+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1 usingGCD:(BOOL)arg2 cacheContext:(BOOL)arg3;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg1;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 cacheContext:(BOOL)arg4;
+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;

@end

