//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBBundleInfo.h>

@class LSApplicationProxy, NSMutableSet, NSObject<OS_dispatch_queue>, NSProgress;

@interface FBApplicationPlaceholder : FBBundleInfo
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_isNewsstand;
    BOOL _queue_isRestricted;
    BOOL _queue_installType;
    double _queue_cachedPercentComplete;
    NSProgress *_queue_progress;
    NSMutableSet *_queue_observers;
}

@property(readonly, nonatomic, getter=isNewsstand) BOOL newsstand;
@property(readonly, nonatomic, getter=isRestricted) BOOL restricted;
- (id)_iconDictionary;
- (void)_sendToObserversPlaceholderDidChangeSignificantly:(id)arg1;
- (void)_sendToObserversPausabilityDidChange:(id)arg1;
- (void)_sendToObserversCancellabilityDidChange:(id)arg1;
- (void)_sendToObserversPercentCompleteDidChange:(id)arg1;
- (void)_sendToObserversInstallPhaseDidChange:(id)arg1;
- (void)_sendToObserversInstallStateDidChange:(id)arg1;
- (id)_queue_observers;
- (void)_queue_progressChanged;
- (void)_dispatchToObservers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_queue_stopObservingProgress:(id)arg1;
- (void)_queue_startObservingProgress:(id)arg1;
- (double)_normalizedProgress:(double)arg1;
- (BOOL)_queue_setProgress:(id)arg1;
- (void)_setProxy:(id)arg1 force:(BOOL)arg2;
@property(retain, nonatomic, getter=_proxy, setter=_setProxy:) LSApplicationProxy *proxy;
- (void)_noteChangedSignificantly;
- (id)initWithApplicationProxy:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resume;
- (void)removeObserver:(id)arg1;
@property(readonly, nonatomic) double percentComplete;
- (id)description;
- (void)dealloc;
- (void)cancel;
@property(readonly, nonatomic) unsigned int installPhase;
@property(readonly, nonatomic) unsigned int installType;
@property(readonly, nonatomic) unsigned int installState;
@property(readonly, nonatomic, getter=isPausable) BOOL pausable;
@property(readonly, nonatomic, getter=isCancellable) BOOL cancellable;
- (void)prioritize;

@end

