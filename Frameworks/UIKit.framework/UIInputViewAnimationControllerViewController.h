//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIInputViewAnimationController.h"

@class NSString;

@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController>
{
    id <UIViewControllerContextTransitioning> _context;
    id <UIViewControllerAnimatedTransitioning_Keyboard> _animator;
}

+ (id)controllerWithContext:(id)arg1;
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;
- (id)initWithContext:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
