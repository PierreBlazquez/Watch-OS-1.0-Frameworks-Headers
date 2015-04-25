//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSTimer, SSMetricsConfiguration, SSXPCConnection;

@interface SSMetricsController : NSObject
{
    SSXPCConnection *_connection;
    SSMetricsConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_flushSerialQueue;
    BOOL _flushTimerEnabled;
    NSTimer *_flushEventsTimer;
}

@property(nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled; // @synthesize flushTimerEnabled=_flushTimerEnabled;
- (void)setPageConfiguration:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (id)locationWithPosition:(int)arg1 type:(id)arg2 fieldData:(id)arg3;
- (void)insertEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_valueForField:(id)arg1 withFieldData:(id)arg2;
- (void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)insertEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)serialQueue;
- (void)_setupFlushTimer;
- (void)_handleFlushTimer;
- (void)flushUnreportedEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_cookieValuesForConfiguration:(id)arg1;
- (id)pingURLs;
- (BOOL)isDisabled;
- (id)configuration;
- (id)_connection;
- (id)init;
- (void)dealloc;

@end
