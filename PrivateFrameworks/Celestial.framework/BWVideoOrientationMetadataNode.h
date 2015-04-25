//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWNode.h>

#import "BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate.h"

@class BWDeviceOrientationMonitor, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface BWVideoOrientationMetadataNode : BWNode <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate>
{
    int _sourcePosition;
    struct OpaqueCMClock *_clock;
    struct OpaqueCMClock *_masterClock;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    struct opaqueCMFormatDescription *_boxedMetadataFormatDescription;
    unsigned long _localIDOfOrientationMetadata;
    int _mostRecentDevicePortraitLandscapeOrientation;
    BOOL _recording;
    NSMutableArray *_transforms;
    struct OpaqueCMBlockBuffer *_bbufCache[5];
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

+ (void)initialize;
- (void)_renderSampleBufferForBoxedFormatOutputAtTime:(CDStruct_1b6d18a9)arg1 orientation:(int)arg2 firstSample:(BOOL)arg3;
- (void)_queueUpCallToEmitSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 markerBufferOrFirstSample:(BOOL)arg2;
- (void)_releaseTransformData;
- (void)didUpdatePortraitLandscapeOrientation:(int)arg1;
- (void)setSourcePosition:(int)arg1;
- (int)sourcePosition;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (id)nodeType;
- (id)init;
- (void)dealloc;
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;
- (struct OpaqueCMClock *)masterClock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

