//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIAlertAction, _UIAlertControllerActionView;

@interface _UIAlertControllerCollectionViewCell : UICollectionViewCell
{
    _UIAlertControllerActionView *_actionView;
}

@property(readonly) _UIAlertControllerActionView *actionView; // @synthesize actionView=_actionView;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
@property(copy, nonatomic) UIAlertAction *action;
- (void)setHighlighted:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

