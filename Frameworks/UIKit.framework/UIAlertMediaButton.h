//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIAlertButton.h>

@class UIImage, UIImageView;

@interface UIAlertMediaButton : UIAlertButton
{
    UIImageView *_checkmarkView;
    UIImage *_tableIcon;
    UIImage *_highlightedTableIcon;
}

@property(retain, nonatomic) UIImage *highlightedTableIcon; // @synthesize highlightedTableIcon=_highlightedTableIcon;
@property(retain, nonatomic) UIImage *tableIcon; // @synthesize tableIcon=_tableIcon;
@property(readonly, nonatomic) UIImageView *checkmarkView;
- (void)layoutSubviews;
- (void)dealloc;

@end

