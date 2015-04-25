//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWCaptureDevice.h>

#import "BWZoomCompletionDelegate.h"

@class BWDeviceMotionActivityDetector, BWStillImageTimeMachine, BWZoomCommandHandler, FigCaptureThermalMonitor, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface BWFigVideoCaptureDevice : BWCaptureDevice <BWZoomCompletionDelegate>
{
    struct OpaqueFigCaptureDevice *_device;
    struct OpaqueFigCaptureStream *_stream;
    BOOL _usingMultipleStreamOutputs;
    struct OpaqueCMClock *_clock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct opaqueCMBufferQueue *_streamQueue;
    struct opaqueCMBufferQueueTriggerToken *_streamQueueTriggerToken;
    NSObject<OS_dispatch_queue> *_bufferServicingQueue;
    NSObject<OS_dispatch_queue> *_zoomUpdateQueue;
    struct opaqueCMBufferQueue *_stillImageQueue;
    struct opaqueCMBufferQueueTriggerToken *_stillImageQueueTriggerToken;
    NSObject<OS_dispatch_queue> *_stillImageServicingQueue;
    BOOL _streaming;
    NSDictionary *_supportedProperties;
    NSArray *_supportedFormats;
    int _activeFormatIndex;
    BOOL _fullRangeVideo;
    int _minimumFrameRate;
    int _maximumFrameRate;
    struct __CFString *_portType;
    int _position;
    NSDictionary *_attributes;
    int _clientRetainedBufferCountHint;
    NSMutableArray *_streamingClientCallbacks;
    NSMutableArray *_stillImageClientCallbacks;
    BOOL _deferMetadataDictionaryCreation;
    CDUnknownFunctionPointerType _createAutofocusSampleBufferProcessorFunction;
    NSObject<OS_dispatch_queue> *_autofocusProcessorQueue;
    NSMutableDictionary *_autofocusCachedPropertiesDictionary;
    struct OpaqueFigSimpleMutex *_autofocusStatusMutex;
    struct OpaqueFigSampleBufferProcessor *_autofocusProcessor;
    BOOL _allowAEStableNotifications;
    BOOL _aeStable;
    CDStruct_1b6d18a9 _aeRequestTime;
    int _aeRequestCount;
    int _aeFrameWaitCount;
    BOOL _allowAWBStableNotifications;
    BOOL _awbStable;
    struct CGRect _cachedFocusRect;
    struct CGRect _cachedExposureRect;
    BOOL _useAutoImageControlMode;
    int _autoImageControlMode;
    int _currentImageControlMode;
    BOOL _faceDetectionMetadataRequested;
    NSDictionary *_faceDetectionConfiguration;
    BOOL _faceDetectionEnabled;
    NSArray *_lastValidDetectedFacesArray;
    BOOL _cacheDetectedFacesForBracketedCapture;
    int _frameStatisticsLock;
    CDStruct_1d2e688e _currentFrameStatistics;
    BOOL _hasFlash;
    BOOL _autoFlashEnabled;
    BOOL _flashActive;
    float _stillImageStabilizationIntegrationTimeThreshold;
    BOOL _stillImageStabilizationAutomaticallyEnabled;
    struct OpaqueFigSimpleMutex *_torchLock;
    BOOL _autoTorchEnabled;
    BOOL _autoTorchStatsCheckedForVideoRecording;
    BOOL _torchActive;
    float _torchLevel;
    FigCaptureThermalMonitor *_thermalMonitor;
    BOOL _hdrSceneDetectionEnabled;
    BOOL _hdrScene;
    int _lowLightBoostLock;
    BOOL _lowLightBoostSupportedForFormat;
    BOOL _lowLightBoostActive;
    BOOL _stillImageCaptureEnabled;
    BOOL _timeMachineEnabledForMultistream;
    CDUnknownBlockType _stillImageBufferTimeMachineHandler;
    int _timeMachineCapacity;
    BWStillImageTimeMachine *_timeMachine;
    NSObject<OS_dispatch_queue> *_stillImageDispatchQueue;
    id <BWFigVideoDeviceStillImageCaptureDelegate> _stillImageCaptureDelegate;
    NSObject<OS_dispatch_group> *_stillImageCaptureDelegateDispatchGroup;
    int _expectedImagesForCaptureStillImageNow;
    int _receivedImagesForCaptureStillImageNow;
    int _skippedFramesCountForAF;
    int _stillImageCaptureLock;
    BOOL _grabNextFrame;
    BOOL _retryCaptureStillImageNow;
    BOOL _retryCaptureUsesFlash;
    NSMutableDictionary *_retryStillImageCaptureOptions;
    int _currentManualFocusCompletedID;
    int _currentManualExposureCompletedID;
    int _currentBiasedExposureCompletedID;
    int _currentManualWhiteBalanceCompletedID;
    NSMutableDictionary *_observedProperties;
    struct OpaqueFigSimpleMutex *_manualPropertyMutex;
    float _lensPosition;
    CDStruct_1b6d18a9 _exposureDuration;
    float _ISO;
    float _exposureTargetBias;
    float _exposureTargetOffset;
    CDStruct_d6531dd4 _deviceWhiteBalanceGains;
    CDStruct_d6531dd4 _grayWorldWhiteBalanceGains;
    NSObject<OS_dispatch_queue> *_whiteBalanceGainsQueue;
    NSMutableDictionary *_whiteBalanceGains;
    NSMutableArray *_whiteBalanceGainsOrderedKeys;
    int _whiteBalanceModeForExif;
    BWZoomCommandHandler *_zoomCommandHandler;
    float _maxISPZoomFactor;
    CDStruct_79c71658 _ispOutputDimensions;
    CDStruct_79c71658 _maxISPCropDimensions;
    CDStruct_79c71658 _lastISPCropDimensions;
    struct CGSize _overscanPercentage;
    int _tccLock;
    BOOL _clientProcessHasAccessToCamera;
    NSData *_auditTokenData;
    BOOL _feature1Enabled;
    NSObject<OS_dispatch_queue> *_feature1ProcessorQueue;
    struct OpaqueFigSampleBufferProcessor *_feature1Processor;
    BOOL _hasSphere;
    int _sphereLock;
    BOOL _enableSphereWhenAvailable;
    BOOL _sphereEnabled;
    BOOL _motionDataInvalid;
    BWDeviceMotionActivityDetector *_deviceMotionActivityDetector;
}

