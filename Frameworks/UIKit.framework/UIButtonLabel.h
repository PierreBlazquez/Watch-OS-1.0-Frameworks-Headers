//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIButton;

@interface UIButtonLabel : UILabel
{
    BOOL _reverseShadow;
    UIButton *_button;
}

+ (id)_defaultAttributes;
- (void)setReverseShadow:(BOOL)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 button:(id)arg2;
- (id)_defaultAttributes;
- (void)_setMinimumFontSize:(float)arg1;
- (void)setMinimumScaleFactor:(float)arg1;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (struct CGSize)shadowOffset;
- (void)_setWantsAutolayout;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;

@end

