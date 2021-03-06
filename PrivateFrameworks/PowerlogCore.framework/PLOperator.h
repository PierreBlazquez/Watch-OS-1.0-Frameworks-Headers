//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PLCoreAccountingGroup, PLCoreRail, PLCoreStorage, PLNSTimerOperatorComposition;

@interface PLOperator : NSObject
{
    NSMutableDictionary *_localCache;
    NSMutableDictionary *_filterDefinitions;
    NSMutableDictionary *_filterDeltaLastEntryIDs;
    NSMutableArray *_bufferedEntries;
    PLNSTimerOperatorComposition *_triggerBufferFlush;
    NSMutableDictionary *_lastLogDateForEntryKey;
}

+ (BOOL)isDebugEnabledForKey:(id)arg1;
+ (id)entryKeys;
+ (id)entryAggregateDefinitions;
+ (BOOL)isDebugEnabled;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (id)entryKeyForType:(id)arg1 andName:(id)arg2;
+ (BOOL)fullMode;
+ (id)trimConditionsForEntryKey:(id)arg1 trimDate:(id)arg2 count:(id)arg3;
+ (id)trimConditionsForEntryKey:(id)arg1 trimDate:(id)arg2 duration:(id)arg3;
+ (void)setDebugEnabled:(BOOL)arg1 forKey:(id)arg2;
+ (id)entryDefinitions;
+ (id)entryKeyForType:(id)arg1 andName:(id)arg2 isDynamic:(BOOL)arg3;
+ (id)operator;
+ (id)defaults;
+ (void)setDebugEnabled:(BOOL)arg1;
+ (void)load;
+ (id)className;
+ (BOOL)isEnabled;
+ (void)setEnabled:(BOOL)arg1;
@property(retain) NSMutableDictionary *localCache; // @synthesize localCache=_localCache;
- (BOOL)isDebugEnabledForKey:(id)arg1;
- (id)entryKeys;
- (void)logFromCFCallback:(id)arg1;
- (double)timeIntervalSinceLastLogForEntryKey:(id)arg1;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (void)logEntries:(id)arg1 withGroupID:(id)arg2;
- (void)updateEntry:(id)arg1;
- (long)defaultLongForKey:(id)arg1;
- (BOOL)defaultBoolForKey:(id)arg1;
- (BOOL)isDebugEnabled;
- (double)defaultDoubleForKey:(id)arg1;
- (void)initOperatorDependancies;
- (void)logEntry:(id)arg1;
@property(retain) NSMutableDictionary *lastLogDateForEntryKey; // @synthesize lastLogDateForEntryKey=_lastLogDateForEntryKey;
@property(readonly) __weak PLCoreAccountingGroup *accountingGroups;
@property(readonly) __weak PLCoreRail *rails;
- (void)setupFilterRequest:(id)arg1;
- (void)logRequestNotification:(id)arg1;
@property(retain) NSMutableDictionary *filterDeltaLastEntryIDs; // @synthesize filterDeltaLastEntryIDs=_filterDeltaLastEntryIDs;
- (BOOL)postFilteredNotificationForEntry:(id)arg1 withFilteredDefition:(id)arg2 withNotificationName:(id)arg3;
@property(retain) NSMutableDictionary *filterDefinitions; // @synthesize filterDefinitions=_filterDefinitions;
- (void)postEntries:(id)arg1 withGroupID:(id)arg2;
- (void)postEntries:(id)arg1;
- (void)enableBufferFlushTimer:(unsigned int)arg1;
- (BOOL)shouldWriteEntry:(id)arg1 withDebug:(BOOL)arg2;
- (void)flushBuffer;
@property(retain) PLNSTimerOperatorComposition *triggerBufferFlush; // @synthesize triggerBufferFlush=_triggerBufferFlush;
@property(retain) NSMutableArray *bufferedEntries; // @synthesize bufferedEntries=_bufferedEntries;
- (void)setDebugEnabled:(BOOL)arg1 forKey:(id)arg2;
- (id)defaultObjectForKey:(id)arg1;
- (void)subscribeNotificationsForEntries;
- (id)entryDefinitions;
@property(readonly) __weak NSObject<OS_dispatch_queue> *storageQueue;
- (id)tablesToTrimConditionsForTrimDate:(id)arg1;
- (void)maintainAggregateStorage;
- (void)setDebugEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@property(readonly) __weak NSString *className;
- (void)log;
- (id)init;
- (void)dealloc;
@property(readonly) __weak PLCoreStorage *storage;
@property(readonly) __weak NSObject<OS_dispatch_queue> *workQueue;

@end

