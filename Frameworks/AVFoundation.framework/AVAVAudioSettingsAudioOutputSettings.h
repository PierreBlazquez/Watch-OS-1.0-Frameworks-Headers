//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAudioOutputSettings.h>

#import "AVDecodedAudioSettingsForFig.h"
#import "AVReencodedAudioSettingsForFig.h"

@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>
{
}

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (id)audioOptions;
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned int *)arg2;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned long)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;
- (BOOL)willYieldCompressedSamples;

@end

