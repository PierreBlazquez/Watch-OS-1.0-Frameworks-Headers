//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class NSArray, NSMutableArray;

@interface HKSampleQuery : HKQuery
{
    unsigned int _limit;
    NSArray *_sortDescriptors;
    NSMutableArray *_results;
    CDUnknownBlockType _resultHandler;
}

+ (Class)_queryServerDataObjectClass;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *sortDescriptors;
@property(readonly, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void)deliverResultsBatch:(id)arg1 final:(BOOL)arg2 error:(id)arg3 forQuery:(id)arg4;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
@property(readonly) unsigned int limit;

@end

