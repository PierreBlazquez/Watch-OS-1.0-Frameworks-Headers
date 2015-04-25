//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying>
{
    UIFont *_font;
    float _minimumFontSize;
    float _actualFontSize;
    float _lineSpacing;
    int _lineBreakMode;
    int _baselineAdjustment;
    float _trackingAdjustment;
    float _minimumTrackingAdjustment;
    float _actualTrackingAdjustment;
    int _alignment;
    BOOL _includeEmoji;
    struct CGRect _truncationRect;
    BOOL _drawUnderline;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

