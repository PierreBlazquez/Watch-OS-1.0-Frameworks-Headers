//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOGizmoXPCInterface.h"
#import "GEOResourceManifestTileGroupObserver.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, GEOGizmoXPCInterface>
{
    NSString *_countryCode;
    NSLock *_countryCodeLock;
    BOOL _isObservingReachability;
    BOOL _isUpdating;
    NSMutableArray *_updateCompletionHandlers;
    NSLock *_supportedFeaturesLock;
    NSMutableDictionary *_supportedFeatures;
    double _urlAuthenticationTimeToLive;
    BOOL _hasURLAuthenticationTimeToLive;
}

+ (id)sharedConfiguration;
- (void)_reachabilityChanged:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
@property(copy, nonatomic) NSString *countryCode;
- (void)updateProvidersForCurrentCountry;
- (id)countryDefaultForKey:(id)arg1;
@property(readonly, nonatomic) double urlAuthenticationTimeToLive;
@property(readonly, nonatomic) BOOL currentCountrySupportsCarIntegration;
@property(readonly, nonatomic) BOOL currentCountrySupportsRouteGenius;
@property(readonly, nonatomic) BOOL currentCountrySupportsDirections;
- (id)countryDefaultForKey:(id)arg1 sourcePtr:(int *)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(int *)arg3;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(int *)arg3;
- (void)_resetSupportedFeatures;
@property(readonly, nonatomic) BOOL currentCountrySupportsNavigation;
@property(readonly, nonatomic) BOOL currentCountrySupportsTraffic;
- (BOOL)currentCountrySupportsFeature:(int)arg1;
- (BOOL)countryCode:(id)arg1 supportsFeature:(int)arg2;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(int *)arg4;
- (void)_determineCurrentCountryCode:(CDUnknownBlockType)arg1;
- (void)_checkCountryProvidersWithOldCountryCode:(id)arg1 providers:(id)arg2;
- (void)_notifyUpdateCompletionHandlers:(BOOL)arg1;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1;
- (void)didChangePairedDeviceReachability:(BOOL)arg1;
- (void)didChangeActiveTileGroup:(id)arg1;
- (void)updateNavigationRouteStatus:(id)arg1;
- (void)updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

