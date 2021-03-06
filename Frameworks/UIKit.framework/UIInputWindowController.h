//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate.h"
#import "UIInputViewAnimationHost.h"
#import "UIKeyboardKeyplaneTransitionDelegate.h"
#import "UIScrollViewIntersectionDelegate.h"
#import "_UIRemoteKeyboardViewSource.h"

@class CADisplayLink, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIInputViewController, UIInputViewPlacementTransition, UIInputViewSet, UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIKBInputBackdropView, UIPanGestureRecognizer, UIScrollView, UIView;

@interface UIInputWindowController : UIViewController <UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate, UIGestureRecognizerDelegate, UIInputViewAnimationHost, _UIRemoteKeyboardViewSource>
{
    NSMutableArray *_animationStyleStack;
    BOOL _suppressedCallbacks;
    BOOL _suppressedNotifications;
    BOOL _isChangingPlacement;
    BOOL _isChangingInputViews;
    BOOL _requiresConstraintUpdate;
    int _hiddenCount;
    unsigned int _rotationState;
    NSMutableDictionary *_inputViewEdgeConstraints;
    NSMutableDictionary *_accessoryViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropViewEdgeConstraints;
    NSMutableDictionary *_accessoryBackdropViewEdgeConstraints;
    UIView *_preRotationSnapshot;
    struct CGSize _preRotationInputViewSize;
    struct CGSize _preRotationInputAccessoryViewSize;
    struct CGAffineTransform _preRotationInputViewTransform;
    struct CGAffineTransform _preRotationInputAccessoryViewTransform;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _splitLockState;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    float _targetTranslation;
    float _initialTranslation;
    float _translationVelocity;
    UIPanGestureRecognizer *_translateRecognizer;
    CDUnknownBlockType _bounceCompletionBlock;
    SEL _interactiveTransitionCleanupSelector;
    UIScrollView *_scrollViewForTransition;
    BOOL _scrollViewTransitionFinishing;
    BOOL _scrollViewShowsHorizontalScrollIndicator;
    struct CGPoint _scrollViewTransitionPreviousPoint;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
    struct CGRect _preLayoutHostViewFrame;
    BOOL _didOverridePreLayoutHostViewFrame;
    BOOL _didPostLayoutNotification;
    UIInputViewSetNotificationInfo *_keyboardHeightChangeNotificationInfo;
    BOOL _wasOnScreen;
    NSString *_lastKeyboardID;
    BOOL _shouldNotifyRemoteKeyboards;
    UIView *_hostView;
    UIInputViewSet *_inputViewSet;
    UIInputViewSetPlacement *_placement;
    UIInputViewController *_inputViewController;
    UIInputViewController *_inputAccessoryViewController;
    UIKBInputBackdropView *_inputBackdropView;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    NSArray *_visibilityConstraints;
    NSLayoutConstraint *_verticalVisibilityConstraint;
    UIInputViewSetPlacement *_postRotationPlacement;
    UIInputViewSet *_postRotationInputViewSet;
    UIInputViewSetNotificationInfo *_templateNotificationInfo;
    UIInputViewPlacementTransition *_currentTransition;
    id <_UIRemoteKeyboardControllerDelegate> _controllerDelegate;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
}

