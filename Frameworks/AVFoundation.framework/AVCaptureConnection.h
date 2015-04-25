//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureConnectionInternal, AVCaptureOutput, AVCaptureVideoPreviewLayer, NSArray;

@interface AVCaptureConnection : NSObject
{
    AVCaptureConnectionInternal *_internal;
}

+ (void)initialize;
+ (id)alloc;
+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
- (id)mediaType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic, getter=isActive) BOOL active;
- (id)description;
- (void)dealloc;
- (id)session;
- (BOOL)isLive;
- (id)figCaptureConnectionConfigurationForSessionPreset:(id)arg1;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
@property(nonatomic) int preferredVideoStabilizationMode;
@property(nonatomic) BOOL enablesVideoStabilizationWhenAvailable;
@property(readonly, nonatomic, getter=isVideoStabilizationEnabled) BOOL videoStabilizationEnabled;
@property(nonatomic) float videoScaleAndCropFactor;
@property(nonatomic) CDStruct_1b6d18a9 videoMaxFrameDuration;
@property(readonly, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 videoMinFrameDuration;
@property(readonly, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;
@property(nonatomic) int videoOrientation;
@property(nonatomic) BOOL automaticallyAdjustsVideoMirroring;
- (void)_setVideoMirrored:(BOOL)arg1;
@property(nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
- (void)_setActive:(BOOL)arg1;
- (void)setupObservers;
- (void)_updateMaxScaleAndCropFactorForFormat:(id)arg1;
- (BOOL)isVideoRetainedBufferCountHintSupported;
- (void)_updateActiveVideoStabilizationMode:(int)arg1 bumpChangeSeed:(BOOL)arg2;
- (int)_resolveActiveVideoStabilizationMode:(int)arg1 format:(id)arg2;
- (void)_setVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;
@property(readonly, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;
- (void)updateAudioLevelsArray;
- (void)_updatePropertiesForFormat:(id)arg1;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (void)teardownObservers;
- (void)setupInternalStorage;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL supportsVideoStabilization;
- (void)updateAudioChannelsArray;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property(readonly, nonatomic) AVCaptureOutput *output;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
@property(readonly, nonatomic) int activeVideoStabilizationMode;
- (int)videoRetainedBufferCountHint;
@property(readonly, nonatomic) float videoMaxScaleAndCropFactor;
@property(readonly, nonatomic) NSArray *audioChannels;
- (id)sourceDevice;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (void)bumpChangeSeed;
- (CDStruct_1b6d18a9)_videoMaxFrameDuration;
- (BOOL)isVideoMaxFrameDurationSet;
- (CDStruct_1b6d18a9)_videoMinFrameDuration;
- (BOOL)isVideoMinFrameDurationSet;
- (BOOL)sourcesFromFrontFacingCamera;
- (int)changeSeed;
@property(readonly, nonatomic) NSArray *inputPorts;

@end

