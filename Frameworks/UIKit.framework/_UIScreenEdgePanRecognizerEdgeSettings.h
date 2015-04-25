//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings
{
    float _restrictedEdgeRegionMinimumWeight;
    double _hysteresis;
    double _edgeRegionSize;
    double _bottomEdgeRegionSize;
    double _backProjectionTime;
    double _edgeAngleWindow;
    double _edgeAngleWindowDecayTime;
    double _restrictedEdgeRegionTimeInterval;
    double _maximumSwipeDuration;
}

+ (id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;
+ (id)settingsControllerModule;
@property(nonatomic) double maximumSwipeDuration; // @synthesize maximumSwipeDuration=_maximumSwipeDuration;
@property(nonatomic) float restrictedEdgeRegionMinimumWeight; // @synthesize restrictedEdgeRegionMinimumWeight=_restrictedEdgeRegionMinimumWeight;
@property(nonatomic) double restrictedEdgeRegionTimeInterval; // @synthesize restrictedEdgeRegionTimeInterval=_restrictedEdgeRegionTimeInterval;
@property(nonatomic) double edgeAngleWindowDecayTime; // @synthesize edgeAngleWindowDecayTime=_edgeAngleWindowDecayTime;
@property(nonatomic) double backProjectionTime; // @synthesize backProjectionTime=_backProjectionTime;
@property(nonatomic) double bottomEdgeRegionSize; // @synthesize bottomEdgeRegionSize=_bottomEdgeRegionSize;
@property(nonatomic) double edgeRegionSize; // @synthesize edgeRegionSize=_edgeRegionSize;
@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(nonatomic) double edgeAngleWindowDegreees;
@property(nonatomic) double edgeAngleWindow; // @synthesize edgeAngleWindow=_edgeAngleWindow;
- (void)setDefaultValues;

@end

