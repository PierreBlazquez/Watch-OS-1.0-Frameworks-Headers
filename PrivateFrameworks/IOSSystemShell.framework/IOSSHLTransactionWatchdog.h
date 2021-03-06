//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSWatchdog.h"

@class BSTransaction;

@interface IOSSHLTransactionWatchdog : BSWatchdog
{
    BSTransaction *_transaction;
}

+ (void)initialize;
@property(readonly, nonatomic) BSTransaction *transaction; // @synthesize transaction=_transaction;
- (id)initWithTransaction:(id)arg1;
- (void)_watchdogTimerFired;
- (void)_dumpDebugInfo;
- (void).cxx_destruct;
- (void)invalidate;

// Remaining properties
@property(retain, nonatomic) id <IOSSHLTransactionWatchdogDelegate> delegate;

@end

