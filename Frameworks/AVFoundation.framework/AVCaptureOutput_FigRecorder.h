//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureOutputInternal_FigRecorder, NSArray;

@interface AVCaptureOutput_FigRecorder : NSObject
{
    AVCaptureOutputInternal_FigRecorder *_outputInternal;
}

+ (void)initialize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)dealloc;
- (id)session;
@property(readonly, nonatomic) NSArray *connections;
- (void)bumpChangeSeed;
- (id)notReadyError;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)didStartForSessionWithoutGraphRebuild:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)firstEnabledConnectionForMediaType:(id)arg1;
- (void)updateMetadataTransformForCaptureOptions:(id)arg1;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (struct CGSize)outputSizeForCaptureOptions:(id)arg1;
- (id)_inputForConnection:(id)arg1;
- (int)changeSeed;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)connectionWithMediaType:(id)arg1;
- (void)setSession:(id)arg1;
- (id)liveConnections;

@end

