//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AWDServerConnection : NSObject
{
    struct AWDServerConnection *fServerConnection;
}

- (void)flushToQueue:(struct dispatch_queue_s *)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)registerConfigChangeCallback:(CDUnknownBlockType)arg1;
- (BOOL)registerQueriableMetricCallback:(CDUnknownBlockType)arg1 forIdentifier:(unsigned long)arg2;
- (id)initWithComponentId:(unsigned long)arg1;
- (BOOL)registerQueriableMetric:(unsigned long)arg1 callback:(CDUnknownBlockType)arg2;
- (unsigned long long)getAWDTimestamp;
- (BOOL)submitMetric:(id)arg1;
- (id)newMetricContainerWithIdentifier:(unsigned long)arg1;
- (id)initWithComponentId:(unsigned long)arg1 andBlockOnConfiguration:(BOOL)arg2;
- (void)dealloc;

@end

