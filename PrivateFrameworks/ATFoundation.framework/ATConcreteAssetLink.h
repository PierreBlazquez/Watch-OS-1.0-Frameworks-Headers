//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATAssetLink.h"
#import "ATMessageLinkObserver.h"

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver>
{
    id <ATMessageLink> _messageLink;
    BOOL _open;
    id <ATAssetLinkDelegate> _delegate;
    NSMutableArray *_outstandingAssets;
    NSMutableSet *_readers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (BOOL)open;
@property(readonly, nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
- (BOOL)linkIsReady;
- (unsigned int)maximumBatchSize;
- (BOOL)canEnqueueAsset:(id)arg1;
- (id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (id)initWithMessageLink:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)prioritizeAsset:(id)arg1;
- (void)messageLinkWasClosed:(id)arg1;
- (id)_urlForWritingAsset:(id)arg1 withFileName:(id)arg2;
- (void)_requestAsset:(id)arg1;
- (void).cxx_destruct;
- (unsigned int)priority;
- (void)close;
@property(nonatomic) __weak id <ATAssetLinkDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
