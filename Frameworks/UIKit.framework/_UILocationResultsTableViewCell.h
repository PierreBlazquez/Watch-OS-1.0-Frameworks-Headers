//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImage, UIImageView, UILabel, UIView;

@interface _UILocationResultsTableViewCell : UITableViewCell
{
    int _locationImageType;
    UIImage *_customLocationImage;
    UILabel *_searchTextLabel;
    UILabel *_searchDetailTextLabel;
    UIImageView *_searchImageView;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelSpaceConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    UIView *_cellHeightStrut;
    float _additionalLeftSidePadding;
}

@property(nonatomic) float additionalLeftSidePadding; // @synthesize additionalLeftSidePadding=_additionalLeftSidePadding;
@property(retain, nonatomic) UIView *cellHeightStrut; // @synthesize cellHeightStrut=_cellHeightStrut;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *interLabelSpaceConstraint; // @synthesize interLabelSpaceConstraint=_interLabelSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(retain, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(retain, nonatomic) UILabel *searchDetailTextLabel; // @synthesize searchDetailTextLabel=_searchDetailTextLabel;
@property(retain, nonatomic) UILabel *searchTextLabel; // @synthesize searchTextLabel=_searchTextLabel;
@property(copy, nonatomic) UIImage *customLocationImage; // @synthesize customLocationImage=_customLocationImage;
@property(nonatomic) int locationImageType; // @synthesize locationImageType=_locationImageType;
- (void)_updateLabelFontsAndConstraints;
- (float)_subtitleCellInterLabelSpace;
- (float)_subtitleCellBottomMargin;
- (void)_applyLeftAndRightAlignmentConstraints:(id)arg1;
- (float)_subtitleCellTopMargin;
- (float)_defaultCellBottomMargin;
- (float)_defaultCellTopMargin;
- (id)_searchImageView;
- (id)imageView;
- (id)detailTextLabel;
- (id)textLabel;
- (void)prepareForReuse;
- (id)contentView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end

