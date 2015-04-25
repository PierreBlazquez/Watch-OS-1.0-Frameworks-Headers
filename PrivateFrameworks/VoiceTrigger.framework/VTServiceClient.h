//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface VTServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
}

- (void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2;
- (void)suggestVoiceTriggerThreshold:(int)arg1 withReason:(id)arg2;
- (void)resetAssertions;
- (void)reportEventWithAudioFile:(id)arg1 metaDataFile:(id)arg2;
- (void)getSiriLanguageCode:(CDUnknownBlockType)arg1;
- (void)feedbackWithReason:(unsigned char)arg1 atTime:(double)arg2;
- (id)_service;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

