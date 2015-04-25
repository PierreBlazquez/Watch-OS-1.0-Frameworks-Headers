//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVFigObjectInspector.h>

#import "AVAsynchronousKeyValueLoading.h"

@class AVWeakReference, NSArray, NSDictionary, NSLocale, NSString;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading>
{
    AVWeakReference *_weakReference;
    long _synthesizeMediaCharacteristicsOnce;
    NSArray *_cachedMediaCharacteristics;
}

+ (id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
@property(readonly, nonatomic) long long totalSampleDataLength;
@property(readonly, nonatomic) NSString *extendedLanguageTag;
@property(readonly, nonatomic) int trackID;
@property(readonly, nonatomic) NSString *mediaType;
@property(readonly, nonatomic) NSArray *commonMetadata;
@property(readonly, nonatomic) float nominalFrameRate;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)statusOfValueForKey:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL hasProtectedContent;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) NSArray *formatDescriptions;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) struct CGSize dimensions;
@property(readonly, nonatomic) NSLocale *locale;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, nonatomic) int layer;
- (void)dealloc;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable;
@property(readonly, nonatomic, getter=_figMediaType) unsigned long figMediaType;
@property(readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;
@property(readonly, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) BOOL excludedFromAutoselectionInTrackGroup;
@property(readonly, nonatomic) int alternateGroupID;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, copy, nonatomic) NSArray *segments;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minSampleDuration;
@property(readonly, nonatomic) NSDictionary *loudnessInfo;
@property(readonly, nonatomic) float estimatedDataRate;
@property(readonly, nonatomic) BOOL requiresFrameReordering;
@property(readonly, nonatomic) CDStruct_e83c9415 mediaDecodeTimeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 mediaPresentationTimeRange;
@property(readonly, nonatomic) NSArray *mediaCharacteristics;
@property(readonly, nonatomic, getter=isSelfContained) BOOL selfContained;
@property(readonly, nonatomic) long playabilityValidationResult;
@property(readonly, nonatomic, getter=_figAssetTrack) struct OpaqueFigAssetTrack *figAssetTrack;
@property(readonly, nonatomic, getter=_figTrackReader) struct OpaqueFigTrackReader *figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (id)_initWithAsset:(id)arg1 trackIndex:(long)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_weakReference;
- (id)metadataForFormat:(id)arg1;
@property(readonly, nonatomic) NSArray *availableMetadataFormats;
@property(readonly, nonatomic) int naturalTimeScale;
@property(readonly, nonatomic) float preferredVolume;

@end

