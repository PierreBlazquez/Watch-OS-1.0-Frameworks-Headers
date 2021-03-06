//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UISettingsKeyObserver.h"

@class NSString, UIDelayedAction, _UIScreenEdgePanRecognizerSettings;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver>
{
    struct CGRect _screenBounds;
    BOOL _useGrapeFlags;
    BOOL _hasRecordedData;
    BOOL _hasDoneInitialBackProjectionTest;
    float _gestureRestrictionFactor;
    struct CGPoint _initialTouchLocation;
    double _initialTouchTimestamp;
    int _initialInterfaceOrientation;
    unsigned int _touchedRegion;
    UIDelayedAction *_recognitionTimer;
    struct CGPoint _lastTouchLocation;
    double _lastTouchTimestamp;
    int _type;
    BOOL _requiresLongPress;
    BOOL _requiresFlatThumb;
    unsigned int _targetEdges;
    int _state;
    unsigned int _recognizedRegion;
    id <_UIScreenEdgePanRecognizerDelegate> _delegate;
    _UIScreenEdgePanRecognizerSettings *_settings;
}

+ (BOOL)_edgeSwipeNavigationGestureEnabled;
@property(nonatomic) BOOL requiresFlatThumb; // @synthesize requiresFlatThumb=_requiresFlatThumb;
@property(nonatomic) BOOL shouldUseGrapeFlags; // @synthesize shouldUseGrapeFlags=_useGrapeFlags;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic, getter=isRequiringLongPress) BOOL requiringLongPress;
- (void)_createOrDestoryAnalysisWindowIfNeeded;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_longPressTimerElapsed:(id)arg1;
@property(nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
- (unsigned int)_targetEdges;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4;
- (void)_setState:(int)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
@property(readonly, nonatomic) struct CGPoint _lastTouchLocation; // @synthesize _lastTouchLocation;
@property(nonatomic) unsigned int targetEdges; // @synthesize targetEdges=_targetEdges;
@property(readonly, nonatomic) unsigned int recognizedRegion; // @synthesize recognizedRegion=_recognizedRegion;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4;
- (void)reset;
- (int)_type;
- (id)initWithType:(int)arg1;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property id <_UIScreenEdgePanRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

