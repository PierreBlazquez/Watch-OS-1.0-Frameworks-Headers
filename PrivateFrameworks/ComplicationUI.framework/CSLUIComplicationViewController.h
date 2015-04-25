//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CSLUIComplicationViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, UIView;

@interface CSLUIComplicationViewController : UIViewController <CSLUIComplicationViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_fullScreenView;
    Class _complicationClass;
    BOOL _ignoreCrownUp;
    id <CSLUIComplicationViewControllerDelegate> _complicationDelegate;
    NSString *_complicationIdentifier;
    int _zoomState;
}

+ (void)loadComplicationControllerForType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)_loadBundleComplicationForType:(id)arg1 withError:(id *)arg2;
- (id)complicationView;
- (void)setPercentageFull:(float)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) id fullScreenView; // @synthesize fullScreenView=_fullScreenView;
@property(readonly, nonatomic) int flipState;
- (void)setJiggly:(BOOL)arg1;
- (void)complicationViewDidFinishTouches:(id)arg1;
- (void)complicationView:(id)arg1 receivedMovedTouch:(id)arg2;
- (Class)fullScreenViewClass;
- (void)_complicationLongPressed:(id)arg1;
- (void)_complicationTapped:(id)arg1;
- (void)_longCrownPress:(id)arg1;
@property(readonly, nonatomic) int zoomState; // @synthesize zoomState=_zoomState;
- (BOOL)wantsCrownRotation;
- (void)updateAccessibilityIdentifierIfNeeded;
@property(retain, nonatomic) NSString *complicationIdentifier; // @synthesize complicationIdentifier=_complicationIdentifier;
@property(nonatomic) __weak id <CSLUIComplicationViewControllerDelegate> complicationDelegate; // @synthesize complicationDelegate=_complicationDelegate;
- (void)handleCrownPressUp:(int)arg1;
- (void)handleCrownPressDown:(int)arg1;
- (void)handleCrownRotateUp:(int)arg1;
- (void)handleCrownRotateDown:(int)arg1;
- (void)handleCrownPress:(int)arg1;
- (void)handleLongCrownPress:(int)arg1;
- (void)finishAnimationToState:(int)arg1;
- (void)animateToState:(int)arg1;
- (void)fadeForState:(int)arg1;
- (void)prepareToAnimateToState:(int)arg1;
- (void)setState:(int)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

