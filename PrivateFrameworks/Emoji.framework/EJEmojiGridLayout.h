//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EJEmojiGridLayout : NSObject
{
    unsigned int _columnCount;
    unsigned int _rowCount;
    struct CGSize _cellSize;
    struct CGSize _cellPadding;
    struct CGRect _frame;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (unsigned int)cellIndexAtPoint:(struct CGPoint)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forCellCount:(unsigned int)arg2;
- (struct CGRect)cellRectForPoint:(struct CGPoint)arg1 index:(unsigned int *)arg2;
- (struct CGRect)cellRectForRow:(unsigned int)arg1 Column:(unsigned int)arg2;
@property(nonatomic) unsigned int rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) struct CGSize cellPadding; // @synthesize cellPadding=_cellPadding;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) unsigned int columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

