//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface _UIActivityGroupActivityCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIImageView *_highlightedImageView;
}

- (id)draggingView;
- (void)initHighlightedImageViewIfNeeded;
- (void)updateHighlightedImageViewIfNeeded;
@property(retain, nonatomic) UIImageView *highlightedImageView; // @synthesize highlightedImageView=_highlightedImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

