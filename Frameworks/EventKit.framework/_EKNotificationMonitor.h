//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventStore, NSArray, NSDate, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSTimer, PCPersistentTimer;

@interface _EKNotificationMonitor : NSObject
{
    EKEventStore *_eventStore;
    CDUnknownBlockType _eventStoreGetter;
    BOOL _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    unsigned int _lastEventCount;
    unsigned int _lastReminderCount;
    NSArray *_eventNotificationReferences;
    NSArray *_reminderNotificationReferences;
    NSMutableArray *_recentlyRepliedNotifications;
    NSMutableArray *_culledRecentlyRepliedNotifications;
    BOOL _initialCheck;
    BOOL _shouldInstallPersistentTimer;
    BOOL _useSyncIdleTimer;
    BOOL _loadRecentlyRepliedNotifications;
    BOOL _handlesOnlyEvents;
    NSMutableSet *_alertedNotificationsThatFailedToMarkAlerted;
}

- (void)_timerFired;
- (void)stop;
- (void)start;
- (id)init;
- (void)dealloc;
- (void)_alertPrefChanged;
- (void)_notificationCountChangedExternally;
@property(readonly, nonatomic) NSArray *reminderNotificationReferences;
@property(readonly, nonatomic) NSArray *eventNotificationReferences;
@property(readonly, nonatomic) NSArray *notificationReferences;
@property(readonly, nonatomic) unsigned int notificationCount;
@property(readonly, nonatomic) unsigned int eventNotificationCount;
- (id)initByHandlingOnlyEvents:(BOOL)arg1 eventStore:(id)arg2;
- (id)initByHandlingOnlyEvents:(BOOL)arg1 bulletinBoardWithEventStoreGetter:(CDUnknownBlockType)arg2;
- (void)adjust;
- (void)_notifyForUnalertedNotifications:(id)arg1;
- (unsigned int)_checkForReminderNotifications:(id)arg1;
- (unsigned int)_checkForEventNotifications:(id)arg1;
- (id)_eventStore;
- (void)attemptReloadSynchronously:(BOOL)arg1;
- (void)killTimer;
- (void)attemptReload;
- (void)_resetTimer;
- (void)_syncDidStart;
- (void)_databaseChanged;
- (void)_resetSyncTimer;
- (void)_syncDidEnd;
- (void)_syncTimerFired:(id)arg1;
- (void)_killSyncTimer;

@end

