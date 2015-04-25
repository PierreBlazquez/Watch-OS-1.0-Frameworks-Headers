//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSURL, SSMetricsEventController;

@interface SSMetricsEventReportingSession : NSObject
{
    long long _insertTimestamp;
    NSURL *_reportingURL;
    NSArray *_unreportedEvents;
    NSMutableArray *_unreportedEventPIDs;
    SSMetricsEventController *_eventController;
}

- (void)writeEventsToStream:(id)arg1;
- (BOOL)markEventsAsReported;
- (BOOL)anyUnreportedEvents;
- (void)_writeString:(id)arg1 toData:(id)arg2;
- (id)_unreportedEvents;
- (id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 eventController:(id)arg3;
- (void)dealloc;

@end

