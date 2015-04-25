//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDevice, AVCaptureInputPort, AVWeakReference, NSArray, NSMutableArray;

@interface AVCaptureConnectionInternal : NSObject
{
    NSMutableArray *inputPorts;
    AVCaptureDevice *sourceDevice;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    BOOL hasActiveObservers;
    BOOL active;
    BOOL enabled;
    int changeSeed;
    AVCaptureInputPort *audioInputPort;
    NSMutableArray *audioChannels;
    NSArray *audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort *videoInputPort;
    AVCaptureInputPort *metadataInputPort;
    AVCaptureInputPort *metadataItemInputPort;
    BOOL videoMirroringSupported;
    BOOL automaticallyAdjustsVideoMirroring;
    BOOL videoMirrored;
    BOOL videoOrientationSupported;
    int videoOrientation;
    CDStruct_1b6d18a9 videoMinFrameDuration;
    CDStruct_1b6d18a9 videoMaxFrameDuration;
    float videoMaxScaleAndCropFactor;
    float videoScaleAndCropFactor;
    int videoRetainedBufferCountHint;
    int preferredVideoStabilizationMode;
    BOOL videoStabilizationEnabled;
    int activeVideoStabilizationMode;
    BOOL hasVideoMinFrameDurationObserver;
}

@end

