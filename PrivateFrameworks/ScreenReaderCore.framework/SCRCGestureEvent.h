//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject
{
    unsigned int _deviceIdentifier;
    SCRCGestureFinger *_finger[8];
    unsigned int _fingerCount;
    double _time;
    struct CGPoint _averageLocation;
}

- (unsigned int)deviceIdentifier;
- (id)initWithDeviceIdentifier:(unsigned int)arg1;
- (struct CGPoint)magneticLocation;
- (BOOL)isCancelEvent;
- (struct CGPoint)balancedLocation;
- (struct CGPoint)averageLocation;
- (id)fingers;
- (id)fingerWithoutIdentifier:(unsigned int)arg1;
- (id)fingerWithIdentifier:(unsigned int)arg1;
- (id)fingerAtIndex:(unsigned int)arg1;
- (unsigned int)fingerCount;
- (void)removeFingerWithIdentifier:(unsigned int)arg1;
- (void)addFingerWithIdentifier:(unsigned int)arg1 location:(struct CGPoint)arg2;
- (struct CGRect)fingerFrame;
- (double)time;
- (id)description;
- (void)dealloc;

@end

