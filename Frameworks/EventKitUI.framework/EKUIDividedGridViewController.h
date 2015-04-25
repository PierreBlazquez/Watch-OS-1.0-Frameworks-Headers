//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray;

@interface EKUIDividedGridViewController : UIViewController
{
    int _type;
    float _preferredWidth;
    NSArray *_buttonTitles;
    NSArray *_allCells;
    id <EKUIDividedGridViewControllerDelegate> _delegate;
    NSArray *_weekViews;
}

+ (id)dividerColor;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (struct CGSize)intrinsicContentSize;
@property __weak id <EKUIDividedGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float preferredWidth; // @synthesize preferredWidth=_preferredWidth;
- (void)cellTapped:(id)arg1;
- (id)initWithType:(int)arg1 buttonTitles:(id)arg2;
- (float)_neededHeight;
@property(retain) NSArray *weekViews; // @synthesize weekViews=_weekViews;
- (float)_rowHeightForWidth:(float)arg1;
@property(retain) NSArray *allCells; // @synthesize allCells=_allCells;
- (float)_defaultButtonWidthForButtonAtIndex:(int)arg1;
- (id)_newDividerView;

@end

