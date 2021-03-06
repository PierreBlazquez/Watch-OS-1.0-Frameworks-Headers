//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDeviceFormat, AVCaptureDeviceInternal, NSArray, NSString;

@interface AVCaptureDevice : NSObject
{
    AVCaptureDeviceInternal *_internal;
}

+ (id)devices;
+ (void)initialize;
+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (int)authorizationStatusForMediaType:(id)arg1;
+ (id)_devices;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)devicesWithMediaType:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueID;
- (BOOL)isOpen;
- (float)contrast;
- (void)close;
@property(readonly, nonatomic) NSString *localizedName;
- (int)position;
- (void)setContrast:(float)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (CDStruct_1ef3fb1f)maxH264VideoDimensions;
- (CDStruct_1ef3fb1f)maxH264PhotoDimensions;
- (id)AVVideoSettingsForSessionPreset:(id)arg1;
- (id)availableBoxedMetadataFormatDescriptions;
- (BOOL)smileDetectionEnabled;
- (BOOL)eyeClosedDetectionEnabled;
- (BOOL)eyeDetectionEnabled;
- (void)setSmileDetectionEnabled:(BOOL)arg1;
- (void)setEyeClosedDetectionEnabled:(BOOL)arg1;
- (void)setEyeDetectionEnabled:(BOOL)arg1;
- (id)supportedMetadataObjectIdentifiers;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)isLowLightBoostSupported;
- (BOOL)isRawStillImageCaptureSupported;
- (BOOL)isHDRSupported;
- (void)cancelVideoZoomRamp;
- (BOOL)isRampingVideoZoom;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (void)setVideoZoomFactor:(float)arg1;
- (float)videoZoomFactor;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (void)setVideoHDREnabled:(BOOL)arg1;
- (BOOL)isVideoHDREnabled;
- (void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)arg1;
- (BOOL)automaticallyAdjustsVideoHDREnabled;
- (void)setImageControlMode:(int)arg1;
- (int)imageControlMode;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (CDStruct_d6531dd4)deviceWhiteBalanceGainsForTemperatureAndTintValues:(CDStruct_b2fbf00d)arg1;
- (CDStruct_b2fbf00d)temperatureAndTintValuesForDeviceWhiteBalanceGains:(CDStruct_d6531dd4)arg1;
- (CDStruct_d6531dd4)deviceWhiteBalanceGainsForChromaticityValues:(CDStruct_b2fbf00d)arg1;
- (CDStruct_b2fbf00d)chromaticityValuesForDeviceWhiteBalanceGains:(CDStruct_d6531dd4)arg1;
- (void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(CDStruct_d6531dd4)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (float)maxWhiteBalanceGain;
- (CDStruct_d6531dd4)grayWorldDeviceWhiteBalanceGains;
- (CDStruct_d6531dd4)deviceWhiteBalanceGains;
- (BOOL)isAdjustingWhiteBalance;
- (void)setWhiteBalanceMode:(int)arg1;
- (int)whiteBalanceMode;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (BOOL)isAdjustingExposure;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (float)maxExposureTargetBias;
- (float)minExposureTargetBias;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (void)setExposureModeCustomWithDuration:(CDStruct_1b6d18a9)arg1 ISO:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (float)ISODigitalThreshold;
- (float)ISO;
- (CDStruct_1b6d18a9)exposureDuration;
- (void)setExposurePointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)exposurePointOfInterest;
- (BOOL)isExposurePointOfInterestSupported;
- (void)setExposureMode:(int)arg1;
- (int)exposureMode;
- (BOOL)isExposureModeSupported:(int)arg1;
- (float)lensAperture;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (float)lensPosition;
- (void)setSmoothAutoFocusEnabled:(BOOL)arg1;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isSmoothAutoFocusSupported;
- (void)setAutoFocusRangeRestriction:(int)arg1;
- (int)autoFocusRangeRestriction;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (void)setFocusPointOfInterest:(struct CGPoint)arg1;
- (BOOL)isAdjustingFocus;
- (struct CGPoint)focusPointOfInterest;
- (BOOL)isFocusPointOfInterestSupported;
- (void)setFocusMode:(int)arg1;
- (int)focusMode;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id *)arg2;
- (void)setTorchMode:(int)arg1;
- (int)torchMode;
- (BOOL)isTorchActive;
- (BOOL)isTorchAvailable;
- (BOOL)isTorchModeSupported:(int)arg1;
- (float)torchLevel;
- (BOOL)hasTorch;
- (void)setFlashMode:(int)arg1;
- (int)flashMode;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)hasFlash;
- (BOOL)open:(id *)arg1;
- (void)unlockForConfiguration;
- (BOOL)lockForConfiguration:(id *)arg1;
- (BOOL)isLockedForConfiguration;
- (struct OpaqueCMClock *)deviceClock;
- (BOOL)isActiveVideoMaxFrameDurationSet;
@property(nonatomic) CDStruct_1b6d18a9 activeVideoMaxFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 activeVideoMinFrameDuration;
@property(retain, nonatomic) AVCaptureDeviceFormat *activeFormat;
@property(readonly, nonatomic) NSArray *formats;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1;
- (void)_setVideoHDREnabled:(BOOL)arg1;
- (BOOL)cachesFigCaptureSourceConfigurationChanges;
- (void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)arg1;
- (BOOL)isHighDynamicRangeScene;
- (void)setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1;
- (BOOL)isHighDynamicRangeSceneDetectionEnabled;
- (BOOL)isHighDynamicRangeSceneDetectionSupported;
- (void)setProvidesStortorgetMetadata:(BOOL)arg1;
- (BOOL)providesStortorgetMetadata;
- (int)faceRectangleAngle;
- (struct CGRect)faceRectangle;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)isFaceDetectionSupported;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (BOOL)hasMediaType:(id)arg1;
@property(readonly, nonatomic) NSString *modelID;
- (BOOL)isSmileDetectionSupported;
- (BOOL)isEyeClosedDetectionSupported;
- (BOOL)isEyeDetectionSupported;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id *)arg1;
- (void)_stopUsingDevice;
- (BOOL)_startUsingDevice:(id *)arg1;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
- (BOOL)isActiveVideoMinFrameDurationSet;
- (void)_setActiveVideoMaxFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)_setActiveVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (BOOL)isVideoStabilizationSupported;

@end

