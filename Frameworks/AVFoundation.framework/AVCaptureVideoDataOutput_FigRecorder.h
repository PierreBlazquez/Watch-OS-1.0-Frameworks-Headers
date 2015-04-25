//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput_FigRecorder.h>

@class AVCaptureVideoDataOutputInternal_FigRecorder, NSArray, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVCaptureVideoDataOutput_FigRecorder : AVCaptureOutput_FigRecorder
{
    AVCaptureVideoDataOutputInternal_FigRecorder *_internal;
}

+ (void)initialize;
+ (id)supportedVideoSettingsKeys;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)init;
- (void)dealloc;
- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;
@property(nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property(nonatomic) CDStruct_1b6d18a9 minFrameDuration;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (void)_setMinFrameDuration:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property(readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;
@property(copy, nonatomic) NSDictionary *videoSettings;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (struct CGSize)outputSizeForCaptureOptions:(id)arg1;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)connectionMediaTypes;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureVideoDataOutputSampleBufferDelegate_FigRecorder> sampleBufferDelegate;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)supportedAssetWriterOutputFileTypes;
- (void)setSession:(id)arg1;
- (BOOL)isTheOnlyDataOutput;

@end

