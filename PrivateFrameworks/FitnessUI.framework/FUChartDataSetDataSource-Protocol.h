//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FUChartDataSet, NSArray;

@protocol FUChartDataSetDataSource <NSObject>
- (id <FUChartPoint>)dataSet:(FUChartDataSet *)arg1 chartPointForIndex:(unsigned int)arg2;
- (unsigned int)numberOfDataPointsForDataSet:(FUChartDataSet *)arg1;

@optional
- (NSArray *)labelsForSet:(FUChartDataSet *)arg1;
- (NSArray *)dataPointsForSet:(FUChartDataSet *)arg1;
@end