+ (id)tranformedUserInfoForNotificationName:(id)arg1 userInfo:(id)arg2;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_doesOverrideLegacyFullScreenLayout;
- (void)completeKeyboardDismiss:(unsigned int)arg1;
- (void)fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned int)arg2;
- (unsigned int)keyboardDismissModeForPublicMode:(int)arg1;
@property(retain, nonatomic) NSLayoutConstraint *verticalVisibilityConstraint; // @synthesize verticalVisibilityConstraint=_verticalVisibilityConstraint;
- (void)setInterfaceAutorotationDisabled:(BOOL)arg1;
- (void)setInputView:(id)arg1 accessoryView:(id)arg2;
- (void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performOperations:(CDUnknownBlockType)arg1 withTemplateNotificationInfo:(id)arg2;
- (unsigned int)changeToInputViewSet:(id)arg1;
@property(retain, nonatomic, setter=setInputAccessoryBackdropView:) UIKBInputBackdropView *_inputAccessoryBackdropView; // @synthesize _inputAccessoryBackdropView;
@property(retain, nonatomic) UIInputViewController *_inputAccessoryViewController; // @synthesize _inputAccessoryViewController;
@property(retain, nonatomic, setter=setInputBackdropView:) UIKBInputBackdropView *_inputBackdropView; // @synthesize _inputBackdropView;
@property(retain, nonatomic) UIInputViewController *_inputViewController; // @synthesize _inputViewController;
- (void)setPlacement:(id)arg1 starting:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIInputViewSet *postRotationInputViewSet; // @synthesize postRotationInputViewSet=_postRotationInputViewSet;
@property(retain, nonatomic) UIInputViewSetPlacement *postRotationPlacement; // @synthesize postRotationPlacement=_postRotationPlacement;
- (id)_viewControllerForAutorotation;
- (void)performWithoutCallbacksOrNotifications:(CDUnknownBlockType)arg1;
- (void)performWithSafeTransitionFrames:(CDUnknownBlockType)arg1;
- (void)updateAppearStatesForPlacement:(id)arg1 start:(BOOL)arg2 animated:(BOOL)arg3;
- (id)initialNotificationInfo;
- (BOOL)mergeTransitionIfNecessaryWithTransition:(id)arg1;
- (void)clearInteractiveTransitionStateIfNecessary;
- (void)postEndNotifications:(unsigned int)arg1 withInfo:(id)arg2;
- (void)postStartNotifications:(unsigned int)arg1 withInfo:(id)arg2;
- (void)changeChild:(unsigned int)arg1 toAppearState:(int)arg2 animated:(BOOL)arg3;
- (int)appearStateForChild:(unsigned int)arg1 placement:(id)arg2 start:(BOOL)arg3;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *templateNotificationInfo; // @synthesize templateNotificationInfo=_templateNotificationInfo;
@property(retain, nonatomic) NSArray *visibilityConstraints; // @synthesize visibilityConstraints=_visibilityConstraints;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3;
- (void)updateConstraintInsets;
- (struct UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1;
- (BOOL)_subviewUsesClassicLayout:(id)arg1;
- (void)clearViewSizingConstraints:(unsigned int)arg1;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // @synthesize inputViewHeightConstraint=_inputViewHeightConstraint;
- (id)viewMatchingConstraintForAttribute:(int)arg1 primaryView:(id)arg2 secondaryView:(id)arg3;
- (void)performWithoutAppearanceCallbacks:(CDUnknownBlockType)arg1;
- (void)_forcePreLayoutHostViewFrame;
- (void)_updateBackdropViews;
- (void)registerPowerLogEvent:(BOOL)arg1;
- (void)updateViewSizingConstraints;
@property(retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
- (void)checkPlaceholdersForRemoteKeyboards;
@property(nonatomic) BOOL shouldNotifyRemoteKeyboards; // @synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (void)candidateBarWillChangeHeight:(float)arg1 withDuration:(float)arg2;
- (void)updateScrollViewContentInsetBottom:(float)arg1;
- (void)hideScrollViewHorizontalScrollIndicator:(BOOL)arg1;
- (void)animateAccessoryViewVisibility:(BOOL)arg1 withDuration:(float)arg2;
- (void)extendKeyboardBackdropHeight:(float)arg1 withDuration:(float)arg2;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
- (void)finishScrollViewTransition;
- (void)setRotationAwarePlacement:(id)arg1;
@property(nonatomic) UIInputViewSetPlacement *placement; // @synthesize placement=_placement;
- (void)performOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;
- (void)translateToPlacement:(id)arg1;
- (void)syncToExistingAnimations;
- (void)_updateBounceAnimation:(id)arg1;
- (void)setAccessoryViewVisible:(BOOL)arg1 delay:(float)arg2;
- (id)nextAnimationStyle;
- (void)_finishRotationFromInterfaceOrientation:(int)arg1;
- (void)_rotateToOrientation:(int)arg1 duration:(float)arg2;
- (void)_prepareForRotationToOrientation:(int)arg1 duration:(float)arg2;
- (void)bounceAnimationDidFinish;
- (void)invalidateDisplayLink;
- (void)dock;
- (void)undock;
- (BOOL)isChangingPlacement;
- (void)initializeTranslateGestureRecognizer;
- (void)translateDetected:(id)arg1;
@property(retain, nonatomic) UIInputViewPlacementTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(readonly, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
- (void)finishTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForTransition;
- (id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(BOOL)arg2;
- (id)windowForAutorotation;
@property(readonly, nonatomic) UIView *_inputAccessoryView;
@property(readonly, nonatomic) UIView *_inputView;
- (struct CGRect)visibleFrame;
- (BOOL)isOnScreen;
- (void)keyboardHeightChangeDone;
- (void)prepareKeyboardHeightChangeWithDelta:(float)arg1 duration:(float)arg2;
- (BOOL)isTranslating;
- (BOOL)isUndocked;
- (void)updateProgress:(float)arg1 startHeight:(float)arg2 endHeight:(float)arg3;
- (int)_clipCornersOfView:(id)arg1;
- (void)setInputViewsHidden:(BOOL)arg1;
- (struct CGRect)transitioningFrame;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2;
- (id)transitioningView;
- (void)updateViewConstraints;
- (void)_getRotationContentSettings:(CDStruct_f39609a0 *)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)transitionDidFinish:(BOOL)arg1;
- (void)popAnimationStyle;
- (void)pushAnimationStyle:(id)arg1;
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(float)arg2 toHeight:(float)arg3;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (BOOL)isRotating;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

