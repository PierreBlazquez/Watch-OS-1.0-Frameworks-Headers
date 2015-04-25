//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIUIModelObserver.h"

@class FIUIClientToken, FIUIModel, NSMutableDictionary, NSString, NTKWellnessDataCache;

@interface NTKWellnessDataBroker : NSObject <FIUIModelObserver>
{
    NSMutableDictionary *_subscribers;
    unsigned int _nextSubscriberCounter;
    BOOL _remoteDataActive;
    FIUIModel *_fitnessUIModel;
    FIUIClientToken *_modelClientToken;
    NTKWellnessDataCache *_wellnessDataCache;
}

+ (id)sharedInstance;
- (void)synchronousQueryCachedDataForToken:(struct NSNumber *)arg1;
- (void)removeSubscriberForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)addSubscriber:(id)arg1;
- (void)_broadcastCachedDataToAllSubscribers;
- (void)_updateActiveHoursWithActivityCache:(id)arg1;
- (void)_updateBriskMinutesWithActivityCache:(id)arg1;
- (void)_updateCaloriesWithActivityCache:(id)arg1;
- (void)_updateMetaStateWithActivityCache:(id)arg1;
- (void)_processFreshActivityCache:(id)arg1;
- (void)_stopQueries;
- (void)_startQueries;
- (void)_broadcastCachedDataToSubscriber:(id)arg1;
- (void)_updateServiceRegistration;
- (void)_handleTimeChange;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

