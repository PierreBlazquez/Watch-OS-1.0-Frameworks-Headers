//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NRPairedDeviceRegistryXPCFrameworkDelegate.h"
#import "NSXPCConnectionDelegate.h"

@class NRFrameworkDevice, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID, NSXPCConnection;

@interface NRPairedDeviceRegistry : NSObject <NRPairedDeviceRegistryXPCFrameworkDelegate, NSXPCConnectionDelegate>
{
    BOOL _xpcConnectionInterrupted;
    BOOL _xpcConnectionInvalidated;
    BOOL _hasSomeEntitlements;
    unsigned short _compatibilityState;
    unsigned int _status;
    NSMutableArray *_devicesBlocks;
    NSMutableDictionary *_mutableDeviceDictionary;
    NSUUID *_pairingDeviceID;
    NRFrameworkDevice *_pairingDevice;
    NRFrameworkDevice *_pairedDevice;
    NSObject<OS_dispatch_queue> *_pdrQueue;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_queue> *_connectQueue;
    NSObject<OS_dispatch_queue> *_reconnectQueue;
    NSMutableArray *_finishedPairingSemaphores;
    NSXPCConnection *_xpcConnection;
    NSUUID *_clientUUID;
    int _pairingCompatibilityVersion;
    unsigned int _lastUnpairReason;
    double _reconnectDelay;
}

+ (id)sharedInstance;
- (BOOL)isPaired;
- (unsigned int)minorVersion;
- (unsigned int)majorVersion;
@property(nonatomic) int pairingCompatibilityVersion; // @synthesize pairingCompatibilityVersion=_pairingCompatibilityVersion;
@property(nonatomic) unsigned int lastUnpairReason; // @synthesize lastUnpairReason=_lastUnpairReason;
@property(nonatomic) unsigned short compatibilityState; // @synthesize compatibilityState=_compatibilityState;
@property(retain, nonatomic) NSUUID *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(nonatomic) BOOL hasSomeEntitlements; // @synthesize hasSomeEntitlements=_hasSomeEntitlements;
@property(retain, nonatomic) NSMutableArray *finishedPairingSemaphores; // @synthesize finishedPairingSemaphores=_finishedPairingSemaphores;
@property(nonatomic) BOOL xpcConnectionInvalidated; // @synthesize xpcConnectionInvalidated=_xpcConnectionInvalidated;
@property(nonatomic) BOOL xpcConnectionInterrupted; // @synthesize xpcConnectionInterrupted=_xpcConnectionInterrupted;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reconnectQueue; // @synthesize reconnectQueue=_reconnectQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectQueue; // @synthesize connectQueue=_connectQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *deviceQueue; // @synthesize deviceQueue=_deviceQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pdrQueue; // @synthesize pdrQueue=_pdrQueue;
@property(nonatomic) double reconnectDelay; // @synthesize reconnectDelay=_reconnectDelay;
@property(retain, nonatomic) NRFrameworkDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property(retain, nonatomic) NRFrameworkDevice *pairingDevice; // @synthesize pairingDevice=_pairingDevice;
@property(retain, nonatomic) NSUUID *pairingDeviceID; // @synthesize pairingDeviceID=_pairingDeviceID;
@property(retain, nonatomic) NSMutableDictionary *mutableDeviceDictionary; // @synthesize mutableDeviceDictionary=_mutableDeviceDictionary;
@property(retain, nonatomic) NSMutableArray *devicesBlocks; // @synthesize devicesBlocks=_devicesBlocks;
- (void)_addRemoveRecoveryStepIDSFinalize:(BOOL)arg1;
- (void)_addRemoveRecoveryStepObliterate:(BOOL)arg1 withStatePath:(id)arg2;
- (void)_addRemoveRecoveryStepResetNVRAM:(BOOL)arg1;
- (void)_addRemoveRecoveryStepICloudDeletePaymentCards:(BOOL)arg1;
- (void)_addRemoveRecoveryStepStockholmReset:(BOOL)arg1;
- (void)_addRemoveRecoveryStepIDSUnpair:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepUnpairBluetooth:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDeletePairingStore:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepRemoteUnpair:(BOOL)arg1 withAdvertisedName:(id)arg2 andPairedDeviceID:(id)arg3;
- (void)_addRemoveRecoveryStepIDSUnpairStart:(BOOL)arg1;
- (void)_addRemoveRecoveryStepDeleteAccounts:(BOOL)arg1;
- (void)_addRemoveRecoveryStepBackup:(BOOL)arg1 withPairingDeviceID:(id)arg2;
- (void)_addRemoveRecoveryStepDisableDaemons:(BOOL)arg1;
- (void)_setObliterationEnabled:(BOOL)arg1;
- (void)_triggerRecovery;
- (id)_recoveryDescription;
- (void)retriggerUnpairInfoDialog;
- (void)resumePairingClientCrashMonitoring;
- (void)suspendPairingClientCrashMonitoring;
- (void)abortPairingWithReason:(id)arg1;
- (void)abortPairing;
- (void)waitForPairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)companionPasscodePairWithDevice:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (id)getAllDevices;
- (void)getDevicesWithBlock:(CDUnknownBlockType)arg1;
- (void)sendDevicesUpdatedNotification;
- (void)_xpcFrameworkInitializationSuccessWithStatus:(unsigned int)arg1 andDevices:(id)arg2 andPairingDeviceID:(id)arg3 andPairingDevice:(id)arg4 hasEntitlements:(BOOL)arg5 andCompatibilityState:(unsigned short)arg6 andCompatibilityVersion:(int)arg7 andLastUnpairReason:(unsigned int)arg8;
- (void)xpcAssertInClient:(id)arg1;
- (void)xpcLastUnpairReasonDidChange:(unsigned int)arg1;
- (void)xpcDidReceiveBTPairingRequest:(id)arg1 deviceID:(id)arg2;
- (void)xpcCompatibilityStateDidChange:(unsigned short)arg1 withDevice:(id)arg2 andDeviceID:(id)arg3;
- (void)xpcRemoteUnpairingDidBegin;
- (void)xpcHasNewOOBKey:(id)arg1;
- (void)xpcDeviceNeedsActivation:(id)arg1 deviceID:(id)arg2;
- (void)xpcDevice:(id)arg1 deviceID:(id)arg2 needsPasscode:(id)arg3;
- (void)xpcStatusDidChange:(unsigned int)arg1;
- (void)xpcDidBeginPairing:(id)arg1 deviceID:(id)arg2;
- (void)xpcCreateDevice:(id)arg1 deviceID:(id)arg2;
- (void)xpcDeviceDidUnpair:(id)arg1 deviceID:(id)arg2;
- (void)xpcDeviceIDDidFailToPair:(id)arg1 error:(id)arg2;
- (void)xpcDeviceDidPair:(id)arg1 deviceID:(id)arg2;
- (void)xpcSetValue:(id)arg1 forProperty:(id)arg2 deviceID:(id)arg3;
- (void)_xpcInvalidationHandler;
- (void)_xpcInterruptionHandler;
- (void)_pairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)notifyStatus;
- (BOOL)_xpcEnsureFrameworkInitialized;
- (void)_xpcInitializeConnection;
- (id)getDevices;
- (id)getActivePairedDevice;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)pairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (id)pairingStorePath;
- (id)pairingID;
@property(readonly, nonatomic) unsigned int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

