//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIViewServiceDeputyXPCInterface.h"

@class NSString;

@interface _UIViewControllerControlMessageDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>
{
}

- (id)connectionInvocation;
- (SEL)connectionSelector;
- (id)hostObjectInterface;
- (id)connectionProtocol;
- (id)exportedInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
