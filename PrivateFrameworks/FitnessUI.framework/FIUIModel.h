//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIUIAchievementsModelDelegate.h"

@class FIUIAchievementsModel, FIUIWeeklyGoalModel, HKActivityCache, HKCurrentActivityCacheQuery, HKHealthStore, NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSPredicate, NSString;

@interface FIUIModel : NSObject <FIUIAchievementsModelDelegate>
{
    HKHealthStore *_healthStore;
    FIUIWeeklyGoalModel *_weeklyGoalModel;
    FIUIAchievementsModel *_achievementsModel;
    NSHashTable *_observers;
    NSMutableDictionary *_currentActivityQueryClients;
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;
    int _queue_activityCacheQueryRetries;
    HKActivityCache *_queue_currentActivityCacheForClients;
    NSObject<OS_dispatch_queue> *_activityCacheQueryClientQueue;
    NSPredicate *_sourcesPredicate;
    NSObject<OS_dispatch_queue> *_sourcesQueue;
}

+ (id)calorieUnit;
+ (id)activeAndIdleAndGoalHoursSampleQueryForDate:(id)arg1 predicate:(id)arg2 needsHourlyChartInfo:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (id)activeAndIdleHoursObserverQueryForDate:(id)arg1 predicate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (id)statisticsCollectionQueryFromDate:(id)arg1 toDate:(id)arg2 intervalSize:(id)arg3 dataType:(id)arg4 predicate:(id)arg5 sendUpdates:(BOOL)arg6 handler:(CDUnknownBlockType)arg7;
+ (id)statisticsCollectionQueryForDate:(id)arg1 intervalSize:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)stepQuantityType;
+ (id)stepUnit;
+ (id)distanceQuantityType;
+ (id)distanceUnit;
+ (void)_fakeActiveAndGoalHoursDataWithCompletion:(CDUnknownBlockType)arg1;
+ (id)activeAndIdleAndGoalHoursSampleQueryFromDate:(id)arg1 toDate:(id)arg2 predicate:(id)arg3 needsHourlyChartInfo:(BOOL)arg4 withCompletion:(CDUnknownBlockType)arg5;
+ (id)activeAndIdleHoursObserverQueryFromDate:(id)arg1 toDate:(id)arg2 predicate:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (id)_fakeCollectionForUnit:(id)arg1;
+ (id)_unitForDataType:(id)arg1;
+ (id)_statisticsCollectionQueryFromDate:(id)arg1 toDate:(id)arg2 intervalSize:(id)arg3 dataType:(id)arg4 predicate:(id)arg5 sendUpdates:(BOOL)arg6 handler:(CDUnknownBlockType)arg7;
+ (id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)activeHourUnit;
+ (id)activeHourQuantityType;
+ (id)briskActivityUnit;
+ (id)briskActivityQuantityType;
+ (id)calorieQuantityType;
- (void)stopCurrentActivityCacheQueryForClientToken:(id)arg1;
- (id)startCurrentActivityCacheQueryWithHandler:(CDUnknownBlockType)arg1;
- (void)executeQuery:(id)arg1;
- (void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
@property(readonly, nonatomic) FIUIAchievementsModel *achievementsModel;
- (void)_printUpdatedStatistics:(id)arg1;
- (void)_printStatisticsCollection:(id)arg1;
@property(readonly, nonatomic) FIUIWeeklyGoalModel *weeklyGoalModel;
@property(readonly, nonatomic) double arcPercentPerHour;
@property(readonly, nonatomic) NSPredicate *sourcesPredicate;
- (void)achievementsDidChangeInModel:(id)arg1;
- (void)_queue_restartCurrentActivityCacheQueryAfterError;
- (id)_createCurrentActivityCacheQuery;
- (void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2;
- (void)_setKnownSources:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)addObserver:(id)arg1;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)stopQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

