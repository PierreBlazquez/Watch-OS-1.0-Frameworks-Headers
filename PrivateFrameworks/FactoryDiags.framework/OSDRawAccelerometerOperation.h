//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class OSDAccelerometerData;

@interface OSDRawAccelerometerOperation : NSOperation
{
    id _target;
    SEL _callback;
    OSDAccelerometerData *_accelerometerData;
}

- (id)initWithAccelerometerData:(id)arg1 target:(id)arg2 callback:(SEL)arg3;
- (void).cxx_destruct;
- (void)main;

@end

