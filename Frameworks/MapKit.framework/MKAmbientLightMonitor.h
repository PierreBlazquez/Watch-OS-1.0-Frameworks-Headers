//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface MKAmbientLightMonitor : NSObject
{
    NSHashTable *_observers;
    BOOL _monitoring;
    int _ambientLightLevel;
    BOOL _debugLogLux;
    struct __IOHIDEventSystemClient *_client;
    struct deque<float, std::__1::allocator<float>> _runningStatBuffer;
    float _runningStatSum;
    float _lightLevelNoneThreshold;
    float _lightLevelLowThreshold;
    float _lightLevelMediumThreshold;
    unsigned int _runningStatSize;
}

+ (id)sharedAmbientLightMonitor;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)dealloc;
@property(nonatomic) BOOL debugLogLux; // @synthesize debugLogLux=_debugLogLux;
@property(readonly, nonatomic) int ambientLightLevel; // @synthesize ambientLightLevel=_ambientLightLevel;
- (void)stopMonitoringWithObserver:(id)arg1;
- (void)startMonitoringWithObserver:(id)arg1;
- (float)_addSampleAndComputeMean:(const float *)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoring;
- (void)_updateThresholds;
- (void)handleIOHIDEvent:(struct __IOHIDEvent *)arg1;
@property(readonly, nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;

@end

