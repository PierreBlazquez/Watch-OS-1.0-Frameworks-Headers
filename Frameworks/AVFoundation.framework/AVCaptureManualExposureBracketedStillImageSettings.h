//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings
{
    CDStruct_1b6d18a9 _exposureDuration;
    float _ISO;
}

+ (id)manualExposureSettingsWithExposureDuration:(CDStruct_1b6d18a9)arg1 ISO:(float)arg2;
- (id)description;
- (id)_initManualExposureSettingsWithExposureDuration:(CDStruct_1b6d18a9)arg1 ISO:(float)arg2;
@property(readonly) float ISO; // @synthesize ISO=_ISO;
@property(readonly) CDStruct_1b6d18a9 exposureDuration; // @synthesize exposureDuration=_exposureDuration;

@end

