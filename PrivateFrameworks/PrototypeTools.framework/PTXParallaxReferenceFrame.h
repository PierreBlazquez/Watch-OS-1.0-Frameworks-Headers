//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UISettingsKeyObserver.h"

@class CAMediaTimingFunction, NSString, PTXParallaxEngineSettings, UILabel, UIView, UIWindow;

@interface PTXParallaxReferenceFrame : NSObject <_UISettingsKeyObserver>
{
    union _GLKQuaternion _referenceQuaternion;
    union _GLKQuaternion _absoluteQuaternion;
    double _lastUpdate;
    struct CGPoint _lastOffset;
    double _idleStartTime;
    struct CGPoint _idleStartOffset;
    PTXParallaxEngineSettings *_settings;
    CAMediaTimingFunction *_curveFunction;
    float _smoothingDegree;
    float _referenceShiftSpeed;
    float _distanceMultiplier;
    float _jumpThreshold;
    unsigned long _jumpSound;
    float _idleLeeway;
    float _secondsBeforeIdle;
    float _lockValue;
    float _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
}

- (struct CGPoint)_curvedOffset;
- (BOOL)_isIdle;
- (void)_updateReferenceAttitude:(union _GLKQuaternion)arg1;
- (void)_updateIdleStateForRawOffset:(struct CGPoint)arg1;
- (union _GLKQuaternion)_relativeQuaternion:(union _GLKQuaternion)arg1;
- (float)directionLockStrength;
- (int)directionLockStatus;
- (void)updateWithAttitude:(id)arg1;
- (id)initWithReferenceAttitude:(id)arg1 settings:(id)arg2;
- (void)_createDiagnosticsWindow;
- (void)_createDirectionLockIndicators;
- (void)_createIdleIndicator;
- (void)_showIdleUI:(BOOL)arg1;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (void)_updateDirectionalLockIndicators;
- (void)_updateSmoothedOffsetForRawOffset:(struct CGPoint)arg1;
- (struct CGPoint)_currentRawOffset:(union _GLKQuaternion)arg1;
- (void)_tearDownIdleIndicator;
- (void)_tearDownDirectionLockIndicators;
- (void)_tearDownDiagnosticsWindow;
- (void)_updateSettings;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)reset;
- (struct CGPoint)offset;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

