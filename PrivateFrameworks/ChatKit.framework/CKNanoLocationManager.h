//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "IMLocationManager.h"

@class CLLocation, CLLocationManager, IDSService, NSError, NSString, NSXPCConnection;

@interface CKNanoLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager>
{
    CLLocation *_location;
    NSError *_error;
    NSXPCConnection *_connection;
    IDSService *_idsService;
    CLLocationManager *_locationManager;
    BOOL _waitingForAuthorization;
    BOOL _firstRequest;
}

+ (id)sharedInstance;
@property(readonly, retain, nonatomic) NSError *error;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)startUpdatingCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)debugPrintDescriptionOfCurrentAuthorizationStatus;
- (BOOL)isDefaultPairedDeviceNearby;
@property(readonly, nonatomic) BOOL locationAuthorizationDenied;
- (void)requestAuthorizationIfNecessary;
- (void)showLocationSharingUnavailableAlert;
- (BOOL)canShareLocation;
@property(readonly, retain, nonatomic) CLLocation *location;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

