//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UICollectionView, UICollectionViewLayoutAttributes;

@interface UICollectionReusableView : UIView
{
    UICollectionViewLayoutAttributes *_layoutAttributes;
    NSString *_reuseIdentifier;
    UICollectionView *_collectionView;
    int _updateAnimationCount;
    struct {
        unsigned int wasDequeued:1;
    } _reusableViewFlags;
}

- (void)_setReuseIdentifier:(id)arg1;
- (void)_clearUpdateAnimation;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)_addUpdateAnimation;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)_markAsDequeued;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (BOOL)_wasDequeued;
@property(copy, nonatomic, getter=_layoutAttributes, setter=_setLayoutAttributes:) UICollectionViewLayoutAttributes *layoutAttributes;
@property(readonly, nonatomic, getter=_isInUpdateAnimation) BOOL inUpdateAnimation;
@property(nonatomic, getter=_collectionView, setter=_setCollectionView:) UICollectionView *collectionView;
- (BOOL)_disableRasterizeInAnimations;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

