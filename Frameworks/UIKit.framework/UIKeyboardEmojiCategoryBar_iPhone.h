//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardEmojiCategoryBar.h>

@class NSArray;

@interface UIKeyboardEmojiCategoryBar_iPhone : UIKeyboardEmojiCategoryBar
{
    NSArray *_selectedImages;
    NSArray *_unselectedImages;
}

- (void)updateSegmentAndDividers:(int)arg1;
- (void)releaseImagesAndViews;
- (void)updateSegmentImages;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

