//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSArray, PUICCrownInputSequencerDetent;

@interface PUICCrownInputSequencer : NSObject
{
    BOOL _crownInverted;
    double _crownInputSuppressionTimeInterval;
    CADisplayLink *_displayLink;
    double _lastDisplayLinkFiredTimeInterval;
    double _enqueuedRotationalDelta;
    CDStruct_32e70f54 *_runningAverageRotationalDelta;
    CDStruct_32e70f54 *_runningAverageRotationalVelocity;
    double _appliedInertialDelta;
    double _targetInertialDelta;
    double _clampedTargetIntertialDelta;
    struct {
        unsigned int offsetDidChange:1;
        unsigned int offsetDidReachBoundary:1;
        unsigned int idleDidChange:1;
        unsigned int shouldRubberBandAtBoundary:1;
        unsigned int willBecomeIdleWithCrownVelocityTargetOffset:1;
        unsigned int didBecomeIdleWillDecelerate:1;
        unsigned int willBeginDecelerating:1;
        unsigned int didEndDecelerating:1;
        unsigned int averageCrownVelocityDidChange:1;
        unsigned int _offsetDidChangeByDelta:1;
        unsigned int _shouldSuppressInput:1;
    } _delegateRespondsTo;
    struct {
        unsigned int previousDetentNextDetentAfterOffset:1;
    } _dataSourceRespondsTo;
    BOOL _continuous;
    BOOL _rubberBandingEnabled;
    BOOL _wantsCrownIndicatorStyledForTouchInput;
    int _crownIndicatorMode;
    id <PUICCrownInputSequencerDelegate> _delegate;
    CDUnknownBlockType _curve;
    id <PUICCrownInputSequencerDataSource> _dataSource;
    double _start;
    double _end;
    double _visibleLength;
    double _offset;
    double _screenSpaceMultiplier;
    double _decelerationRate;
    double _decelerationEpsilon;
    double _screenPointsPerRevolution;
    double _offsetPerRevolution;
}

@property(nonatomic) double offsetPerRevolution; // @synthesize offsetPerRevolution=_offsetPerRevolution;
@property(nonatomic, getter=_screenPointsPerRevolution, setter=_setScreenPointsPerRevolution:) double screenPointsPerRevolution; // @synthesize screenPointsPerRevolution=_screenPointsPerRevolution;
@property(nonatomic) double decelerationEpsilon; // @synthesize decelerationEpsilon=_decelerationEpsilon;
@property(nonatomic) BOOL wantsCrownIndicatorStyledForTouchInput; // @synthesize wantsCrownIndicatorStyledForTouchInput=_wantsCrownIndicatorStyledForTouchInput;
@property(nonatomic) int crownIndicatorMode; // @synthesize crownIndicatorMode=_crownIndicatorMode;
@property(nonatomic) double screenSpaceMultiplier; // @synthesize screenSpaceMultiplier=_screenSpaceMultiplier;
@property(nonatomic, getter=isRubberBandingEnabled) BOOL rubberBandingEnabled; // @synthesize rubberBandingEnabled=_rubberBandingEnabled;
@property(readonly, nonatomic) PUICCrownInputSequencerDetent *activeDetent;
@property(copy, nonatomic) NSArray *staticDetents;
- (void)setActiveDetentChangeHapticEnabled:(BOOL)arg1;
- (BOOL)isActiveDetentChangeHapticEnabled;
- (void)setSmoothingEnabled:(BOOL)arg1;
- (BOOL)isSmoothingEnabled;
@property(readonly, nonatomic, getter=isRubberBanding) BOOL rubberBanding;
@property(nonatomic, getter=isCrownIndicatorVisible) BOOL crownIndicatorVisible; // @dynamic crownIndicatorVisible;
- (void)updateWithCrownInputEvent:(id)arg1;
- (double)percentageOfMaximumRubberBandDistanceForOffset:(double)arg1;
- (void)setOffset:(double)arg1 suppressIndicatorVisibilityChanges:(BOOL)arg2;
- (double)_velocityCoefficient;
- (double)_rotationalDeltaConstrainedToClampedTargetInertialDelta:(double)arg1;
- (double)_calculateInertialVelocityForDelta:(double)arg1;
- (void)_notifyClientsOfDecelerationCompletion;
- (void)_notifyObserversThatOffsetReachedBoundary:(int)arg1;
- (void)_stopDeceleratingImmediately;
- (BOOL)_boundariesExceededForOffset:(double)arg1;
- (void)_notifyClientsOfIdleBeganWithDeceleration:(BOOL)arg1;
- (double)_clientAdjustedInertialDelta:(double)arg1 fromOffset:(double)arg2;
- (double)_constrainedRotationalDelta:(double)arg1 toMinMaxDeltaFromOffset:(double)arg2;
- (double)_calculateInertialDeltaForVelocity:(double)arg1;
- (double)_calculateInertialVelocityForAverageInputVelocity:(double)arg1 withCurrentOffset:(double)arg2;
- (double)_maximumRubberBandingDistance;
- (double)_applyDecelerationForDeltaTime:(double)arg1 shouldBounce:(BOOL)arg2 makeItSnappy:(BOOL)arg3;
- (void)_notifyObserversOfIdleChange;
- (void)_notifyObserversOfCrownVelocityChange;
@property(readonly, nonatomic, getter=isIdle) BOOL idle;
- (BOOL)_needsDisplayLink;
- (void)_updateDisplayLink;
- (double)percentageOffsetForOffset:(double)arg1;
- (BOOL)_shouldRubberBandOffset:(double)arg1;
- (void)_acquireCrownIndicatorIfNecessary;
- (void)_updateOffsetWithRotationalDelta:(double)arg1 eventSourceTimestamp:(double)arg2 adjustForCrownOrientation:(BOOL)arg3;
- (double)_effectiveOffsetPerRevolution;
@property(readonly, nonatomic) double averageCrownVelocity;
- (void)_setOffset:(double)arg1 notifyDelegate:(BOOL)arg2 suppressIndicatorVisibilityChanges:(BOOL)arg3;
- (void)_updateIndicatorIfNecessary;
- (void)_hideCrownIndicator;
- (void)_notifyObserversOfOffsetChange;
- (void)_updateVisibleCrownIndicator;
- (void)stopVelocityTrackingAndDecelerationImmediately;
- (void)_updateCrownInvertedSetting;
- (void)_deviceOrientationInvertedDidChangeNotification:(id)arg1;
- (void)setCrownIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) double visibleLength; // @synthesize visibleLength=_visibleLength;
- (void)_displayLinkFired:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
- (double)velocity;
@property(nonatomic, getter=isContinuous) BOOL continuous; // @synthesize continuous=_continuous;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(copy, nonatomic) CDUnknownBlockType curve; // @synthesize curve=_curve;
@property(readonly, nonatomic) double length;
@property(nonatomic) __weak id <PUICCrownInputSequencerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUICCrownInputSequencerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
- (id)init;
- (void)reloadData;
- (void)dealloc;

@end

