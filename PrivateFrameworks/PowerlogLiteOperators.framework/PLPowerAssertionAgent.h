//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class NSMutableArray, NSMutableDictionary, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, PLNSTimerOperatorComposition;

@interface PLPowerAssertionAgent : PLAgent
{
    BOOL _assertionBufferFullNotificationActive;
    BOOL _firstBufferDrain;
    PLCFNotificationOperatorComposition *_assertionNotification;
    PLCFNotificationOperatorComposition *_assertionBufferFullNotification;
    PLNSTimerOperatorComposition *_assertionBufferFullNotificationRearmTimer;
    NSMutableArray *_assertionBufferNotificationTracking;
    PLEntryNotificationOperatorComposition *_batteryLevelNotificiations;
    PLEntryNotificationOperatorComposition *_wakeNotification;
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    PLNSTimerOperatorComposition *_runQueryTimer;
    PLNSTimerOperatorComposition *_assertionSnapShotTimer;
    NSMutableDictionary *_assertionAggregatedLastSample;
}

+ (id)entryEventIntervalDefinitionAssertion;
+ (id)entryEventPointDefinitionAggregateReset;
+ (id)entryEventPointDefinitionBufferStatus;
+ (id)entryEventPointDefinitionSnapshotReason;
+ (id)entryEventPointDefinitionSnapshot;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (id)defaults;
+ (void)load;
@property(retain) PLNSTimerOperatorComposition *runQueryTimer; // @synthesize runQueryTimer=_runQueryTimer;
@property(retain) PLEntryNotificationOperatorComposition *canSleepNotification; // @synthesize canSleepNotification=_canSleepNotification;
@property(retain) PLEntryNotificationOperatorComposition *wakeNotification; // @synthesize wakeNotification=_wakeNotification;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelNotificiations; // @synthesize batteryLevelNotificiations=_batteryLevelNotificiations;
@property(retain) NSMutableArray *assertionBufferNotificationTracking; // @synthesize assertionBufferNotificationTracking=_assertionBufferNotificationTracking;
@property(retain) PLNSTimerOperatorComposition *assertionBufferFullNotificationRearmTimer; // @synthesize assertionBufferFullNotificationRearmTimer=_assertionBufferFullNotificationRearmTimer;
@property(retain) PLCFNotificationOperatorComposition *assertionNotification; // @synthesize assertionNotification=_assertionNotification;
- (id)bundleIDForAssertionProcessPID:(int)arg1;
- (void)logEventPointSnapshot;
@property(nonatomic) BOOL assertionSnapshotTimerActive;
@property BOOL firstBufferDrain; // @synthesize firstBufferDrain=_firstBufferDrain;
- (void)sanitizeAssertionNameForEntry:(id)arg1;
- (void)logEventIntervalAssertion;
@property(retain, nonatomic) NSMutableDictionary *assertionAggregatedLastSample; // @synthesize assertionAggregatedLastSample=_assertionAggregatedLastSample;
- (void)logEventPointAggregateResetWithReason:(short)arg1 withPidCount:(int)arg2;
@property(retain) PLNSTimerOperatorComposition *assertionSnapShotTimer; // @synthesize assertionSnapShotTimer=_assertionSnapShotTimer;
- (void)logEventPointSnapshotWithReason:(id)arg1;
@property(retain) PLCFNotificationOperatorComposition *assertionBufferFullNotification; // @synthesize assertionBufferFullNotification=_assertionBufferFullNotification;
@property(nonatomic) BOOL assertionBufferFullNotificationActive; // @synthesize assertionBufferFullNotificationActive=_assertionBufferFullNotificationActive;
- (void)logAggregatedAssertionActivity;
- (void)setAssertionBufferFullNotificationActive:(BOOL)arg1 withReason:(id)arg2;
- (void)checkAssertionBufferFullNotificationRate;
- (void)logEventIntervalAssertionWithReason:(id)arg1;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)arg1 withPidCount:(int)arg2;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)log;
- (id)init;

@end

