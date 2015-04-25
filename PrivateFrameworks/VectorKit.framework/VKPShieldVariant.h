//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface VKPShieldVariant : PBCodable <NSCopying>
{
    CDStruct_79d0722e _textShadow;
    CDStruct_033e8ed6 *_layers;
    unsigned int _layersCount;
    unsigned int _layersSpace;
    CDStruct_f43f0670 _textStroke;
    CDStruct_58ec0031 _fontColor;
    CDStruct_d570ea55 _centerPoints;
    unsigned int _atlasIndex;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    float _capWidthLeft;
    float _capWidthRight;
    float _centerOffsetX;
    NSString *_fontName;
    float _fontSize;
    unsigned int _maxDigits;
    unsigned int _minDigits;
    NSString *_nonDigitFontName;
    float _nonDigitFontSize;
    float _paddingLeft;
    float _paddingRight;
    unsigned int _quadIndex;
    float _textBaseline;
    int _textMaskColor;
    struct {
        unsigned int textShadow:1;
        unsigned int textStroke:1;
        unsigned int fontColor:1;
        unsigned int atlasIndex:1;
        unsigned int backgroundColor:1;
        unsigned int borderColor:1;
        unsigned int capWidthLeft:1;
        unsigned int capWidthRight:1;
        unsigned int centerOffsetX:1;
        unsigned int fontSize:1;
        unsigned int maxDigits:1;
        unsigned int minDigits:1;
        unsigned int nonDigitFontSize:1;
        unsigned int paddingLeft:1;
        unsigned int paddingRight:1;
        unsigned int quadIndex:1;
        unsigned int textBaseline:1;
        unsigned int textMaskColor:1;
    } _has;
}

@property(nonatomic) BOOL hasTextMaskColor;
@property(nonatomic) int textMaskColor; // @synthesize textMaskColor=_textMaskColor;
@property(nonatomic) BOOL hasCapWidthRight;
@property(nonatomic) float capWidthRight; // @synthesize capWidthRight=_capWidthRight;
@property(nonatomic) BOOL hasCapWidthLeft;
@property(nonatomic) float capWidthLeft; // @synthesize capWidthLeft=_capWidthLeft;
@property(nonatomic) BOOL hasBorderColor;
@property(nonatomic) BOOL hasBackgroundColor;
- (void)setLayers:(CDStruct_033e8ed6 *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) CDStruct_033e8ed6 *layers;
- (void)setCenterPoints:(float *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) float *centerPoints;
@property(nonatomic) BOOL hasNonDigitFontSize;
@property(nonatomic) float nonDigitFontSize; // @synthesize nonDigitFontSize=_nonDigitFontSize;
@property(nonatomic) BOOL hasTextShadow;
@property(nonatomic) CDStruct_79d0722e textShadow; // @synthesize textShadow=_textShadow;
@property(nonatomic) BOOL hasTextStroke;
@property(nonatomic) CDStruct_f43f0670 textStroke; // @synthesize textStroke=_textStroke;
@property(nonatomic) BOOL hasFontColor;
@property(nonatomic) CDStruct_58ec0031 fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) BOOL hasFontSize;
@property(nonatomic) BOOL hasCenterOffsetX;
@property(nonatomic) float centerOffsetX; // @synthesize centerOffsetX=_centerOffsetX;
@property(nonatomic) BOOL hasTextBaseline;
@property(nonatomic) float textBaseline; // @synthesize textBaseline=_textBaseline;
@property(nonatomic) BOOL hasMaxDigits;
@property(nonatomic) unsigned int maxDigits; // @synthesize maxDigits=_maxDigits;
@property(nonatomic) BOOL hasMinDigits;
@property(nonatomic) unsigned int minDigits; // @synthesize minDigits=_minDigits;
@property(nonatomic) BOOL hasQuadIndex;
@property(nonatomic) BOOL hasAtlasIndex;
- (void)addLayer:(CDStruct_033e8ed6)arg1;
- (void)addCenterPoint:(float)arg1;
- (void)clearCenterPoints;
- (void)clearLayers;
@property(retain, nonatomic) NSString *nonDigitFontName; // @synthesize nonDigitFontName=_nonDigitFontName;
@property(nonatomic) unsigned int quadIndex; // @synthesize quadIndex=_quadIndex;
@property(nonatomic) unsigned int atlasIndex; // @synthesize atlasIndex=_atlasIndex;
- (CDStruct_033e8ed6)layerAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int layersCount;
- (struct CGImage *)newImageWithTextureAtlases:(id)arg1 atlasToImageCache:(id)arg2 contentScale:(float)arg3 colors:(CDStruct_aed172a0 *)arg4;
- (float)centerPointAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int centerPointsCount;
@property(readonly, nonatomic) BOOL hasNonDigitFontName;
@property(readonly, nonatomic) BOOL hasFontName;
- (Matrix_5173352a)_colorForMaskColor:(int)arg1 colors:(CDStruct_aed172a0 *)arg2;
@property(nonatomic) BOOL hasPaddingRight;
@property(nonatomic) BOOL hasPaddingLeft;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) float paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) float paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) unsigned int borderColor; // @synthesize borderColor=_borderColor;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) unsigned int backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)dealloc;

@end

