//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CIColor, NSString;

@interface UIColor : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_systemColorName;
}

+ (id)_alternateForegroundColor2;
+ (id)_alternateForegroundColor;
+ (id)_alternateTextColor2;
+ (id)_alternateTextColor;
+ (id)_alternateBackgroundColor2;
+ (id)_alternateBackgroundColor;
+ (id)_webContentBackgroundColor;
+ (id)_vibrantDarkFillDodgeColor;
+ (id)_vibrantLightFillDarkeningColor;
+ (id)_vibrantLightFillBurnColor;
+ (id)_vibrantLightDividerDarkeningColor;
+ (id)_vibrantLightDividerBurnColor;
+ (id)_systemSelectedColor;
+ (id)_alternateGrayColorForFontSize:(float)arg1;
+ (id)_grayColorForFontSize:(float)arg1;
+ (id)_dimmingViewColor;
+ (id)_translucentPaperTextureColor;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)_externalSystemSuperDarkGrayColor;
+ (id)_externalSystemExtraDarkGrayColor;
+ (id)_externalSystemMidGrayColor;
+ (id)_systemMidGrayTintColor;
+ (id)_barStyleBlackHairlineShadowColor;
+ (id)_barHairlineShadowColor;
+ (id)_systemDestructiveTintColor;
+ (id)_systemInteractionTintColor;
+ (id)externalSystemGreenColor;
+ (id)externalSystemRedColor;
+ (id)externalSystemTealColor;
+ (id)systemDarkYellowColor;
+ (id)systemMidGrayColor;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)tableCellBlueTextColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)_markedTextBorderColor;
+ (id)_markedTextBackgroundColor;
+ (id)darkTextColor;
+ (id)lightTextColor;
+ (id)selectionGrabberColor;
+ (id)pinStripeColor;
+ (id)textFieldAtomBlueColor;
+ (id)infoTextOverPinStripeTextColor;
+ (id)textFieldAtomPurpleColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellValue1BlueColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tableShadowColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSelectionColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tableCellPlainBackgroundColor;
+ (id)classFallbacksForKeyedArchiver;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor *)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (float)_luminanceWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)__halfTransparentWhiteColor;
+ (id)__halfTransparentBlackColor;
+ (id)selectionHighlightColor;
+ (id)insertionPointColor;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(float)arg4;
+ (id)systemYellowColor;
+ (id)systemGrayColor;
+ (id)_alternateUISwitchableSelectorPairs;
+ (id)tableCellBackgroundColor;
+ (id)tableCellbackgroundColorPigglyWiggly;
+ (id)tableGroupedSeparatorLightColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableSeparatorLightColor;
+ (id)tableBackgroundColor;
+ (id)groupTableViewBackgroundColor;
+ (id)_externalSystemGrayColor;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;
+ (id)_externalSystemWhiteColor;
+ (id)_externalBarBackgroundColor;
+ (id)_externalSystemDarkGrayColor;
+ (id)_systemColorWithName:(id)arg1;
+ (id)systemDarkPinkColor;
+ (id)systemPinkColor;
+ (id)systemDarkTealColor;
+ (id)systemTealColor;
+ (id)systemDarkOrangeColor;
+ (id)systemOrangeColor;
+ (id)systemDarkBlueColor;
+ (id)systemDarkGreenColor;
+ (id)systemGreenColor;
+ (id)systemDarkRedColor;
+ (id)systemRedColor;
+ (id)systemBlueColor;
+ (id)_alternateSystemInteractionTintColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)darkGrayColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)clearColor;
+ (id)blackColor;
- (id)_colorBlendedWithColors:(id)arg1;
- (float)_luminanceDifferenceFromColor:(id)arg1;
- (float)_colorDifferenceFromColor:(id)arg1;
- (BOOL)_isSimilarToColor:(id)arg1 withinPercentage:(float)arg2;
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;
- (float)_luminance;
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;
- (id)initWithPatternImage:(id)arg1;
@property(readonly, nonatomic) CIColor *CIColor;
- (id)initWithCIColor:(id)arg1;
- (BOOL)getHue:(float *)arg1 saturation:(float *)arg2 brightness:(float *)arg3 alpha:(float *)arg4;
- (BOOL)isPatternColor;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)styleString;
- (void)setStroke;
- (id)_colorBlendedWithColor:(id)arg1;
- (BOOL)_getRed:(float *)arg1 green:(float *)arg2 blue:(float *)arg3 alpha:(float *)arg4;
- (struct CGColor *)cgColor;
- (float)alphaComponent;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (void)setFill;
- (BOOL)_getWhite:(float *)arg1 alpha:(float *)arg2;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (Class)classForCoder;
- (BOOL)getRed:(float *)arg1 green:(float *)arg2 blue:(float *)arg3 alpha:(float *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)set;
- (BOOL)getWhite:(float *)arg1 alpha:(float *)arg2;
- (id)colorWithAlphaComponent:(float)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

