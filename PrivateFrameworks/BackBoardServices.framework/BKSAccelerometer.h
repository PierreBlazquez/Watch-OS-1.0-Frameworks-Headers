//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSThread;

@interface BKSAccelerometer : NSObject
{
    id <BKSAccelerometerDelegate> _delegate;
    struct __CFRunLoopSource *_accelerometerEventsSource;
    struct __CFRunLoop *_accelerometerEventsRunLoop;
    double _interval;
    NSLock *_lock;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread *_orientationEventsThread;
    unsigned int _orientationPort;
    BOOL _passiveOrientationEvents;
    BOOL _orientationEventsEnabled;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
    double _updateInterval;
}

- (int)currentDeviceOrientation;
@property(nonatomic) BOOL orientationEventsEnabled; // @synthesize orientationEventsEnabled=_orientationEventsEnabled;
@property(nonatomic) float zThreshold; // @synthesize zThreshold=_zThreshold;
@property(nonatomic) float yThreshold; // @synthesize yThreshold=_yThreshold;
@property(nonatomic) float xThreshold; // @synthesize xThreshold=_xThreshold;
@property(nonatomic) BOOL passiveOrientationEvents; // @synthesize passiveOrientationEvents=_passiveOrientationEvents;
- (id)_orientationEventsThread;
- (void)_serverWasRestarted;
- (void)_orientationDidChange;
- (void)_updateOrientationServer;
- (void)_checkOut;
- (void)_checkIn;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) BOOL accelerometerEventsEnabled;
@property(nonatomic) id <BKSAccelerometerDelegate> delegate;
- (id)init;
- (void)dealloc;

@end

