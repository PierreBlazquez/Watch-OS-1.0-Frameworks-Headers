//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FUChartDataSet, NSArray, NSDate, NSNumber;

@interface FUChartSeries : UIView
{
    NSDate *_minXValue;
    NSDate *_maxXValue;
    NSArray *_dataPoints;
    float _animationDuration;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    id <FUChartSeriesDataSource> _dataSource;
    id <FUChartSeriesDelegate> _delegate;
    FUChartDataSet *_dataSet;
    struct UIEdgeInsets _edgeInsets;
}

@property(retain, nonatomic) FUChartDataSet *dataSet; // @synthesize dataSet=_dataSet;
- (void)tapDragGestureRecognizerUpdated:(id)arg1;
- (struct CGPoint)getPointFromChartPoint:(id)arg1 forKey:(id)arg2;
- (id)_getMaxYValue;
- (id)_getMinYValue;
- (id)_getMaxXValue;
- (id)_getMinXValue;
- (float)_getYValueForPointFromChartPoint:(id)arg1 key:(id)arg2;
- (struct CGPoint)getPointFromChartPoint:(id)arg1;
- (id)getChartPointFromDataSetAtIndex:(int)arg1;
- (void)_reloadMinMaxValues;
- (void)selectedPointIndexesUpdated:(id)arg1 selectionPoints:(id)arg2;
- (struct CGRect)insetBounds;
- (id)getLabelsFromSet;
- (float)_getYValueForPointFromChartPointValue:(id)arg1;
- (float)_getYValueForPointFromChartPoint:(id)arg1;
- (float)_getXValueForPointFromChartPoint:(id)arg1;
- (id)getPointsFromDataSet;
@property(retain, nonatomic) NSNumber *maxYValue; // @synthesize maxYValue=_maxYValue;
@property(retain, nonatomic) NSNumber *minYValue; // @synthesize minYValue=_minYValue;
- (float)_relativePositionForYPlaneValue:(id)arg1;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (void)refreshView;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) float animationDuration; // @synthesize animationDuration=_animationDuration;
- (void)animate;
@property(nonatomic) __weak id <FUChartSeriesDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FUChartSeriesDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)layoutSubviews;
- (id)init;

@end

