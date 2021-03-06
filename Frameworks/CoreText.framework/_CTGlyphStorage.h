//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _CTGlyphStorage : NSObject
{
    long _count;
    const unsigned short *_glyphs;
    const struct CGSize *_advances;
    const unsigned int *_props;
    const int *_stringIndices;
}

- (void)disposeGlyphStack;
- (void)sync;
- (BOOL)isEqual:(id)arg1;
- (void)moveGlyphsFromRange:(CDStruct_1ef3fb1f)arg1 toIndex:(long)arg2;
- (void)swapGlyphsAtIndex:(long)arg1 withIndex:(long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_1ef3fb1f)arg1;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long)arg2;
- (void *)refCon;
- (id)copyWithRange:(CDStruct_1ef3fb1f)arg1;
- (id)initWithCount:(long)arg1;
- (void)puntStringIndicesInRange:(CDStruct_1ef3fb1f)arg1 by:(long)arg2;
- (void)initGlyphStackWithCapacity:(long)arg1;
- (void)pushGlyphAtIndex:(long)arg1;
- (void)popGlyphAtIndex:(long)arg1;
- (long)attachmentCountAtIndex:(long)arg1;
- (void)setStringIndex:(long)arg1 atIndex:(long)arg2;
- (void)setAttachmentCount:(long)arg1 atIndex:(long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long)arg2;

@end

