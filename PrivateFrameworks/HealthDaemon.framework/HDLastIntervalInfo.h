//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface HDLastIntervalInfo : NSObject
{
    NSMutableDictionary *_sumsBySource;
    NSArray *_orderedSourceIds;
    long long _lastInterval;
    double _startTimeInBucket;
}

@property(retain, nonatomic) NSArray *orderedSourceIds; // @synthesize orderedSourceIds=_orderedSourceIds;
@property(retain, nonatomic) NSMutableDictionary *sumsBySource; // @synthesize sumsBySource=_sumsBySource;
@property(nonatomic) double startTimeInBucket; // @synthesize startTimeInBucket=_startTimeInBucket;
@property(nonatomic) long long lastInterval; // @synthesize lastInterval=_lastInterval;
- (id)initWithSources:(id)arg1;
- (void).cxx_destruct;

@end

