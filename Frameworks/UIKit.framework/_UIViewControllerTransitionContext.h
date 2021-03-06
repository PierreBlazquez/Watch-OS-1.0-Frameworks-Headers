//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerContextTransitioningEx.h"

@class NSArray, NSString, UIView, _UIViewControllerTransitionCoordinator;

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx>
{
    float _previousPercentComplete;
    NSArray *_disabledViews;
    struct {
        unsigned int interactorImplementsCompletionSpeed:1;
        unsigned int interactorImplementsCompletionCurve:1;
        unsigned int transitionWasCancelled:1;
        unsigned int transitionIsCompleting:1;
    } _transitionContextFlags;
    BOOL __allowUserInteraction;
    BOOL _rotating;
    BOOL _initiallyInteractive;
    BOOL _isCurrentlyInteractive;
    BOOL _isAnimated;
    BOOL __isPresentation;
    NSArray *__containerViews;
    float __percentOffset;
    id <UIViewControllerAnimatedTransitioning> __animator;
    id <UIViewControllerInteractiveTransitioning> __interactor;
    UIView *_containerView;
    CDUnknownBlockType __willCompleteHandler;
    CDUnknownBlockType __completionHandler;
    CDUnknownBlockType __didCompleteHandler;
    float __completionVelocity;
    int __completionCurve;
    _UIViewControllerTransitionCoordinator *__auxContext;
    int __state;
    CDUnknownBlockType __interactiveUpdateHandler;
    CDUnknownBlockType __postInteractiveCompletionHandler;
    int _presentationStyle;
    double __duration;
}

+ (id)_associatedTransitionContextForObject:(id)arg1;
@property(nonatomic, setter=_setCompletionVelocity:) float _completionVelocity; // @synthesize _completionVelocity=__completionVelocity;
@property(copy, nonatomic, setter=_setDidCompleteHandler:) CDUnknownBlockType _didCompleteHandler; // @synthesize _didCompleteHandler=__didCompleteHandler;
@property(nonatomic, setter=_setTransitionIsCompleting:) BOOL _transitionIsCompleting;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(float)arg1;
- (void)_setPreviousPercentComplete:(float)arg1;
- (float)_previousPercentComplete;
@property(nonatomic, setter=_setPercentOffset:) float _percentOffset; // @synthesize _percentOffset=__percentOffset;
@property(retain, nonatomic, setter=_setContainerViews:) NSArray *_containerViews; // @synthesize _containerViews=__containerViews;
- (void)_runAlongsideCompletions;
- (void)_interactivityDidChange:(BOOL)arg1;
@property(copy, nonatomic, setter=_setInteractiveUpdateHandler:) CDUnknownBlockType _interactiveUpdateHandler; // @synthesize _interactiveUpdateHandler=__interactiveUpdateHandler;
@property(nonatomic, setter=_setIsCurrentlyInteractive:) BOOL isCurrentlyInteractive; // @synthesize isCurrentlyInteractive=_isCurrentlyInteractive;
@property(readonly, nonatomic, getter=_affineTransform) struct CGAffineTransform affineTransform;
@property(nonatomic, setter=_setInitiallyInteractive:) BOOL initiallyInteractive; // @synthesize initiallyInteractive=_initiallyInteractive;
@property(retain, nonatomic, setter=_setAuxContext:) _UIViewControllerTransitionCoordinator *_auxContext; // @synthesize _auxContext=__auxContext;
- (BOOL)_transitionIsInFlight;
@property(nonatomic, getter=_isRotating, setter=_setRotating:) BOOL rotating; // @synthesize rotating=_rotating;
- (struct CGAffineTransform)targetTransform;
@property(nonatomic, setter=_setIsPresentation:) BOOL _isPresentation; // @synthesize _isPresentation=__isPresentation;
@property(copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(nonatomic, setter=_setState:) int _state; // @synthesize _state=__state;
@property(copy, nonatomic, setter=_setWillCompleteHandler:) CDUnknownBlockType _willCompleteHandler; // @synthesize _willCompleteHandler=__willCompleteHandler;
@property(nonatomic, setter=_setInteractor:) id <UIViewControllerInteractiveTransitioning> _interactor; // @synthesize _interactor=__interactor;
- (void)_disableInteractionForViews:(id)arg1;
@property(nonatomic, getter=_allowUserInteraction, setter=_setAllowUserInteraction:) BOOL _allowUserInteraction; // @synthesize _allowUserInteraction=__allowUserInteraction;
- (void)__runAlongsideAnimations;
- (void)_setTransitionIsInFlight:(BOOL)arg1;
@property(copy, nonatomic, setter=_setPostInteractiveCompletionHandler:) CDUnknownBlockType _postInteractiveCompletionHandler; // @synthesize _postInteractiveCompletionHandler=__postInteractiveCompletionHandler;
@property(nonatomic, setter=_setPresentationStyle:) int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
- (void)_enableInteractionForDisabledViews;
@property(nonatomic, setter=_setDuration:) double _duration; // @synthesize _duration=__duration;
@property(nonatomic, setter=_setAnimator:) id <UIViewControllerAnimatedTransitioning> _animator; // @synthesize _animator=__animator;
@property(nonatomic, setter=_setCompletionCurve:) int _completionCurve; // @synthesize _completionCurve=__completionCurve;
@property(nonatomic, setter=_setContainerView:) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic, setter=_setIsAnimated:) BOOL isAnimated; // @synthesize isAnimated=_isAnimated;
- (id)_transitionCoordinator;
- (void)updateInteractiveTransition:(float)arg1;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(BOOL)arg1;
- (BOOL)transitionWasCancelled;
- (BOOL)isInteractive;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

