//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UITargetedProxy.h>

#import "_UIViewServiceUIBehaviorInterface.h"

@class NSString, _UIViewServiceFencingControlProxy;

@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface>
{
    int _remotePID;
    _UIViewServiceFencingControlProxy *_fencingControlProxy;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3;
+ (id)activeFencePort;
- (int)__automatic_invalidation_logic;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (void)dealloc;
- (oneway void)release;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
