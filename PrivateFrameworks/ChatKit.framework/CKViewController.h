//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface CKViewController : UIViewController
{
    BOOL _appeared;
    BOOL _appearing;
    BOOL _dissapearing;
}

@property(nonatomic) BOOL appearing; // @synthesize appearing=_appearing;
@property(nonatomic) BOOL dissapearing; // @synthesize dissapearing=_dissapearing;
- (void)childViewControllersPerform:(SEL)arg1;
@property(nonatomic) BOOL appeared; // @synthesize appeared=_appeared;
- (void)parentControllerDidBecomeActive;
- (void)systemApplicationWillEnterForeground;
- (void)prepareForSuspend;
- (void)prepareForResume;
- (void)performResumeDeferredSetup;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)significantTimeChange;

@end

