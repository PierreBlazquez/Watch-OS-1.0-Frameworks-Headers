//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface _UIModalItemAppViewController : UIViewController
{
    UIWindow *_rotationDelegate;
}

@property(retain, nonatomic) UIWindow *rotationDelegate; // @synthesize rotationDelegate=_rotationDelegate;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;

@end

