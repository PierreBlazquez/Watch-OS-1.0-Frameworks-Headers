//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIFoundation/NSTextBlock.h>

@interface NSTextTable : NSTextBlock
{
    unsigned int _numCols;
    unsigned int _tableFlags;
    id _lcache;
    void *_tablePrimary;
    void *_tableSecondary;
}

+ (void)initialize;
- (void)setHidesEmptyCells:(BOOL)arg1;
- (void)setCollapsesBorders:(BOOL)arg1;
- (void)setLayoutAlgorithm:(unsigned int)arg1;
- (id)_descriptionAtIndex:(unsigned int)arg1 text:(id)arg2;
- (void)_setTableFlags:(unsigned int)arg1;
- (unsigned int)_tableFlags;
- (unsigned int)layoutAlgorithm;
- (BOOL)_missingColumnsForRowRange:(struct _NSRange)arg1 blockIndex:(unsigned int)arg2 text:(id)arg3;
- (BOOL)hidesEmptyCells;
- (struct CGRect)_contentRectForCharRange:(struct _NSRange)arg1 textContainer:(id)arg2;
- (id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned int)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(float)arg5 withRepetitions:(BOOL)arg6 collapseBorders:(BOOL)arg7 rowCharRange:(struct _NSRange *)arg8 indexInRow:(unsigned int *)arg9 startingRow:(int *)arg10 startingColumn:(int *)arg11 previousRowBlockHelper:(id *)arg12;
- (BOOL)collapsesBorders;
- (void)drawBackgroundForBlock:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3 characterRange:(struct _NSRange)arg4 layoutManager:(id)arg5;
- (struct CGRect)boundsRectForBlock:(id)arg1 contentRect:(struct CGRect)arg2 inRect:(struct CGRect)arg3 textContainer:(id)arg4 characterRange:(struct _NSRange)arg5;
- (struct CGRect)rectForBlock:(id)arg1 layoutAtPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 textContainer:(id)arg4 characterRange:(struct _NSRange)arg5;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (void)setNumberOfColumns:(unsigned int)arg1;
- (unsigned int)numberOfColumns;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

