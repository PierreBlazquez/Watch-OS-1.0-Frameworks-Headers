//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMConnectionMonitor : NSObject
{
    NSString *_remoteHost;
    id <IMConnectionMonitorDelegate> _delegate;
}

+ (id)alloc;
- (void)_setup;
@property(readonly, nonatomic) NSString *remoteHost; // @synthesize remoteHost=_remoteHost;
@property(readonly, nonatomic) BOOL requiresDataConnectionActivation;
@property(nonatomic, setter=setDataConnectionActive:) BOOL isDataConnectionActive;
- (void)goDisconnected;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
@property(readonly, nonatomic) BOOL isImmediatelyReachable;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (void)clear;
@property(nonatomic) id <IMConnectionMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end
