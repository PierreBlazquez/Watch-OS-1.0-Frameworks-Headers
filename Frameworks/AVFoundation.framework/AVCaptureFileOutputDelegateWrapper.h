//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReferencingDelegateStorage, NSArray, NSURL;

@interface AVCaptureFileOutputDelegateWrapper : NSObject
{
    BOOL _recording;
    BOOL _paused;
    NSURL *_outputFileURL;
    NSArray *_metadata;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    NSArray *_connections;
    long long _settingsID;
}

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(retain) NSArray *metadata; // @synthesize metadata=_metadata;
- (void)dealloc;
@property(readonly) NSArray *connections; // @synthesize connections=_connections;
@property(nonatomic, getter=isRecording) BOOL recording; // @synthesize recording=_recording;
@property(readonly) long long settingsID; // @synthesize settingsID=_settingsID;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;
@property(readonly) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(readonly) AVWeakReferencingDelegateStorage *delegateStorage; // @synthesize delegateStorage=_delegateStorage;

@end
