//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPlatform.h"

@class NSData, NSString;

@interface MSMSPlatform : NSObject <MSPlatform>
{
    BOOL _isPerfLoggingEnabled;
    NSData *_pushToken;
}

+ (id)thePlatform;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) BOOL isPerfLoggingEnabled; // @synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)OSVersion;
- (BOOL)_mayPerformFileTransfer;
- (struct __CFString *)_facilityStringForFacility:(int)arg1;
- (void)_rereadDefaults;
- (id)_accountForPersonID:(id)arg1;
- (id)pushTokenForPersonID:(id)arg1;
- (id)UDID;
- (id)OSString;
- (id)hardwareString;
- (BOOL)isPerformanceLoggingEnabled;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(void *)arg7;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(void *)arg4;
- (id)appBundleInfoString;
- (id)authTokenForPersonID:(id)arg1;
- (id)theDaemon;
- (BOOL)shouldEnableNewFeatures;
- (id)socketOptions;
- (id)pathMediaStreamDir;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (BOOL)policyMayDownload;
- (void)didDetectUnrecoverableCondition;
- (id)contentURLForPersonID:(id)arg1;
- (BOOL)policyMayUpload;
- (id)baseURLForPersonID:(id)arg1;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (Class)deletePluginClass;
- (Class)sharingPluginClass;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

