//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray, NSString, UIKBGradient, UIKBRenderGeometry, UIKBTextStyle;

@interface UIKBRenderTraits : NSObject <NSCopying>
{
    NSMutableArray *_renderEffects;
    NSMutableArray *_foregroundRenderEffects;
    BOOL _honorControlOpacity;
    BOOL _controlOpacities;
    UIKBRenderGeometry *_geometry;
    UIKBGradient *_backgroundGradient;
    UIKBGradient *_layeredBackgroundGradient;
    UIKBGradient *_layeredForegroundGradient;
    UIKBTextStyle *_symbolStyle;
    UIKBTextStyle *_secondarySymbolStyle;
    UIKBTextStyle *_fallbackSymbolStyle;
    NSArray *_variantGeometries;
    UIKBRenderTraits *_variantTraits;
    UIKBRenderTraits *_highlightedVariantTraits;
    float _forceOpacity;
    int _blendForm;
    NSString *_hashString;
}

+ (id)traitsWithSymbolStyle:(id)arg1;
+ (id)traitsWithGeometry:(id)arg1;
+ (id)emptyTraits;
@property(retain, nonatomic) NSArray *variantGeometries; // @synthesize variantGeometries=_variantGeometries;
@property(retain, nonatomic) UIKBTextStyle *fallbackSymbolStyle; // @synthesize fallbackSymbolStyle=_fallbackSymbolStyle;
- (void)addForegroundRenderEffect:(id)arg1;
@property(retain, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
@property(retain, nonatomic) UIKBRenderTraits *highlightedVariantTraits; // @synthesize highlightedVariantTraits=_highlightedVariantTraits;
@property(readonly, nonatomic) NSArray *foregroundRenderEffects; // @synthesize foregroundRenderEffects=_foregroundRenderEffects;
@property(readonly, nonatomic) NSArray *renderEffects; // @synthesize renderEffects=_renderEffects;
@property(retain, nonatomic) UIKBGradient *layeredForegroundGradient; // @synthesize layeredForegroundGradient=_layeredForegroundGradient;
@property(retain, nonatomic) UIKBGradient *layeredBackgroundGradient; // @synthesize layeredBackgroundGradient=_layeredBackgroundGradient;
@property(nonatomic) float forceOpacity; // @synthesize forceOpacity=_forceOpacity;
@property(retain, nonatomic) UIKBGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
- (void)removeAllRenderEffects;
- (void)overlayWithTraits:(id)arg1;
@property(nonatomic) BOOL controlOpacities; // @synthesize controlOpacities=_controlOpacities;
@property(retain, nonatomic) UIKBTextStyle *secondarySymbolStyle; // @synthesize secondarySymbolStyle=_secondarySymbolStyle;
@property(nonatomic) int blendForm; // @synthesize blendForm=_blendForm;
- (void)modifyForMasking;
@property(retain, nonatomic) UIKBRenderGeometry *geometry; // @synthesize geometry=_geometry;
@property(retain, nonatomic) UIKBRenderTraits *variantTraits; // @synthesize variantTraits=_variantTraits;
- (void)addRenderEffect:(id)arg1;
@property(retain, nonatomic) UIKBTextStyle *symbolStyle; // @synthesize symbolStyle=_symbolStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

