//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterInputHelper.h>

#import "AVAssetWriterInputMediaDataRequesterDelegate.h"

@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate>
{
    int _terminalStatus;
    BOOL _didRequestMediaDataOnce;
}

- (int)status;
- (BOOL)mediaDataRequesterShouldRequestMediaData:(id)arg1;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1;
- (void)markCurrentPassAsFinished;
- (void)markAsFinished;
- (BOOL)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;
- (BOOL)isReadyForMoreMediaData;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalStatus:(int)arg2;
- (id)initWithConfigurationState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

