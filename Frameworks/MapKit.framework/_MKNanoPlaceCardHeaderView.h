//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MKMapItem, MKStarRatingView, UIFont, UIImageView, UILabel, UIView, _MKAutoLayoutContext;

@interface _MKNanoPlaceCardHeaderView : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_openClosedLabel;
    UILabel *_hoursLabel;
    UILabel *_categoryLabel;
    UILabel *_addressLabel;
    UIView *_ratingContainerView;
    UIImageView *_iconView;
    MKStarRatingView *_ratingView;
    UIImageView *_keyLine;
    _MKAutoLayoutContext *_layoutContext;
    UIFont *_bodyFont;
    BOOL _showsAddress;
    MKMapItem *_mapItem;
}

@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)updateConstraints;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) BOOL showsAddress; // @synthesize showsAddress=_showsAddress;
- (void)textSizeChanged;
- (void)_updateAddressLabel;

@end

