//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKGizmoXPCInterface.h"
#import "MKLocationProvider.h"
#import "MKLocationProviderDelegate.h"

@class CLLocation, MKCoreLocationProvider, NSBundle, NSString, NSXPCConnection;

@interface MKCompanionLocationProvider : NSObject <MKGizmoXPCInterface, MKLocationProviderDelegate, MKLocationProvider>
{
    NSXPCConnection *_connection;
    MKCoreLocationProvider *_coreLocationProvider;
    BOOL _updatingLocation;
    CLLocation *_lastLocalLocation;
    CLLocation *_lastCompanionLocation;
    BOOL _companionUpdatesPaused;
    BOOL _localUpdatesPaused;
    int _inTetheredDemoMode;
    id <NSObject> _tetheredDemoNotificationToken;
    BOOL _waitingForAuthorization;
    BOOL _locationServicesPreferencesDialogEnabled;
    id <MKLocationProviderDelegate> _delegate;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    int _headingOrientation;
    CDUnknownBlockType _authorizationRequestBlock;
    int _activityType;
    double _desiredAccuracy;
    double _distanceFilter;
}

@property(nonatomic) int headingOrientation; // @synthesize headingOrientation=_headingOrientation;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(nonatomic) double distanceFilter; // @synthesize distanceFilter=_distanceFilter;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)requestWhenInUseAuthorization;
@property(readonly, nonatomic) int authorizationStatus;
- (void).cxx_destruct;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSBundle *effectiveBundle; // @synthesize effectiveBundle=_effectiveBundle;
@property(nonatomic) __weak id <MKLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)setTransitGuidanceModeEnabled:(BOOL)arg1;
- (BOOL)transitGuidanceModeEnabled;
- (void)stopUpdatingTransitLocation;
- (void)startUpdatingTransitLocation;
- (BOOL)isMonitoringRegionsAvailable;
- (void)stopMonitoringRegion:(id)arg1;
- (void)startMonitoringRegion:(id)arg1;
- (BOOL)_companionLocationShouldSupersedeLocalLocation;
- (void)_stopUpdatingLocationFromCompanion;
- (void)_startUpdatingLocationFromCompanion;
- (void)didResumeLocationUpdates;
- (void)didPauseLocationUpdates;
- (void)failedToUpdateLocation:(id)arg1;
- (void)updatedLocation:(id)arg1;
- (void)_updateTetheredDemoMode;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
@property(readonly, nonatomic) BOOL isTracePlayer;
@property(readonly, nonatomic) BOOL isSimulation;
@property(readonly, nonatomic) BOOL usesCLMapCorrection;
@property(readonly, nonatomic) BOOL airplaneModeBlocksLocation;
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock; // @synthesize authorizationRequestBlock=_authorizationRequestBlock;
@property(nonatomic) BOOL matchInfoEnabled;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier; // @synthesize effectiveBundleIdentifier=_effectiveBundleIdentifier;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled; // @synthesize locationServicesPreferencesDialogEnabled=_locationServicesPreferencesDialogEnabled;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)dismissHeadingCalibrationDisplay;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

