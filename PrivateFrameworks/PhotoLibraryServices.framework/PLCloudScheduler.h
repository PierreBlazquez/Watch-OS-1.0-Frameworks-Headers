//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLCloudScenarioConsumer.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString;

@interface PLCloudScheduler : NSObject <PLCloudScenarioConsumer>
{
    NSObject<OS_dispatch_queue> *_backlogSync;
    NSObject<OS_dispatch_queue> *_operationsQueue;
    int _concurrencyLevel;
    NSMutableOrderedSet *_pendingOperations;
    NSMutableDictionary *_pendingScenarios;
}

- (unsigned int)operationsBacklogLimit;
- (id)initWithConfiguration:(id)arg1;
- (void)runNextOperation;
- (void)completeOperation:(id)arg1 withError:(id)arg2;
- (void)reporioritizeBacklogOperations;
- (void)consumeScenario:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

