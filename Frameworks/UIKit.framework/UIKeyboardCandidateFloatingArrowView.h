//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton;

@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView
{
    UIButton *_arrowButton;
}

+ (id)collectionViewKind;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
- (void)updateArrow;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

