//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject
{
    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;
}

+ (void)initialize;
- (BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
@property(readonly) double preferredIOBufferDuration;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setCategory:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *category;
@property(readonly) NSString *mode;
@property id <AVAudioSessionDelegateMediaPlayerOnly> delegate;
- (id)init;
- (void)dealloc;
- (BOOL)setMode:(id)arg1 error:(id *)arg2;
- (BOOL)isApplicationAudioSession;
- (void)setApplicationAudioSession:(BOOL)arg1;
@property(readonly) int currentHardwareOutputNumberOfChannels;
@property(readonly) int currentHardwareInputNumberOfChannels;
@property(readonly) double currentHardwareSampleRate;
@property(readonly) BOOL inputIsAvailable;
@property(readonly) double preferredHardwareSampleRate;
- (BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id *)arg2;
- (BOOL)setActive:(BOOL)arg1 withFlags:(int)arg2 error:(id *)arg3;
- (void)_setFigPlayer:(struct OpaqueFigPlayer *)arg1;
- (void)_addFPListeners;
- (void)_removeFPListeners;
- (id)_weakReference;

@end

