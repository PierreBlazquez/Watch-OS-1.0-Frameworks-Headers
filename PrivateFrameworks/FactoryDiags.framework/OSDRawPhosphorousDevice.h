//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSOperationQueue, OSDSPU;

@interface OSDRawPhosphorousDevice : NSObject
{
    NSOperationQueue *_operationQueue;
    struct __IOHIDEventSystemClient *_HIDSystemClient;
    struct __IOHIDServiceClient *_PhosphorousPlugin;
    NSMutableArray *_samples;
    SEL _registeredCallback;
    id _registeredDelegate;
    OSDSPU *_spu;
}

@property(nonatomic) struct __IOHIDServiceClient *_PhosphorousPlugin; // @synthesize _PhosphorousPlugin;
- (struct __IOHIDServiceClient *)getPhosphorousPlugin;
- (int)registerPhosphorousCallback:(SEL)arg1 delegate:(id)arg2 operationQueue:(id)arg3 sampleInterval:(float)arg4;
- (void)unregisterPhosphorousCallbackIOKit;
- (int)registerPhosphorousCallbackIOKit:(float)arg1;
- (void)unregisterPhosphorousCallback;
- (id)sampleForDuration:(float)arg1 sampleInterval:(float)arg2;
- (struct __IOHIDEventSystemClient *)getHIDSystem;
- (void)enqueueCallback:(id)arg1;
- (void)sampleForDurationCallback:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

