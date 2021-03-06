//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVOutputSettingsAssistantInternal, NSDictionary, NSString;

@interface AVOutputSettingsAssistant : NSObject
{
    AVOutputSettingsAssistantInternal *_internal;
}

+ (id)outputSettingsAssistantWithPreset:(id)arg1;
+ (id)availableOutputSettingsPresets;
+ (BOOL)validatesSourceVideoMinFrameDuration;
+ (id)videoEncoderCapabilities;
+ (id)videoSettingsAdjusterForPreset:(id)arg1;
+ (id)baseSettingsProviderForPreset:(id)arg1;
+ (id)_allOutputSettingsPresets;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (void)setSourceVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setSourceVideoAverageFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setSourceVideoFormat:(struct opaqueCMFormatDescription *)arg1;
- (void)setSourceAudioFormat:(struct opaqueCMFormatDescription *)arg1;
- (id)initWithPreset:(id)arg1;
- (CDStruct_1b6d18a9)sourceVideoMinFrameDuration;
- (CDStruct_1b6d18a9)sourceVideoAverageFrameDuration;
- (struct opaqueCMFormatDescription *)sourceAudioFormat;
- (struct opaqueCMFormatDescription *)sourceVideoFormat;
@property(readonly, nonatomic) NSString *outputFileType;
@property(readonly, nonatomic) NSDictionary *videoSettings;
@property(readonly, nonatomic) NSDictionary *audioSettings;

@end

