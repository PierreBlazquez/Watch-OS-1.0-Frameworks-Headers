//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKClientInterface.h"
#import "HKQueryDelegate.h"
#import "_HKActiveWorkoutLifecycleDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, NSXPCConnection, _HKHealthStoreProxy;

@interface HKHealthStore : NSObject <HKClientInterface, HKQueryDelegate, _HKActiveWorkoutLifecycleDelegate>
{
    NSXPCConnection *_connection;
    _HKHealthStoreProxy *_connectionProxy;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSMutableSet *_queries;
    NSMutableSet *_workouts;
    NSMutableDictionary *_discoveries;
    NSMutableSet *_discoveriesEnded;
    NSMutableDictionary *_sessions;
    NSMutableSet *_sessionsEnded;
    id <_HKAuthorizationPresentationController> _authorizationPresentationController;
    CDUnknownBlockType _authorizationDelegateTransactionErrorHandler;
    CDUnknownBlockType _bluetoothStatusHandler;
}

+ (BOOL)isHealthDataAvailable;
- (void)executeQuery:(id)arg1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStatusHandler; // @synthesize bluetoothStatusHandler=_bluetoothStatusHandler;
@property(readonly, nonatomic, getter=_queries) NSSet *queries; // @synthesize queries=_queries;
- (void)updateMedicalIDData:(id)arg1;
- (void)saveObjects:(id)arg1 usingSource:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)diagnosticsForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDatabaseUsageInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)previousHealthServicePairingsWithHandler:(CDUnknownBlockType)arg1;
- (id)activeHealthServiceSessions;
- (void)startHealthServiceSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)activeHealthServiceDiscoveries;
- (void)startAllHealthServicesDiscoveryWithHandler:(CDUnknownBlockType)arg1;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startBluetoothStatusUpdates:(CDUnknownBlockType)arg1;
- (void)getDefaultValueForKey:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_calculateBMRForDate:(id)arg1 useEndOfDay:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preferredUnitsForQuantityTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableAllBackgroundDeliveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableBackgroundDeliveryForType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)enableBackgroundDeliveryForType:(id)arg1 frequency:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_saveActiveWorkout:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_pauseAllActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginWorkoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 goalType:(unsigned int)arg3 goal:(id)arg4 metadata:(id)arg5 shouldUseDeviceData:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (BOOL)_setHeightCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (id)_heightCharacteristicQuantityWithError:(id *)arg1;
- (BOOL)_setLeanBodyMassCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (id)_leanBodyMassCharacteristicQuantityWithError:(id *)arg1;
- (BOOL)_setBodyMassCharacteristicQuantity:(id)arg1 error:(id *)arg2;
- (id)_bodyMassCharacteristicQuantityWithError:(id *)arg1;
- (BOOL)_setBloodType:(int)arg1 error:(id *)arg2;
- (id)bloodTypeWithError:(id *)arg1;
- (BOOL)_setBiologicalSex:(int)arg1 error:(id *)arg2;
- (id)biologicalSexWithError:(id *)arg1;
- (BOOL)_setDateOfBirth:(id)arg1 error:(id *)arg2;
- (id)dateOfBirthWithError:(id *)arg1;
- (void)stopQuery:(id)arg1;
- (void)deleteObject:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 sourceHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (int)authorizationStatusForType:(id)arg1;
- (void)closeTransactionForType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 query:(id)arg4;
- (void)queryDidFinishExecuting:(id)arg1;
- (void)unitPreferencesDidUpdate;
- (void)deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned int)arg3 withError:(id)arg4;
- (void)deliverSessionTransitoryData:(id)arg1 toClient:(unsigned int)arg2 withError:(id)arg3;
- (void)deliverBluetoothStatus:(int)arg1 withError:(id)arg2;
- (void)presentAuthorizationWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerKeepAliveWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateActivityAlertSuppressionForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suppressActivityAlertsForBundleIdentifier:(id)arg1 reason:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMedicalIDDataCreateIfNecessary:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)createBluetoothSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopRecordingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)startRecordingDataToFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopReplayingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)startReplayingDataFromFile:(id)arg1 repeat:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopFakingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)startFakingDataWithActivity:(int)arg1 speed:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithActionCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithObjectCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)deliverSessionHealthServiceStatus:(int)arg1 toClient:(unsigned int)arg2 finished:(BOOL)arg3 withError:(id)arg4;
- (void)deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned int)arg2 finished:(BOOL)arg3 withError:(id)arg4;
- (void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)healthServicePairingsWithHandler:(CDUnknownBlockType)arg1;
- (void)endHealthServiceSession:(id)arg1;
- (void)_addEndedSession:(id)arg1;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)_addEndedDiscovery:(id)arg1;
- (void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)endBluetoothStatusUpdates;
- (void)removeDefaultForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_mostRecentQuantityOfType:(id)arg1 beforeDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_currentValueForQuantityTypeCode:(int)arg1 characteristicTypeCode:(int)arg2 beforeDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setBackgroundDeliveryFrequencyDataType:(id)arg1 frequency:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_closeTransactionWithType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3;
- (void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveObject:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_reattachWorkout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_setCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id *)arg3;
- (id)_characteristicForDataType:(id)arg1 error:(id *)arg2;
- (void)_deleteObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveObjects:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endAuthorizationDelegateTransactionWithError:(id)arg1;
- (void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg1;
- (void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allAuthorizationRecordsForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_throwIfAuthorizationDisallowedForSharing:(BOOL)arg1 types:(id)arg2;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hkTypesForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentlyPairedWatchIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)setOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)orderedSourcesForObjectType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hasSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_serverProxyForSelector:(SEL)arg1 sanitizedErrorHandler:(CDUnknownBlockType)arg2;
- (void)_handleInterruption;
- (id)initWithListenerEndpoint:(id)arg1 identifier:(id)arg2;
- (void)workoutDidComplete:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (void)fetchMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteMedicalIDData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

