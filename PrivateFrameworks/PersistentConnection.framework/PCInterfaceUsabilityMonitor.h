//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PCInterfaceUsabilityMonitorProtocol.h"

@class CUTWeakReference, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    int _interfaceIdentifier;
    NSString *_interfaceName;
    CUTWeakReference *_delegateReference;
    void *_reachability;
    BOOL _isInternetReachable;
    void *_dynamicStore;
    struct __CFRunLoopSource *_linkQualitySource;
    struct __CFString *_lqKey;
    int _linkQuality;
    BOOL _trackUsability;
    unsigned int _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSMutableArray *_offTransitions;
}

+ (BOOL)isBadLinkQuality:(int)arg1;
+ (BOOL)isPoorLinkQuality:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;
@property(readonly, nonatomic) int interfaceIdentifier;
@property(readonly, nonatomic) int linkQuality;
- (void)_createLinkQualityMonitor;
- (void)_reachabilityCallback:(unsigned int)arg1;
- (void)_createReachabilityMonitor;
- (id)initWithInterfaceName:(id)arg1 interfaceIdentifier:(int)arg2 delegateQueue:(id)arg3;
@property(readonly, nonatomic) BOOL isRadioHot;
- (void)setTrackUsability:(BOOL)arg1;
- (void)setThresholdOffTransitionCount:(unsigned int)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)_dynamicStoreCallback:(id)arg1;
- (void)_dynamicStoreCallbackOnIvarQueue:(id)arg1;
- (void)_processLinkQualityUpdateOnIvarQueueWithUpdatedLinkQuality:(int)arg1;
- (void)_updateOffTransitionsForLinkQualityChangeOnIvarQueue;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_reachabilityCallbackOnIvarQueue:(unsigned int)arg1;
- (BOOL)_isInterfaceHistoricallyUsableOnIvarQueue;
- (BOOL)_isInterfaceUsableOnIvarQueue;
- (void)_flushStaleTransitionsOnIvarQueue;
- (void)_unscheduleReachabilityMonitorOnIvarQueue;
- (void)_unscheduleLinkQualityMonitorOnIvarQueue;
- (void)_createReachabilityMonitorOnIvarQueue;
- (void)_createLinkQualityMonitorOnIvarQueue;
@property(readonly, nonatomic) BOOL isBadLinkQuality;
@property(readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) BOOL isPoorLinkQuality;
@property(readonly, nonatomic) BOOL isInterfaceUsable;
@property(readonly, nonatomic) BOOL isInternetReachable;
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) struct __CFString *currentRAT;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) BOOL isLTEWithCDRX;
@property(readonly) Class superclass;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;

@end

