//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "EKTravelAdvisorWorld.h"

@class CLLocation, CLLocationManager, EKTravelAgendaItem, NSBundle, NSObject<OS_dispatch_queue>, NSString, PCPersistentTimer;

@interface EKTravelAdvisorRealWorld : NSObject <EKTravelAdvisorWorld, CLLocationManagerDelegate>
{
    CLLocationManager *_geofenceLocationManager;
    CLLocationManager *_pollingLocationManager;
    BOOL _geofenceUsingSignificantLocationUpdates;
    PCPersistentTimer *_persistentTimer;
    CDUnknownBlockType _geofenceHandler;
    CDUnknownBlockType _locationHandler;
    CDUnknownBlockType _alarmHandler;
    CDUnknownBlockType _locationAuthorizationHandler;
    CLLocation *_geofenceInitialLocation;
    CLLocation *_locationInitialLocation;
    NSBundle *_locationBundle;
    NSObject<OS_dispatch_queue> *_queue;
    EKTravelAgendaItem *_agendaItem;
}

+ (id)_persistentTimerIdentifier;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)dealloc;
- (void)comeOutOfHibernation;
- (void)getCurrentLocationWithAccuracy:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)mostRecentLocationSeen;
- (void)setGeofenceWithRadius:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)setAlarmIn:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)setLocationAuthorizationChangeCallback:(CDUnknownBlockType)arg1;
- (void)disableGeofence;
- (void)alarmFired:(id)arg1;
- (void)disableAlarm;
- (void)goIntoHibernation;
- (BOOL)authorizedToAcquireLocation;
@property(nonatomic) EKTravelAgendaItem *agendaItem; // @synthesize agendaItem=_agendaItem;
- (id)now;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

