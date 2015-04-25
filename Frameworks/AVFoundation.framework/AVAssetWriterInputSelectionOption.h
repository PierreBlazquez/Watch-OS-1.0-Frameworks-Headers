//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetWriterInput, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption
{
    AVAssetWriterInput *_input;
    NSString *_mediaType;
    NSDictionary *_outputSettings;
    struct opaqueCMFormatDescription *_sourceFormatHint;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    NSArray *_metadata;
    NSDictionary *_trackReferences;
    BOOL _displaysNonForcedSubtitles;
    BOOL _enabled;
}

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (void)finalize;
@property(readonly, nonatomic) NSString *extendedLanguageTag; // @synthesize extendedLanguageTag=_extendedLanguageTag;
- (BOOL)hasMediaCharacteristic:(id)arg1;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (id)commonMetadata;
@property(readonly, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (id)locale;
@property(readonly, nonatomic) AVAssetWriterInput *input; // @synthesize input=_input;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)mediaSubTypes;
- (BOOL)isPlayable;
@property(readonly, nonatomic) NSDictionary *trackReferences; // @synthesize trackReferences=_trackReferences;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)propertyList;
@property(readonly, nonatomic) BOOL displaysNonForcedSubtitles; // @synthesize displaysNonForcedSubtitles=_displaysNonForcedSubtitles;
- (BOOL)_isDesignatedDefault;
- (id)_ancillaryDescription;
- (BOOL)_isMainProgramContent;
- (BOOL)_isAuxiliaryContent;
- (id)_taggedCharacteristics;
- (BOOL)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2;
- (id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)initWithAssetWriterInput:(id)arg1;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint; // @synthesize sourceFormatHint=_sourceFormatHint;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;

@end

