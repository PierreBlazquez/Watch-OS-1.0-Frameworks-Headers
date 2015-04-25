//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

@class UIView;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView
{
    int _capacity;
    int _state;
    UIView *_accessoryView;
}

- (float)_batteryYOffsetWithBackground:(id)arg1;
- (id)_accessoryImage;
- (BOOL)_needsAccessoryImage;
- (void)_updateAccessoryImage;
- (float)extraRightPadding;
- (float)legibilityStrength;
- (id)contentsImage;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)dealloc;

@end

