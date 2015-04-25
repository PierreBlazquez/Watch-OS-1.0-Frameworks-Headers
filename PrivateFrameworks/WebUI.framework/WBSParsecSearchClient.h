//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSArray, NSMutableDictionary, NSNumber, NSString, NSThread, NSTimer, NSURL, NSURLQueryItem, NSURLSessionConfiguration, NSURLSessionTask, WBSParsecSearchMescalSession;

@interface WBSParsecSearchClient : NSObject <CLLocationManagerDelegate>
{
    NSURLSessionConfiguration *_urlSessionConfiguration;
    NSTimer *_updateTimer;
    NSString *_customFlight;
    NSString *_userAgent;
    BOOL _usesLedBelly;
    NSURLSessionTask *_bagFetchTask;
    NSMutableDictionary *_bagImageData;
    NSMutableDictionary *_bagImages;
    NSURL *_userGUIDURL;
    NSURL *_userGUIDFallbackURL;
    NSString *_userGUID;
    NSTimer *_userGUIDExpirationTimer;
    BOOL _userGUIDEnabled;
    CLLocationManager *_locationManager;
    NSArray *_supportedGeolocationServices;
    NSArray *_recentlyUsedAppIdentifierWhitelist;
    NSString *_recentlyUsedAppIdentifierListString;
    NSString *_storeFrontIdentifier;
    int ipChangeNotificationToken;
    NSString *_deviceIP;
    NSThread *_locationThread;
    BOOL _updatingLocation;
    BOOL _enabled;
    BOOL _safeModeEnabled;
    BOOL _feedbackEnabled;
    NSString *_applicationNameForUserAgent;
    NSArray *_supportedDomainIdentifiers;
    id <WBSParsecSearchClientStorage> _storage;
    NSNumber *_searchRenderTimeout;
    NSNumber *_otherRenderTimeout;
    CLLocation *_location;
    NSArray *_enabledDomains;
    NSString *_firstUseDescriptionText;
    NSString *_firstUseLearnMoreText;
    NSString *_firstUseLearnMoreURLString;
    NSURL *_searchURL;
    NSURL *_searchFallbackURL;
    NSURL *_feedbackURL;
    NSURL *_feedbackFallbackURL;
    NSArray *_optionalQueryItems;
    unsigned int _minimumQueryLength;
    unsigned int _maximumCachedResultsToSend;
    unsigned int _maximumCachedQueriesToSend;
    WBSParsecSearchMescalSession *_mescalSession;
    double _minimumIntervalBetweenQueriesFromBag;
}

@property(readonly, nonatomic) WBSParsecSearchMescalSession *mescalSession; // @synthesize mescalSession=_mescalSession;
@property(readonly, nonatomic) BOOL feedbackEnabled; // @synthesize feedbackEnabled=_feedbackEnabled;
@property(readonly, nonatomic) unsigned int maximumCachedQueriesToSend; // @synthesize maximumCachedQueriesToSend=_maximumCachedQueriesToSend;
@property(readonly, nonatomic) unsigned int maximumCachedResultsToSend; // @synthesize maximumCachedResultsToSend=_maximumCachedResultsToSend;
@property(readonly, nonatomic) unsigned int minimumQueryLength; // @synthesize minimumQueryLength=_minimumQueryLength;
@property(readonly, nonatomic) NSArray *optionalQueryItems; // @synthesize optionalQueryItems=_optionalQueryItems;
@property(readonly, nonatomic) NSURL *feedbackFallbackURL; // @synthesize feedbackFallbackURL=_feedbackFallbackURL;
@property(readonly, nonatomic) NSURL *feedbackURL; // @synthesize feedbackURL=_feedbackURL;
@property(readonly, nonatomic) NSURL *searchFallbackURL; // @synthesize searchFallbackURL=_searchFallbackURL;
@property(readonly, nonatomic) double minimumIntervalBetweenQueriesFromBag; // @synthesize minimumIntervalBetweenQueriesFromBag=_minimumIntervalBetweenQueriesFromBag;
@property(readonly, nonatomic) NSString *firstUseLearnMoreURLString; // @synthesize firstUseLearnMoreURLString=_firstUseLearnMoreURLString;
@property(readonly, nonatomic) NSString *firstUseLearnMoreText; // @synthesize firstUseLearnMoreText=_firstUseLearnMoreText;
@property(readonly, nonatomic) NSString *firstUseDescriptionText; // @synthesize firstUseDescriptionText=_firstUseDescriptionText;
@property(readonly, nonatomic) NSArray *enabledDomains; // @synthesize enabledDomains=_enabledDomains;
@property(readonly, nonatomic) NSNumber *otherRenderTimeout; // @synthesize otherRenderTimeout=_otherRenderTimeout;
@property(readonly, nonatomic) NSNumber *searchRenderTimeout; // @synthesize searchRenderTimeout=_searchRenderTimeout;
@property(nonatomic) BOOL safeModeEnabled; // @synthesize safeModeEnabled=_safeModeEnabled;
@property(copy, nonatomic) NSArray *supportedDomainIdentifiers; // @synthesize supportedDomainIdentifiers=_supportedDomainIdentifiers;
- (id)locationSource;
- (id)initWithStorage:(id)arg1 applicationNameForUserAgent:(id)arg2;
- (void)_setDeviceIP:(id)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)_locationThread;
- (void)_performBlockOnLocationThread:(CDUnknownBlockType)arg1 wait:(BOOL)arg2;
- (void)_userGUIDExpirationTimerDidFire:(id)arg1;
- (void)_configureMescalFromDictionary:(id)arg1;
- (void)_generateBagImagesFromDictionary:(id)arg1;
- (void)updateRecentlyUsedAppIdentifiers;
- (BOOL)_hasLocationServicesEffectiveBundleEntitlement;
- (void)_requestDeviceIP;
- (id)_customFlightQueryItem;
@property(readonly, nonatomic) NSURLQueryItem *secretKeyQueryItem;
- (id)_localeQueryItem;
- (void)updateURLSessionConfiguration;
- (void)_updateUserGUIDExpirationTimerWithDate:(id)arg1;
- (void)resetUserGUID;
- (id)_locationSourceForLocation:(id)arg1;
- (void)_performBlockOnLocationThread:(CDUnknownBlockType)arg1;
- (void)_fetchUserGUIDIfNeeded;
- (void)_setUserGUID:(id)arg1 expirationDate:(id)arg2;
- (void)_performBlockOnLocationThreadAndWait:(CDUnknownBlockType)arg1;
- (void)_updateOptionalQueryItems;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)_fetchConfiguration;
- (void)_storeFrontIdentifierDidChange:(id)arg1;
- (void)_updateStoreFrontIdentifier;
- (id)imageForIdentifier:(id)arg1 withScale:(float)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@property(readonly, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration; // @synthesize urlSessionConfiguration=_urlSessionConfiguration;
@property(readonly, nonatomic) NSURL *searchURL; // @synthesize searchURL=_searchURL;
@property(readonly, nonatomic) NSString *applicationNameForUserAgent; // @synthesize applicationNameForUserAgent=_applicationNameForUserAgent;
- (void).cxx_destruct;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void)invalidate;
@property(readonly, nonatomic) id <WBSParsecSearchClientStorage> storage; // @synthesize storage=_storage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

