//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CalStopwatch : NSObject
{
    BOOL _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

- (double)markEventEnd:(id)arg1;
- (double)markEventSplit:(id)arg1;
- (void)markEventStart:(id)arg1;
- (id)elapsedTimeAsString:(int)arg1;
- (unsigned long long)elapsedTimeInNanoseconds;
- (void)stop;
- (void).cxx_destruct;
- (void)reset;
- (void)start;
- (id)description;
- (id)init;
- (unsigned long long)elapsedTimeAsNumber:(int)arg1;

@end

