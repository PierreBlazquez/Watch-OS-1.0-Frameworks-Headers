//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet;

@interface SSMetricsConfiguration : NSObject
{
    NSSet *_blacklistedEvents;
    SSMetricsConfiguration *_childConfiguration;
    NSDictionary *_config;
    BOOL _disabled;
    BOOL _disableEventDecoration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_cookieFieldsUnion;
    NSMutableDictionary *_eventFieldsUnion;
    NSDictionary *_fields;
    int _internalSettingsToken;
    id _reportingFrequencyOverride;
    BOOL _sendDisabled;
}

+ (void)setReportingFrequencyOverride:(id)arg1;
+ (id)_reportingFrequencyOverride;
+ (void)getReportingFrequencyOverrideWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL disableEventDecoration; // @synthesize disableEventDecoration=_disableEventDecoration;
- (BOOL)_decorateITMLEvents;
@property(retain, nonatomic) SSMetricsConfiguration *childConfiguration; // @synthesize childConfiguration=_childConfiguration;
- (double)reportingFrequency;
- (id)initWithStorePlatformData:(id)arg1;
- (id)initWithGlobalConfiguration:(id)arg1;
- (id)tokenStringWithElements:(id)arg1;
- (id)reportingURLString;
- (id)valueForConfigurationKey:(id)arg1;
- (id)pingURLs;
- (BOOL)isSendDisabled;
- (BOOL)isEventTypeBlacklisted:(id)arg1;
- (id)compoundStringWithElements:(id)arg1;
- (id)eventFields;
- (id)cookieFields;
@property(readonly, nonatomic) NSDictionary *fieldsMap;
- (id)blacklistedEventFields;
- (BOOL)_configBooleanForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)_initSSMetricsEventConfiguration;
- (void)_setReportingFrequencyOverride:(id)arg1;
- (BOOL)isDisabled;
- (void)dealloc;

@end

