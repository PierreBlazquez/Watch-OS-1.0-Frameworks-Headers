//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSDictionary, NSMutableDictionary;

@interface VKShieldArtwork : NSObject
{
    float _scale;
    NSCache *_imageCache;
    NSDictionary *_stringAttributes;
    struct CGColor *_shadowColor;
    struct CGSize _shadowOffset;
    float _shadowRadius;
    float _textCenterOffsetX;
    float _textBaseline;
    struct __CTFont *_nonDigitFont;
    struct CGPoint _center;
    NSMutableDictionary *_textSpecificArtworks;
    struct CGContext *_templateContext;
    CDUnknownBlockType _newContext;
    struct CGImage *_backgroundImage;
    struct {
        float leftCapWidth;
        float rightCapWidth;
        float leftPadding;
        float rightPadding;
    } _resizableInfo;
    BOOL _resizable;
    float _lineHeight;
    float _lineSpacing;
}

- (id)imageWithShieldText:(id)arg1;
- (void)setTextSpecificArtwork:(id)arg1 forStrings:(id)arg2;
- (id)initWithResizableBackgroundImage:(struct CGImage *)arg1 resizableInfo:(CDStruct_818bb265 *)arg2 contentScale:(float)arg3 font:(struct __CTFont *)arg4 nonDigitFont:(struct __CTFont *)arg5 textColor:(struct CGColor *)arg6 textCenterOffsetX:(float)arg7 textBaseline:(float)arg8 textStrokeWidth:(float)arg9 textStrokeColor:(struct CGColor *)arg10 textShadowOffset:(struct CGSize)arg11 textShadowRadius:(float)arg12 textShadowColor:(struct CGColor *)arg13 lineSpacing:(float)arg14;
- (id)initWithBackgroundImage:(struct CGImage *)arg1 contentScale:(float)arg2 font:(struct __CTFont *)arg3 nonDigitFont:(struct __CTFont *)arg4 textColor:(struct CGColor *)arg5 textCenterOffsetX:(float)arg6 textBaseline:(float)arg7 textStrokeWidth:(float)arg8 textStrokeColor:(struct CGColor *)arg9 textShadowOffset:(struct CGSize)arg10 textShadowRadius:(float)arg11 textShadowColor:(struct CGColor *)arg12;
- (id)initWithPackedVariant:(id)arg1 backgroundImage:(struct CGImage *)arg2 scale:(float)arg3 colors:(CDStruct_aed172a0 *)arg4;
- (struct CGImage *)newImageWithShieldText:(id)arg1 allowMultiline:(BOOL)arg2 centerPoint:(struct CGPoint *)arg3;
- (id)imageWithShieldText:(id)arg1 allowMultiline:(BOOL)arg2;
- (id)_initWithBackgroundImage:(struct CGImage *)arg1 contentScale:(float)arg2 resizableInfo:(CDStruct_818bb265 *)arg3 font:(struct __CTFont *)arg4 nonDigitFont:(struct __CTFont *)arg5 textColor:(struct CGColor *)arg6 textCenterOffsetX:(float)arg7 textBaseline:(float)arg8 textStrokeWidth:(float)arg9 textStrokeColor:(struct CGColor *)arg10 textShadowOffset:(struct CGSize)arg11 textShadowRadius:(float)arg12 textShadowColor:(struct CGColor *)arg13 lineSpacing:(float)arg14;
- (id).cxx_construct;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
- (void)dealloc;

@end

