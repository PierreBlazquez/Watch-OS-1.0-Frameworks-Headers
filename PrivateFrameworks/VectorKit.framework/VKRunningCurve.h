//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKRunningCurve : NSObject
{
    CDStruct_cb41008d _p0;
    double _t0;
    CDStruct_cb41008d _p1;
    double _t1;
    CDStruct_cb41008d _pu;
    double _tu;
    struct {
        double mb[4][3];
    } _mb;
    BOOL _mbValid;
}

- (void)appendPosition:(struct VKPoint)arg1 atTime:(double)arg2;
- (BOOL)hasStateAtTime:(double)arg1;
- (CDStruct_cb41008d)stateAtTime:(double)arg1;
- (id).cxx_construct;
- (void)reset;
- (id)init;
- (void)dealloc;

@end

