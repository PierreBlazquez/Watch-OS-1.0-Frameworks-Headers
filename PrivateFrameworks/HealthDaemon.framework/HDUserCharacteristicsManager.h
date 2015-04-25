//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDataObserver.h"
#import "HDDatabaseProtectedDataObserver.h"
#import "HDDiagnosticObject.h"
#import "HDHealthDaemonReadyObserver.h"

@class NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject>
{
    BOOL _shouldUpdateQuantityCharacteristics;
    BOOL _shouldUpdateUserProfile;
    BOOL _needsUpdateAfterUnlock;
    id <HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
}

@property(nonatomic) BOOL needsUpdateAfterUnlock; // @synthesize needsUpdateAfterUnlock=_needsUpdateAfterUnlock;
@property(copy, nonatomic) NSDictionary *lastUserProfile; // @synthesize lastUserProfile=_lastUserProfile;
@property(retain, nonatomic) NSDate *userProfileLastUpdated; // @synthesize userProfileLastUpdated=_userProfileLastUpdated;
@property(readonly, nonatomic) BOOL shouldUpdateUserProfile; // @synthesize shouldUpdateUserProfile=_shouldUpdateUserProfile;
@property(readonly, nonatomic) BOOL shouldUpdateQuantityCharacteristics; // @synthesize shouldUpdateQuantityCharacteristics=_shouldUpdateQuantityCharacteristics;
- (BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id *)arg3;
- (void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
- (id)_mostRecentSampleOfType:(id)arg1 error:(id *)arg2;
- (id)userCharacteristicForType:(id)arg1 error:(id *)arg2;
- (void)_queue_updateUserProfile;
- (void)_queue_updateQuantityCharacteristics;
- (void)_updateQuantityCharacteristicsAndUserProfile;
- (void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(BOOL)arg1 shouldSync:(BOOL)arg2;
- (BOOL)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(BOOL)arg3 error:(id *)arg4;
- (id)_userCharacteristicForType:(id)arg1 entity:(id *)arg2 error:(id *)arg3;
- (id)initWithHealthDaemon:(id)arg1;
@property(nonatomic) __weak id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
- (void)samplesOfTypeWereRemoved:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (id)diagnosticDescription;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

