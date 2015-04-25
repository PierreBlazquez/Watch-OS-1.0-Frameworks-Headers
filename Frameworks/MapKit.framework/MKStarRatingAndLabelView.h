//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKStarRatingView, NSArray, NSString, UILabel;

@interface MKStarRatingAndLabelView : UIView
{
    MKStarRatingView *_starRatingView;
    UILabel *_reviewsLabel;
    NSString *_sourceName;
    unsigned int _numberOfReviews;
    BOOL _displaysSourceOfReviews;
    NSArray *_reviewsLabelConstraints;
}

@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
- (void)_updateFonts;
@property(nonatomic) unsigned int numberOfReviews; // @synthesize numberOfReviews=_numberOfReviews;
- (void).cxx_destruct;
- (id)viewForBaselineLayout;
- (id)initWithStyle:(int)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
@property(readonly, nonatomic) UILabel *reviewsLabel; // @synthesize reviewsLabel=_reviewsLabel;
@property(readonly, nonatomic) MKStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
- (void)setDisplaysSourceOfReviews:(BOOL)arg1;
- (void)_mapkit_setCalloutTextColor:(id)arg1;

@end

