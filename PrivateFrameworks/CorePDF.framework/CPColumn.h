//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CorePDF/CPRegion.h>

@interface CPColumn : CPRegion
{
    BOOL hasCentredParagraph;
    BOOL hasColumnBreak;
    float maxLeftPad;
    float maxRightPad;
    float maxRight;
    float minLeft;
    BOOL complete;
}

- (int)inOrder;
- (int)outOrder;
- (struct CGRect)paddedBounds;
- (void)setMaxRightPad:(float)arg1;
- (float)maxRightPad;
- (void)setMaxLeftPad:(float)arg1;
- (float)maxLeftPad;
- (void)setHasCentredParagraph:(BOOL)arg1;
- (BOOL)hasCentredParagraph;
- (float)bottomBaseline;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (void)setHasColumnBreak:(BOOL)arg1;
- (float)selectionBottom;
- (float)rightPad;
- (float)leftPad;
- (struct CGRect)columnBounds;
- (void)accept:(id)arg1;
@property BOOL complete; // @synthesize complete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end

