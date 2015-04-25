//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface MIPPlaybackInfo : PBCodable <NSCopying>
{
    long long _durationInSamples;
    long long _gaplessEncodingDrainCode;
    long long _gaplessFrameResyncCode;
    long long _gaplessHeuristicCode;
    long long _gaplessHeuristicDelayCode;
    long long _startTime;
    long long _stopTime;
    long long _volumeNormalizationEnergy;
    int _beatsPerMinute;
    int _bitRate;
    int _codecSubType;
    int _codecType;
    int _dataKind;
    NSString *_dataUrl;
    NSString *_eqPreset;
    NSString *_playbackFormat;
    int _progressionDirection;
    int _relativeVolume;
    int _sampleRate;
    struct {
        unsigned int durationInSamples:1;
        unsigned int gaplessEncodingDrainCode:1;
        unsigned int gaplessFrameResyncCode:1;
        unsigned int gaplessHeuristicCode:1;
        unsigned int gaplessHeuristicDelayCode:1;
        unsigned int startTime:1;
        unsigned int stopTime:1;
        unsigned int volumeNormalizationEnergy:1;
        unsigned int beatsPerMinute:1;
        unsigned int bitRate:1;
        unsigned int codecSubType:1;
        unsigned int codecType:1;
        unsigned int dataKind:1;
        unsigned int progressionDirection:1;
        unsigned int relativeVolume:1;
        unsigned int sampleRate:1;
    } _has;
}

@property(nonatomic) BOOL hasStartTime;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) long long durationInSamples; // @synthesize durationInSamples=_durationInSamples;
@property(nonatomic) int progressionDirection; // @synthesize progressionDirection=_progressionDirection;
@property(nonatomic) int beatsPerMinute; // @synthesize beatsPerMinute=_beatsPerMinute;
@property(nonatomic) long long volumeNormalizationEnergy; // @synthesize volumeNormalizationEnergy=_volumeNormalizationEnergy;
@property(nonatomic) long long stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int relativeVolume; // @synthesize relativeVolume=_relativeVolume;
@property(nonatomic) long long gaplessFrameResyncCode; // @synthesize gaplessFrameResyncCode=_gaplessFrameResyncCode;
@property(nonatomic) long long gaplessEncodingDrainCode; // @synthesize gaplessEncodingDrainCode=_gaplessEncodingDrainCode;
@property(nonatomic) long long gaplessHeuristicDelayCode; // @synthesize gaplessHeuristicDelayCode=_gaplessHeuristicDelayCode;
@property(nonatomic) long long gaplessHeuristicCode; // @synthesize gaplessHeuristicCode=_gaplessHeuristicCode;
@property(retain, nonatomic) NSString *playbackFormat; // @synthesize playbackFormat=_playbackFormat;
@property(retain, nonatomic) NSString *eqPreset; // @synthesize eqPreset=_eqPreset;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(nonatomic) int dataKind; // @synthesize dataKind=_dataKind;
@property(nonatomic) int codecSubType; // @synthesize codecSubType=_codecSubType;
@property(nonatomic) int codecType; // @synthesize codecType=_codecType;
@property(nonatomic) int bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) BOOL hasDurationInSamples;
@property(nonatomic) BOOL hasProgressionDirection;
@property(nonatomic) BOOL hasBeatsPerMinute;
@property(nonatomic) BOOL hasVolumeNormalizationEnergy;
@property(nonatomic) BOOL hasStopTime;
@property(nonatomic) BOOL hasSampleRate;
@property(nonatomic) BOOL hasRelativeVolume;
@property(nonatomic) BOOL hasGaplessFrameResyncCode;
@property(nonatomic) BOOL hasGaplessEncodingDrainCode;
@property(nonatomic) BOOL hasGaplessHeuristicDelayCode;
@property(nonatomic) BOOL hasGaplessHeuristicCode;
@property(readonly, nonatomic) BOOL hasPlaybackFormat;
@property(readonly, nonatomic) BOOL hasEqPreset;
@property(readonly, nonatomic) BOOL hasDataUrl;
@property(nonatomic) BOOL hasDataKind;
@property(nonatomic) BOOL hasCodecSubType;
@property(nonatomic) BOOL hasCodecType;
@property(nonatomic) BOOL hasBitRate;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

