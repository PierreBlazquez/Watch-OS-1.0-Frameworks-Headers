//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface AFWatchdogTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
}

- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end

