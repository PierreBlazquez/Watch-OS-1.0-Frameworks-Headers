//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class PUICButton;

@interface SPModalViewController : UIViewController
{
    UIViewController *_contentViewController;
    PUICButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
@property(retain, nonatomic) PUICButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)viewDidLayoutSubviews;
- (void)setNeedsStatusBarAppearanceUpdate;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;
- (void)cancel;

@end
