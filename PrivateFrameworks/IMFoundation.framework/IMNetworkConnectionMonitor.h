//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMFoundation/IMConnectionMonitor.h>

#import "IMReachabilityDelegate.h"
#import "IMSystemMonitorListener.h"

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>
{
    BOOL _isConnected;
    BOOL _isSleeping;
    IMReachability *_hostReachability;
    IMReachability *_ipReachability;
    unsigned int _hostFlags;
    unsigned int _ipFlags;
}

- (void)_setup;
- (void)systemWillSleep;
- (void)systemDidWake;
@property(nonatomic) BOOL _isSleeping; // @synthesize _isSleeping;
@property(nonatomic) BOOL _isConnected; // @synthesize _isConnected;
@property(nonatomic) unsigned int _ipFlags; // @synthesize _ipFlags;
@property(nonatomic) unsigned int _hostFlags; // @synthesize _hostFlags;
@property(retain, nonatomic) IMReachability *_ipReachability; // @synthesize _ipReachability;
@property(retain, nonatomic) IMReachability *_hostReachability; // @synthesize _hostReachability;
- (void)_networkManagedUpdated:(id)arg1;
- (void)_doCallbackLater;
- (void)_doCallbackNow;
- (void)_clearReachability:(id *)arg1 flags:(unsigned int *)arg2;
- (void)goDisconnected;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)reachabilityDidChange:(id)arg1;
- (BOOL)isImmediatelyReachable;
- (void)_setupReachability;
- (void)clear;
- (void)dealloc;

@end
