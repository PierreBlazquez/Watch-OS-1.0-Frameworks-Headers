//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVPlayerItemInternal, NSArray, NSDate, NSError, NSString;

@interface AVPlayerItem : NSObject <NSCopying>
{
    AVPlayerItemInternal *_playerItem;
}

+ (void)initialize;
+ (id)playerItemWithAsset:(id)arg1;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversOfTracks;
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (BOOL)automaticallyNotifiesObserversOfAsset;
+ (BOOL)automaticallyNotifiesObserversOfStatus;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+ (BOOL)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (BOOL)automaticallyNotifiesObserversOfVariantIndex;
+ (BOOL)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+ (id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
+ (struct OpaqueCMTimebase *)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (id)playerItemWithURL:(id)arg1;
- (id)loadedTimeRanges;
- (BOOL)hasEnabledVideo;
- (BOOL)hasEnabledAudio;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (id)tracks;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (id)seekableTimeRanges;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDStruct_1b6d18a9)currentTime;
- (id)errorLog;
- (id)accessLog;
- (void)addOutput:(id)arg1;
@property(copy, nonatomic) NSString *dataYouTubeID;
- (void)removeOutput:(id)arg1;
- (void)finalize;
@property(nonatomic) unsigned int restrictions;
@property(readonly, nonatomic) NSError *error;
- (struct CGSize)presentationSize;
@property(readonly, nonatomic) int status;
- (id)asset;
- (id)initWithAsset:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void *)arg4;
- (id)initWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (CDStruct_1b6d18a9)_duration;
- (CDStruct_1b6d18a9)duration;
- (id)delegate;
- (id)description;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (long long)_availableFileSize;
@property(copy, nonatomic) NSString *mediaKind;
- (void)setPlaybackLikelyToKeepUpTrigger:(int)arg1;
- (BOOL)isPlaybackBufferFull;
- (BOOL)isPlaybackLikelyToKeepUp;
- (BOOL)canPlayFastReverse;
- (BOOL)canPlayFastForward;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (float)soundCheckVolumeNormalization;
- (void)_setRampInOutInfo:(id)arg1;
- (void)_setAudibleDRMInfo:(id)arg1;
- (void)setGaplessInfo:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (id)_seekableTimeRanges;
- (void)setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;
- (BOOL)seekToDate:(id)arg1;
- (id)currentDate;
- (long long)_fileSize;
- (void)setLimitReadAhead:(BOOL)arg1;
- (BOOL)limitReadAhead;
- (id)timedMetadata;
- (id)_player;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4;
- (id)_metadataOutputForKey:(id)arg1;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(CDStruct_1b6d18a9)arg4 withLegibleOutputsDictionaryKey:(id)arg5;
- (id)_legibleOutputForKey:(id)arg1;
- (id)_mediaKind;
- (void)_removeMetadataOutput:(id)arg1;
- (void)_removeLegibleOutput:(id)arg1;
- (void)_removeVideoOutput:(id)arg1;
- (void)_addMetadataOutput:(id)arg1;
- (void)_addLegibleOutput:(id)arg1;
- (void)_addVideoOutput:(id)arg1;
- (id)_metadataOutputsForKeys;
@property(readonly, nonatomic) NSDate *_rentalPlaybackExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalPlaybackStartedDate;
@property(readonly, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;
@property(readonly, nonatomic) NSDate *_rentalExpirationDate;
@property(readonly, nonatomic) NSDate *_rentalStartDate;
@property(readonly, nonatomic, getter=_isRental) BOOL _rental;
@property(nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;
- (id)_isExternalProtectionRequiredForPlaybackInternal;
@property(readonly, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;
@property(readonly, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;
- (void)setRequiresAccessLog:(BOOL)arg1;
- (void)_renderingSuppressionDidChangeForOutput:(id)arg1;
- (void)setMaximumBitRate:(float)arg1;
- (float)maximumBitRate;
- (void)setAllowProgressiveSwitchUp:(BOOL)arg1;
- (void)setNetworkUsuallyExceedsMaxBitRate:(BOOL)arg1;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary *)arg1;
- (void)_addSyncLayer:(id)arg1;
- (void)_removeSyncLayer:(id)arg1;
- (struct OpaqueFigCPEProtector *)_figCPEProtector;
- (void)setVariantIndex:(int)arg1;
- (int)variantIndex;
- (id)playabilityMetrics;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (BOOL)isPlaybackBufferEmpty;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setSeekingWaitsForVideoCompositionRendering:(BOOL)arg1;
- (void)setWillNeverSeekBackwardsHint:(BOOL)arg1;
- (BOOL)willNeverSeekBackwardsHint;
- (int)playbackLikelyToKeepUpTrigger;
- (void)setAlwaysMonitorsPlayability:(BOOL)arg1;
- (BOOL)alwaysMonitorsPlayability;
- (void)setMaximumTrailingBufferDuration:(CDStruct_1b6d18a9)arg1;
- (void)setAllowsExtendedReadAhead:(BOOL)arg1;
- (void)setRTCReportingFlags:(unsigned int)arg1;
- (void)stepByCount:(int)arg1;
- (void)setInitialEstimatedDate:(id)arg1;
- (id)currentEstimatedDate;
- (void)setInitialDate:(id)arg1;
- (BOOL)canStepBackward;
- (BOOL)canStepForward;
- (BOOL)canPlaySlowReverse;
- (BOOL)canPlaySlowForward;
- (BOOL)canPlayReverse;
- (id)_trackWithTrackID:(int)arg1;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 basedOnOutputs:(id)arg2;
- (id)_legibleOutputsForKeys;
- (id)_videoOutputs;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)_setSuppressesVideoLayers:(BOOL)arg1;
- (BOOL)_suppressionForOutputs:(id)arg1;
- (void)_clearCachedMediaSelectionGroup:(id)arg1;
- (void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (void)_selectMediaOption:(id)arg1 inNonStreamingGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_selectMediaOption:(id)arg1 inStreamingGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2;
- (void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (id)_loadedTimeRanges;
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1;
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1;
- (id)_audioTimePitchAlgorithm;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2;
- (id)audioTimePitchAlgorithm;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1 forTrackID:(int)arg2;
- (void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2;
- (BOOL)_continuesPlayingDuringPrerollForRateChange;
- (BOOL)_continuesPlayingDuringPrerollForSeek;
- (BOOL)_willNeverSeekBackwardsHint;
- (int)_playbackLikelyToKeepUpTrigger;
- (BOOL)_alwaysMonitorsPlayability;
- (BOOL)_limitReadAhead;
- (struct OpaqueCMTimebase *)_copyTimebase;
- (CDStruct_1b6d18a9)_reversePlaybackEndTime;
- (CDStruct_1b6d18a9)_forwardPlaybackEndTime;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(BOOL)arg2;
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_CreateSeekID;
- (BOOL)_canStepBackward;
- (BOOL)_canStepForward;
- (BOOL)_canPlaySlowReverse;
- (BOOL)_canPlaySlowForward;
- (BOOL)_canPlayReverse;
- (BOOL)_isAFileBasedItemThatsReadyToPlay;
- (BOOL)_canPlayFastReverse;
- (BOOL)_canPlayFastForward;
- (void)_invokeReadyForEnqueueingHandlers;
- (void)_informObserversAboutAvailabilityOfPresentationSize;
- (void)_informObserversAboutAvailabilityOfTracks;
- (void)_kickAssetObserversIfAppropriate;
- (void)_informObserversAboutAvailabilityOfDuration:(CDStruct_1b6d18a9)arg1;
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(CDStruct_1b6d18a9)arg1;
- (id)_tracksFromAssetTrackIDs;
- (id)_tracksWithFPTrackIDArray:(id)arg1;
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)arg1;
- (BOOL)_isCurrentPlayerItem;
- (struct CGSize)_presentationSize;
- (BOOL)_hasEnabledAudio;
- (void)_makeNewAssetWithFigPlaybackItem;
- (void)_setAssetWithFigPlaybackItem:(id)arg1;
- (void)_addFAListeners;
- (void)_createPlayerConnection:(id)arg1 shouldAppendItem:(BOOL)arg2;
- (void)_attachToFigPlayer;
- (BOOL)_isNonForcedSubtitleDisplayEnabled;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_evaluateMetadataOutputs;
- (void)_evaluateLegibleOutputs;
- (void)_evaluateVideoOutputs;
- (id)_cachedTracks;
- (void)_quietlySetNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)arg1;
- (void)_quietlySetWillNeverSeekBackwardsHint:(BOOL)arg1;
- (void)_quietlySetPlaybackLikelyToKeepUpTrigger:(int)arg1;
- (void)_quietlySetAllowsExtendedReadAhead:(BOOL)arg1;
- (void)_quietlySetLimitReadAhead:(BOOL)arg1;
- (void)_configurePlaybackItem;
- (void)_setPlayerConnection:(id)arg1;
- (void)_quietlySetRTCReportingFlags:(unsigned int)arg1;
- (void)_quietlySetMaximumTrailingBufferDuration:(CDStruct_1b6d18a9)arg1;
- (void)_updateTimebase;
- (void)_setSyncLayersOnFigPlaybackItem:(id)arg1;
- (void)_quietlySetServiceIdentifier:(id)arg1;
- (void)_quietlySetRestrictions:(unsigned int)arg1;
- (void)_quietlySetMediaKind:(id)arg1;
- (void)_applyTextStyleRules;
- (void)_applyMediaSelectionOptions;
- (void)_quietlySetFigTimePitchAlgorithm:(struct __CFString *)arg1;
- (void)_quietlySetVolumeAdjustment:(float)arg1;
- (void)_quietlySetSoundCheckVolumeNormalization:(float)arg1;
- (void)_quietlySetVariantIndex:(int)arg1;
- (void)_quietlySetPlaybackProperties:(id)arg1;
- (id)_playbackProperties;
- (void)_quietlySetEQPreset:(int)arg1;
- (void)_applySeekingWaitsForVideoCompositionRendering;
- (void)_applyNewAudioMix:(id)arg1 oldAudioMix:(id)arg2;
- (void)_setVideoCompositor:(void *)arg1;
- (void)_setVideoCompositionInstructions:(id)arg1;
- (void)_setVideoCompositionRenderScale:(float)arg1;
- (void)_setVideoCompositionRenderSize:(struct CGSize)arg1;
- (void)_setVideoCompositionFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)_quietlySetSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)_quietlySetMinimumIntervalForIFrameOnlyPlayback:(CDStruct_1b6d18a9)arg1;
- (void)_quietlySetUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)arg1;
- (void)_quietlySetReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)_quietlySetForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)setSavesDownloadedDataToDiskWhenDone:(BOOL)arg1;
- (id)_URL;
- (void)setNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (BOOL)isNonForcedSubtitleDisplayEnabled;
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)setMinimumIntervalForIFrameOnlyPlayback:(CDStruct_1b6d18a9)arg1;
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)arg1;
- (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)arg1;
- (BOOL)continuesPlayingDuringPrerollForSeek;
- (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1;
- (BOOL)continuesPlayingDuringPrerollForRateChange;
- (void)setVolumeAdjustment:(float)arg1;
@property(copy, nonatomic) NSString *serviceIdentifier;
- (void)setReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (void)setTextStyleRules:(id)arg1;
- (void)setAudioMix:(id)arg1;
- (void)_removeFAListeners;
- (void)_setAsset:(id)arg1;
- (void)_setURL:(id)arg1;
- (void)_createPlayerItemInternal;
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
- (unsigned int)RTCReportingFlags;
- (BOOL)requiresAccessLog;
- (float)volumeAdjustment;
- (id)gaplessInfo;
- (id)textStyleRules;
- (BOOL)seekingWaitsForVideoCompositionRendering;
- (id)audioMix;
- (double)preferredPeakBitRate;
- (BOOL)allowProgressiveSwitchUp;
- (BOOL)networkUsuallyExceedsMaxBitRate;
- (BOOL)savesDownloadedDataToDiskWhenDone;
- (float)speedThresholdForIFrameOnlyPlayback;
- (CDStruct_1b6d18a9)minimumIntervalForIFrameOnlyPlayback;
- (BOOL)usesIFrameOnlyPlaybackForHighRateScaledEdits;
- (CDStruct_1b6d18a9)maximumTrailingBufferDuration;
- (BOOL)allowsExtendedReadAhead;
- (id)initialEstimatedDate;
- (id)initialDate;
- (CDStruct_1b6d18a9)reversePlaybackEndTime;
- (id)automaticallyLoadedAssetKeys;
- (void)cancelPendingSeeks;
- (void)_setTimedMetadata:(id)arg1;
- (BOOL)_hasEnabledVideo;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_fpNotificationNames;
- (struct OpaqueCMTimebase *)timebase;
- (BOOL)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeFromItems;
- (void)_dequeueFromPlayer;
- (id)_previousItem;
- (void)_insertAfterItem:(id)arg1;
- (void)_attachToPlayer:(id)arg1;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_nextItem;
- (id)_propertyStorage;
- (void)_addFPListeners;
- (id)_playerConnection;
- (void)_enqueueWithPlayer:(id)arg1 shouldAppendItem:(BOOL)arg2;
- (struct OpaqueFigPlaybackItem *)_copyFigPlaybackItem;
- (struct OpaqueCMTimebase *)_copyProxyTimebase;
- (void)_setIsCurrentPlayerItem:(BOOL)arg1;
- (BOOL)_suppressesVideoLayers;
- (id)_preferredPixelBufferAttributes;
- (void)_playerChangeStatusToFailedWithError:(id)arg1;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_removeFPListeners;
- (id)customVideoCompositor;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (id)_tracks;
- (id)_weakReference;
- (id)_stateDispatchQueue;
- (id)_cachedValueForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *outputs;

@end