+ (struct __CFString *)_autofocusProcessorImageControlModeFromImageControlMode:(int)arg1;
+ (long)setupVibeHandlingIfRequired;
+ (void)initialize;
- (BOOL)enableSphereWhenAvailable;
- (float)stillImageStabilizationIntegrationTimeThreshold;
- (void)_serviceAutoTorchNotification;
- (CDUnknownBlockType)stillImageBufferTimeMachineHandler;
- (BOOL)timeMachineEnabledForMultistream;
- (id)stillImageCaptureDelegate;
- (BOOL)stillImageCaptureEnabled;
- (void)_serviceCompletedRequestNotifications:(struct opaqueCMSampleBuffer *)arg1;
- (void)_servicePropertyChangeNotifications:(struct opaqueCMSampleBuffer *)arg1;
- (BOOL)usesFullRangeVideo;
- (int)clientRetainedBufferCountHint;
- (int)activeFormatIndex;
- (long)_copyAutofocusProcessorProperty:(struct __CFString *)arg1 propertyValueOut:(void *)arg2;
- (int)maximumFrameRate;
- (int)minimumFrameRate;
- (float)_ispAppliedZoomFromSampleBufferMetadataDictionary:(id)arg1;
- (void)_updateISPCropForZoomFactor:(float)arg1;
- (long)_updateExposureRectIfNeededForZoomFactor:(float)arg1;
- (long)_updateAutoFocusRectIfNeededForZoomFactor:(float)arg1;
- (long)_setAutofocusProcessorImageControlModeProperty:(int)arg1;
- (long)_setAutofocusProcessorProperty:(struct __CFString *)arg1 propertyValue:(void *)arg2;
- (void)_addExifWhiteBalanceMetadata:(struct opaqueCMSampleBuffer *)arg1;
- (void)_addFeature1ToMetadata:(struct opaqueCMSampleBuffer *)arg1;
- (void)_addAutofocusAndDiagnosticMetadata:(struct opaqueCMSampleBuffer *)arg1;
- (long)_captureStillImageNowOnStreamWithOptions:(id)arg1 flashMode:(BOOL)arg2;
- (void)_emitStillImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromTimeMachine:(BOOL)arg2;
- (void)_resetCaptureRequestState;
- (BOOL)_shouldUseSphereForStillImageCapture:(double)arg1;
- (void)_handleStillImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_captureStillImageBracketNow:(int)arg1 bracketSettings:(id)arg2;
- (void)_captureStillImageWithFlashNow;
- (void)_captureStillImageNow;
- (BOOL)_unprepareStillImageQueue;
- (BOOL)_prepareStillImageQueue;
- (void)_postManualControlRequestCompletedWithName:(id)arg1 requestID:(int)arg2 timeDictionary:(id)arg3 additionalPayloadItems:(id)arg4;
- (BOOL)isPropertyObserved:(id)arg1;
- (void)_emitVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_updateMotionDataStatus:(struct opaqueCMSampleBuffer *)arg1;
- (BOOL)isSphereEnabled;
- (void)_serviceZoomForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 updateISPZoom:(BOOL)arg2;
- (void)_teardownFeature1SampleBufferProcessor;
- (void)_teardownAutoFocusSampleBufferProcessor;
- (void)_serviceLowLightBoostActiveNotification:(struct opaqueCMSampleBuffer *)arg1;
- (long)_setupFeature1SampleBufferProcessor;
- (long)_setupAutofocusSampleBufferProcessor;
- (void)_addCaptureStreamAttachments:(struct opaqueCMSampleBuffer *)arg1;
- (void)_handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_updateZoomCapabilitiesForActiveFormatIndex:(int)arg1;
- (void)_didStartStreaming;
- (void)_didStopStreaming;
- (void)_willStartStreaming;
- (BOOL)_prepareStreamQueue;
- (long)_setAutofocusProcessorPropertyInternal:(struct __CFString *)arg1 propertyValue:(void *)arg2;
- (long)_copyAutofocusProcessorPropertyInternal:(struct __CFString *)arg1 propertyValueOut:(void *)arg2;
- (void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2;
- (void)_updateFaceDetectionStateForAutofocusProperty:(struct __CFString *)arg1 propertyValue:(void *)arg2;
- (void)_updateWhiteBalanceStateForAutofocusProperty:(struct __CFString *)arg1 propertyValue:(void *)arg2;
- (void)_updateExposureStateForAutofocusProperty:(struct __CFString *)arg1;
- (void)_updateImageControlModeStateForAutofocusProperty:(struct __CFString *)arg1 propertyValue:(void *)arg2;
- (long)_updateFaceDetectionConfigurationOnStream:(id)arg1;
- (void)_setFaceDetectionEnabled:(BOOL)arg1;
- (void)_updateSphereMode;
- (BOOL)_unprepareStreamQueue;
- (id)_initWithFigCaptureDeviceRef:(struct OpaqueFigCaptureDevice *)arg1 figCaptureStreamRef:(struct OpaqueFigCaptureStream *)arg2 attributes:(id)arg3 createAutofocusSampleBufferProcessorFunction:(CDUnknownFunctionPointerType)arg4;
- (void)drainNotifications;
- (id)initWithPosition:(int)arg1 attributes:(id)arg2;
- (long)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2;
- (long)setFocusModeAutoWithRect:(struct CGRect)arg1 continuous:(BOOL)arg2 smooth:(BOOL)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5;
- (long)setExposureModeCustomWithExposureDuration:(CDStruct_1b6d18a9)arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5;
- (long)setExposureModeLocked;
- (long)setExposureModeAutoWithRect:(struct CGRect)arg1;
- (long)setExposureTargetBias:(float)arg1 requestID:(int)arg2;
- (long)setWhiteBalanceModeLockedWithGains:(CDStruct_869f9c67)arg1 requestID:(int)arg2;
- (long)setWhiteBalanceModeAuto;
- (void)setClientAuditTokenData:(id)arg1;
- (void)setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1;
- (BOOL)setHDRSceneDetectionEnabled:(BOOL)arg1 error:(id *)arg2;
- (long)setFaceDetectionDrivenImageProcessingMode:(int)arg1;
- (long)setAutomaticallyAdjustsTorch:(BOOL)arg1;
- (long)setTorchLevel:(float)arg1;
- (BOOL)setAutoFlashEnabled:(BOOL)arg1 error:(id *)arg2;
- (void)setProperty:(id)arg1 isObserved:(BOOL)arg2;
- (void)checkTCCAccess;
- (void)sourceNodeWillEmitStillImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sourceNodeWillEmitVideoPreviewSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sourceNodeWillEmitVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sourceNodeWillDiscardVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)timeMachineCapacity;
- (void)sourceNodeDidStartStreaming;
- (void)sourceNodeDidStopStreaming;
- (void)sourceNodeWillStartStreaming;
- (void)setStillImageBufferTimeMachineHandler:(CDUnknownBlockType)arg1;
- (void)setTimeMachineEnabledForMultistream:(BOOL)arg1;
- (id)zoomCommandHandler;
- (id)streamSupportedProperties;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 commandID:(int)arg3;
- (void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(BOOL)arg3 rampCommandID:(int)arg4;
- (long)setAlternateOutputSizeAndCrop:(id)arg1;
- (void)disposeFigCaptureDevice;
- (id)bufferServicingQueue;
- (void)setUsesFullRangeVideo:(BOOL)arg1;
- (void)setActiveFormatIndex:(int)arg1;
- (long)setLowLightBoostAutomaticallyEnabled:(BOOL)arg1 supportedForFormat:(BOOL)arg2;
- (void)setMaximumFrameRate:(int)arg1;
- (void)setMinimumFrameRate:(int)arg1;
- (id)supportedFormats;
- (void)registerForFaceDetectionMetadata;
- (BOOL)unregisterStillImageBufferHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)stopStreamingToSampleBufferHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)registerStillImageBufferHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)startStreamingToSampleBufferHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (struct OpaqueFigCaptureStream *)stream;
- (void)setClientRetainedBufferCountHint:(int)arg1;
- (int)lowLightCompensationModeForStatistics:(CDStruct_1d2e688e *)arg1;
- (void)getCurrentVideoFrameStatistics:(CDStruct_1d2e688e *)arg1;
- (void)captureStillImageBracketNow:(int)arg1 bracketSettings:(id)arg2;
- (void)captureStillImageWithFlashNow;
- (void)captureStillImageNow;
- (void)setStillImageCaptureDelegate:(id)arg1;
- (void)setEnableSphereWhenAvailable:(BOOL)arg1;
- (void)setOverscanPercentage:(struct CGSize)arg1;
- (void)registerForAEMatrixMetadata;
- (void)setStillImageStabilizationIntegrationTimeThreshold:(float)arg1;
- (id)cameraTuningParametersDictionary;
- (id)moduleInfo;
- (id)sensorIDDictionary;
- (void)setStillImageCaptureEnabled:(BOOL)arg1;
- (void)unregisterForFaceDetectionMetadata;
- (void)unregisterForAEMatrixMetadata;
- (long)setAutoImageControlMode:(int)arg1;
- (int)autoImageControlMode;
- (BOOL)isStreaming;
- (int)position;
- (void)dealloc;
- (float)zoomFactor;
- (void)setZoomFactor:(float)arg1;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (long)setImageControlMode:(int)arg1;
- (long)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (CDStruct_869f9c67)grayWorldDeviceWhiteBalanceGains;
- (CDStruct_869f9c67)deviceWhiteBalanceGains;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (float)ISO;
- (CDStruct_1b6d18a9)exposureDuration;
- (float)lensPosition;
- (long)setProvidesStortorgetMetadata:(BOOL)arg1;
- (long)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (struct OpaqueCMClock *)clock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

