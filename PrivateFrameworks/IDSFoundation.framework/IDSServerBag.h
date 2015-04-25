//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSRemoteURLConnection, IMConnectionMonitor, NSData, NSDate, NSDictionary, NSMutableURLRequest, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface IDSServerBag : NSObject
{
    BOOL _allowSelfSignedCertificates;
    BOOL _allowUnsignedBags;
    IMConnectionMonitor *_connectionMonitor;
    NSURL *_bagURL;
    NSString *_apsEnvironmentName;
    NSDictionary *_bag;
    NSDictionary *_cachedBag;
    NSMutableURLRequest *_urlRequest;
    IDSRemoteURLConnection *_remoteURLConnection;
    NSObject<OS_dispatch_queue> *_bagQueue;
    NSString *_cachedURLString;
    int _trustStatus;
    NSData *_certData;
    NSString *_cachedHash;
    NSDate *_loadDate;
    NSNumber *_cacheTime;
    int _token;
    unsigned long long _hasPairedDeviceState;
}

+ (id)_sharedInstance;
+ (id)_sharedInstanceForClass:(Class)arg1;
+ (id)_bagCreationLock;
+ (id)sharedInstanceForBagType:(int)arg1;
+ (id)sharedInstance;
- (void)connectionMonitorDidUpdate:(id)arg1;
@property unsigned long long hasPairedDeviceState; // @synthesize hasPairedDeviceState=_hasPairedDeviceState;
@property BOOL allowUnsignedBags; // @synthesize allowUnsignedBags=_allowUnsignedBags;
@property BOOL allowSelfSignedCertificates; // @synthesize allowSelfSignedCertificates=_allowSelfSignedCertificates;
@property(retain) NSNumber *_cacheTime; // @synthesize _cacheTime;
@property(retain) NSDate *_loadDate; // @synthesize _loadDate;
@property(retain, setter=_setCachedHash:) NSString *_cachedHash; // @synthesize _cachedHash;
@property(retain) NSData *_certData; // @synthesize _certData;
@property NSObject<OS_dispatch_queue> *_bagQueue; // @synthesize _bagQueue;
@property IDSRemoteURLConnection *_remoteURLConnection; // @synthesize _remoteURLConnection;
@property(retain) NSMutableURLRequest *_urlRequest; // @synthesize _urlRequest;
@property(retain) NSString *apsEnvironmentName; // @synthesize apsEnvironmentName=_apsEnvironmentName;
@property(retain) NSURL *bagURL; // @synthesize bagURL=_bagURL;
@property(retain) IMConnectionMonitor *_connectionMonitor; // @synthesize _connectionMonitor;
- (id)urlWithKey:(id)arg1;
- (void)forceBagLoad;
- (void)_bagExternallyReloaded;
- (void)_startBagLoad:(BOOL)arg1;
- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(BOOL)arg3;
- (void)_cancelCurrentLoad;
- (void)_generateURLRequest;
@property(readonly) BOOL isInDebilitatedMode;
@property(retain, setter=_setCachedURLString:) NSString *_cachedURLString; // @synthesize _cachedURLString;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id *)arg2;
- (BOOL)_loadFromDictionary:(id)arg1 returningError:(id *)arg2;
@property(setter=_setTrustStatus:) int _trustStatus; // @synthesize _trustStatus;
- (BOOL)_allowInvalid;
- (void)_saveToCache;
- (void)_loadFromCache;
- (void)_saveCacheToPrefs;
@property(retain, setter=_setCachedBag:) NSDictionary *_cachedBag; // @synthesize _cachedBag;
- (void)__saveCacheToPrefs;
@property(retain, setter=_setBag:) NSDictionary *_bag; // @synthesize _bag;
- (id)_bagDefaultsDomain;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(BOOL)arg3 allowUnsignedBags:(BOOL)arg4;
@property(readonly) BOOL isServerAvailable;
- (void)startBagLoad;
@property int token; // @synthesize token=_token;
- (void)_invalidate;
@property(readonly) BOOL isLoaded;
@property(readonly) BOOL isLoading;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (void)_clearCache;

@end

