//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UITargetedProxy.h>

#import "_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface.h"

@class NSString, _UIViewAnimationAttributes;

@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface>
{
    SEL _implicitAnimationSelector;
    _UIViewAnimationAttributes *_animationAttributes;
}

+ (id)proxyDecodingAnimationsForTarget:(id)arg1;
- (void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

