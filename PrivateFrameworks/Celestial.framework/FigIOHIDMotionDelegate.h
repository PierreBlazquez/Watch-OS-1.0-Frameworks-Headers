//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FigIOHIDMotionDelegate : NSObject
{
    struct _opaque_pthread_mutex_t ringMutex;
    BOOL manageAccel;
    int accelRingIndex;
    float accelRingX[64];
    float accelRingY[64];
    float accelRingZ[64];
    double accelRingTime[64];
}

- (void)didUpdateAccelerationWithEventInfo:(CDStruct_bf7dff04 *)arg1;
- (void)deferOnRunloop_stopEvents;
- (id)initWithOptions:(BOOL)arg1 enableRotation:(BOOL)arg2 enableAttitude:(BOOL)arg3;
- (void)deferOnRunloop_initManagerUsingIOHID;
- (BOOL)managingAccel;
- (void)getVectorX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (id)init;
- (void)dealloc;

@end

