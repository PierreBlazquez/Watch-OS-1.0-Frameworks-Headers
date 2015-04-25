//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CMCatherineFeederInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;
- (void)_startDaemonConnection;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;

@end
