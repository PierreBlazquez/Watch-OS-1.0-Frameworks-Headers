//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h"
#import "AVAssetWriterFinishWritingHelperDelegate.h"

@class AVAssetWriterFigAssetWriterNotificationHandler, AVWeakReference, NSString;

@interface AVAssetWriterAsynchronousFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate>
{
    CDUnknownBlockType _handler;
    int _handlerCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    AVWeakReference *_weakReferenceToHelper;
    AVWeakReference *_weakReferenceToSelf;
}

- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)_callHandlerIfNotCalled;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;
- (void)finishWritingHelperDidFail:(id)arg1;
- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2;
- (BOOL)shouldHelperPrepareInputs;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

