//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIPSDGradientStop.h>

#import "NSCoding.h"

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding>
{
    struct _psdGradientColor gradientColor;
}

+ (id)colorStopWithLocation:(float)arg1 gradientColor:(struct _psdGradientColor)arg2;
+ (void)initialize;
- (id)initWithLocation:(float)arg1 gradientColor:(struct _psdGradientColor)arg2;
- (struct _psdGradientColor)gradientColor;
- (float)colorLocation;
- (BOOL)isColorStop;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

