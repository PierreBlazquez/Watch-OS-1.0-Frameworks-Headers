//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKTravelAdvisor, EKTravelEngineThrottle, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, PCPersistentTimer;

@interface EKTravelEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_travelEngineQueue;
    NSObject<OS_dispatch_source> *_syncYieldTimer;
    PCPersistentTimer *_periodicRefreshTimer;
    BOOL _running;
    BOOL _needsRefresh;
    BOOL _databaseIsEncryptedAndUnreadable;
    BOOL _yieldingToSync;
    NSMutableDictionary *_eventExternalURLsToAgendaEntries;
    EKTravelEngineThrottle *_throttle;
    EKTravelAdvisor *_travelAdvisor;
    CDUnknownBlockType _adviceBlock;
}

+ (BOOL)hasTravelEligibleEvents:(id)arg1;
+ (int)_geoTransportTypeForCalLocationRoutingMode:(int)arg1;
+ (id)_engineIdentifier;
- (void)stop;
- (void)start;
- (id)init;
- (void)dealloc;
- (void)_mobileKeyBagLockStatusNotificationReceived;
- (void)_significantTimeChangeNotificationReceived;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_calDatabaseChangedNotificationReceived;
- (void)ceaseMonitoringAgendaItemForEventWithExternalURL:(id)arg1;
- (void)_trimAgendaEntriesBeforeDate:(id)arg1 andAfterDate:(id)arg2;
- (void)_locationAuthorizationChanged:(int)arg1;
- (void)_periodicRefreshTimerFired:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType adviceBlock; // @synthesize adviceBlock=_adviceBlock;
- (void)_installSyncYieldTimer;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_refreshIfNeeded;
- (void)_installPeriodicRefreshTimer;
- (void)_registerForNotificationObservation;
- (void)_uninstallSyncYieldTimer;
- (void)_unregisterForNotificationObservation;
- (void)_unregisterAllAgendaItems;
- (BOOL)_isProtectedDataAvailable;
- (void)_receivedTravelAdvice:(id)arg1 forEventWithExternalURL:(id)arg2;

@end

