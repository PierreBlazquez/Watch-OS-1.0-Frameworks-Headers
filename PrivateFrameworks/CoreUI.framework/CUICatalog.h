//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUICatalog : NSObject
{
    unsigned int _storageRef;
    unsigned int _purgeWhenFinished:1;
}

+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4;
+ (id)defaultUICatalogForBundle:(id)arg1;
+ (id)defaultUICatalog;
+ (id)systemUICatalog;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4 sizeClassHorizontal:(int)arg5 sizeClassVertical:(int)arg6;
- (BOOL)drawGlyphs:(const unsigned short *)arg1 atPositions:(const struct CGPoint *)arg2 inContext:(struct CGContext *)arg3 withFont:(struct __CTFont *)arg4 count:(unsigned int)arg5 stylePresetName:(id)arg6 styleConfiguration:(id)arg7 foregroundColor:(struct CGColor *)arg8;
- (int)blendModeForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (struct CGColor *)equivalentForegroundColorForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (BOOL)hasStylePresetWithName:(id)arg1;
- (BOOL)fillStyledRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (BOOL)strokeStyledPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (int)artVariantIDOrZero;
- (unsigned int)_themeRef;
- (struct CGPDFDocument *)pdfDocumentWithName:(id)arg1;
- (id)imageWithName:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3;
- (id)imageWithName:(id)arg1 scaleFactor:(float)arg2;
- (id)newShapeEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3;
- (BOOL)hasStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (BOOL)_doStyledQuartzDrawingInContext:(struct CGContext *)arg1 inBounds:(struct CGRect)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 drawingHandler:(CDUnknownBlockType)arg5;
- (BOOL)fillStyledPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (id)newTextEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3;
- (BOOL)requiredDrawOfUnstyledGlyphs:(const unsigned short *)arg1 atPositions:(const struct CGPoint *)arg2 inContext:(struct CGContext *)arg3 withFont:(struct __CTFont *)arg4 count:(unsigned int)arg5;
- (id)newShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)newShapeEffectPresetWithRenditionKey:(id)arg1;
- (id)renditionKeyForShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)renditionKeyForShapeEffectPresetWithStyleID:(unsigned int)arg1 state:(int)arg2 presentationState:(int)arg3 value:(int)arg4 resolution:(unsigned int)arg5;
- (id)renditionKeyForShapeEffectPresetWithStylePresetName:(id)arg1 state:(int)arg2 presentationState:(int)arg3 value:(int)arg4 resolution:(unsigned int)arg5;
- (BOOL)canGetShapeEffectRenditionWithKey:(id)arg1;
- (id)dataWithName:(id)arg1 deviceIdiom:(int)arg2 deviceSubtype:(unsigned int)arg3 memoryClass:(unsigned int)arg4 graphicsClass:(unsigned int)arg5;
- (id)_resolvedRenditionKeyForName:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4 sizeClassHorizontal:(int)arg5 sizeClassVertical:(int)arg6 memoryClass:(unsigned int)arg7 graphicsClass:(unsigned int)arg8;
- (id)imageWithName:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4;
- (id)allImageNames;
- (id)_baseKeyForName:(id)arg1;
- (id)_themeStore;
- (id)imagesWithName:(id)arg1;
- (void)clearCachedImageResources;
- (id)dataWithName:(id)arg1;
- (id)imageWithName:(id)arg1 scaleFactor:(float)arg2 deviceIdiom:(int)arg3 deviceSubtype:(unsigned int)arg4 sizeClassHorizontal:(int)arg5 sizeClassVertical:(int)arg6;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id *)arg3;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2;
- (id)imageByStylingImage:(struct CGImage *)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 foregroundColor:(struct CGColor *)arg4 scale:(float)arg5;
- (CDStruct_fd71c141)styledInsetsForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3 scale:(float)arg4;
- (id)debugDescription;
- (void)dealloc;

@end

