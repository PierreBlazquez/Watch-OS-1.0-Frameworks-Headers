//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HDDiscreteCollectionCalculator : NSObject
{
    CDStruct_7ffd488b _currentStats;
    struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats>>> _bySource;
    BOOL _detailBySource;
}

@property(nonatomic) BOOL detailBySource; // @synthesize detailBySource=_detailBySource;
- (void)getCurrentBucketStats:(CDStruct_7ffd488b *)arg1;
- (void)advanceBucket;
- (void)addCurrentValue:(double)arg1 sourceId:(long long)arg2;
- (id)statsBySource;
- (int)dataCount;
- (BOOL)hasData;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)init;

@end

