//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFCompanionXPCManagerObserver.h"
#import "SFContinuityScannerClient.h"

@class NSHashTable, NSMutableArray, NSString;

@interface SFContinuityScanManager : NSObject <SFCompanionXPCManagerObserver, SFContinuityScannerClient>
{
    id <SFContinuityScannerProtocol> _connectionProxy;
    NSMutableArray *_queuedIdentifers;
    NSHashTable *_observers;
}

+ (id)sharedManager;
@property(retain) NSMutableArray *queuedIdentifers; // @synthesize queuedIdentifers=_queuedIdentifers;
- (void)lostDeviceWithDeviceIdentifier:(id)arg1;
- (void)foundDeviceWithDeviceIdentifier:(id)arg1;
- (void)receivedAdvertisement:(id)arg1;
- (void)activityPayloadFromDeviceIdentifier:(id)arg1 forAdvertisementPayload:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)xpcManagerConnectionInterrupted;
@property(retain) id <SFContinuityScannerProtocol> connectionProxy; // @synthesize connectionProxy=_connectionProxy;
- (void)addObserver:(id)arg1;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setupXPCConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
