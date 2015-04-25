//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMediaStream/MSCupidStateMachine.h>

#import "MSPublishStorageProtocolDelegate.h"
#import "MSPublishStreamsProtocolDelegate.h"
#import "MSPublisher.h"

@class MSMediaStreamDaemon, MSObjectQueue, MSPublishStreamsProtocol, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate>
{
    id <MSPublisherDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
    int _state;
    MSObjectQueue *_uploadQueue;
    MSObjectQueue *_derivativesQueue;
    MSObjectQueue *_quarantinedQueue;
    NSArray *_pendingDerivativesQueue;
    NSMutableArray *_requestAuthQueue;
    unsigned int _sendingQueueCount;
    NSMutableArray *_sendingQueue;
    NSMutableDictionary *_fileHashToAssetMap;
    MSPublishStreamsProtocol *_protocol;
    id <MSPublishStorageProtocol> _storageProtocol;
    NSURL *_storageProtocolURL;
    NSMutableArray *_tempFiles;
    NSMutableDictionary *_maxSizeByUTI;
    long long _publishTargetByteCount;
    int _publishBatchSize;
    int _maxErrorCount;
}

+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)_clearInstantiatedPublishersByPersonID;
+ (void)forgetPersonID:(id)arg1;
+ (void)stopAllActivities;
+ (id)existingPublisherForPersonID:(id)arg1;
+ (id)publisherForPersonID:(id)arg1;
+ (BOOL)isInRetryState;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDate;
- (void)abort;
@property(nonatomic) long long publishTargetByteCount; // @synthesize publishTargetByteCount=_publishTargetByteCount;
@property(retain, nonatomic) NSURL *storageProtocolURL; // @synthesize storageProtocolURL=_storageProtocolURL;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
- (void)_forget;
- (void)_removeAssetFromFileHashMap:(id)arg1;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
@property(nonatomic) int publishBatchSize; // @synthesize publishBatchSize=_publishBatchSize;
- (void)submitAssetCollectionsForPublication:(id)arg1;
- (void)_abort;
- (id)_abortedError;
- (void)_registerAllAssetsForWrapper:(id)arg1;
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(char *)arg2 setOutIsCounted:(char *)arg3 setOutIsFatal:(char *)arg4 setOutNeedsBackoff:(char *)arg5 setOutIsTemporary:(char *)arg6 setOutIsTokenAuth:(char *)arg7 setOutIsAuthError:(char *)arg8;
- (void)_quarantineOrDiscardWrappers:(id)arg1 withError:(id)arg2;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;
- (void)_addAssetToFileHashMap:(id)arg1;
- (id)_checkObjectWrappers:(id)arg1;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
- (void)_sendUploadComplete;
- (void)_sendFilesToMMCS;
- (void)_sendMetadataToStreams;
- (void)_requestDerivatives;
- (BOOL)_isAllowedToUpload;
- (id)_checkAssetCollectionFiles:(id)arg1;
- (id)_collectionWithNoDerivatives:(id)arg1;
- (BOOL)_verifyAssetFile:(id)arg1;
- (void)_registerAsset:(id)arg1;
- (void)_didFinishUsingAssetCollections:(id)arg1;
- (void)_updateMasterManifest;
- (void)_refreshServerSideConfiguredParameters;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (BOOL)_isInRetryState;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)computeHashForAsset:(id)arg1;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 outError:(id *)arg2;
- (BOOL)enqueueAssetCollections:(id)arg1 outError:(id *)arg2;
- (void)reenqueueQuarantinedAssetCollections;
- (int)_stop;
- (void)stop;
- (void).cxx_destruct;
- (void)deactivate;
@property(nonatomic) id <MSPublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)publish;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

