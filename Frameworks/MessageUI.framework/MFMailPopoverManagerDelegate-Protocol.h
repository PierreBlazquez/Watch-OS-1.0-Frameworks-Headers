//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIPopoverController, UIViewController;

@protocol MFMailPopoverManagerDelegate <NSObject>

@optional
- (int)popoverPresentationStyleForViewController:(UIViewController *)arg1;
- (BOOL)popoverControllerSupportsRotation:(UIPopoverController *)arg1;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg1 isUserAction:(BOOL)arg2;
- (BOOL)popoverControllerShouldDismissPopover:(UIPopoverController *)arg1;
@end

