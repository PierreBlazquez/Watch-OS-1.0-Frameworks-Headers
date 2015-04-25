//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSArray;

@interface NPKSinglePassLayout : UICollectionViewLayout
{
    float _yOffset;
    NSArray *_allowedIndexPaths;
}

+ (Class)layoutAttributesClass;
- (id)_indexPathForCardNumber:(int)arg1;
- (id)_layoutAttributesForCardNumber:(int)arg1;
- (struct CGPoint)contentOffsetForIndexPath:(id)arg1;
@property(retain, nonatomic) NSArray *allowedIndexPaths; // @synthesize allowedIndexPaths=_allowedIndexPaths;
- (id)indexPathForContentOffset:(struct CGPoint)arg1;
- (void).cxx_destruct;
@property(nonatomic) float yOffset; // @synthesize yOffset=_yOffset;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;

@end
