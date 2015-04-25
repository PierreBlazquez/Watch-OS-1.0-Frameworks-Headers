//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FigXPCCoding.h"
#import "NSCopying.h"

@class FigCaptureSourceFormat, NSDictionary, NSString;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString *_sourceID;
    struct OpaqueFigCaptureSource *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
    FigCaptureSourceFormat *_requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _imageControlMode;
    BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
    BOOL _applyMaxIntegrationTimeOverrideWhenAvailable;
    NSDictionary *_faceDetectionConfiguration;
    BOOL _sensorHDREnabled;
}

+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceType:(int)arg1;
+ (void)initialize;
- (id)_sourceAttributes;
- (id)_sourceUID;
- (int)_sourceToken;
- (BOOL)_isCameraSource;
- (id)copyXPCEncoding;
@property(copy, nonatomic) NSDictionary *faceDetectionConfiguration; // @synthesize faceDetectionConfiguration=_faceDetectionConfiguration;
@property(nonatomic) BOOL sensorHDREnabled; // @synthesize sensorHDREnabled=_sensorHDREnabled;
@property(nonatomic) BOOL applyMaxIntegrationTimeOverrideWhenAvailable; // @synthesize applyMaxIntegrationTimeOverrideWhenAvailable=_applyMaxIntegrationTimeOverrideWhenAvailable;
@property(nonatomic) float requiredMinFrameRate; // @synthesize requiredMinFrameRate=_requiredMinFrameRate;
@property(nonatomic) float requiredMaxFrameRate; // @synthesize requiredMaxFrameRate=_requiredMaxFrameRate;
@property(readonly, nonatomic) int sourcePosition;
@property(retain, nonatomic) FigCaptureSourceFormat *requiredFormat; // @synthesize requiredFormat=_requiredFormat;
- (id)initWithXPCEncoding:(id)arg1;
@property(readonly, nonatomic) struct OpaqueFigCaptureSource *source;
@property(readonly, nonatomic) int sourceType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSource:(struct OpaqueFigCaptureSource *)arg1;
- (id)initWithSourceType:(int)arg1;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(nonatomic) float videoZoomRampAcceleration; // @synthesize videoZoomRampAcceleration=_videoZoomRampAcceleration;
@property(nonatomic) BOOL automaticallyEnablesLowLightBoostWhenAvailable; // @synthesize automaticallyEnablesLowLightBoostWhenAvailable=_automaticallyEnablesLowLightBoostWhenAvailable;
@property(nonatomic) float videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property(nonatomic) int imageControlMode; // @synthesize imageControlMode=_imageControlMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

