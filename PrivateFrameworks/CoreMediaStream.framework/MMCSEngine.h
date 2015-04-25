//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSThread, NSTimer, NSURL;

@interface MMCSEngine : NSObject
{
    NSURL *_workPathURL;
    NSString *_appIDHeader;
    NSString *_dataClass;
    NSDictionary *_options;
    struct __MMCSEngine *_engine;
    struct {
        int version;
        void *context;
        CDUnknownFunctionPointerType getFileDescriptorAndContentTypeFromItemCallback;
        CDUnknownFunctionPointerType getItemProgressCallback;
        CDUnknownFunctionPointerType getItemDoneCallback;
        CDUnknownFunctionPointerType putItemProgressCallback;
        CDUnknownFunctionPointerType putItemDoneCallback;
        CDUnknownFunctionPointerType requestCompletedCallback;
    } _engineClientContext;
    NSMutableDictionary *_itemIDToAssetMap;
    NSObject<OS_dispatch_queue> *_itemIDToAssetMapQueue;
    NSMutableArray *_requestorContexts;
    NSObject<OS_dispatch_queue> *_reqestorContextQueue;
    NSMutableDictionary *_autoItemIDDictionary;
    NSURL *_autoItemIDPersistenceURL;
    NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;
    BOOL _autoGenerateItemID;
    BOOL _isMetricsGatheringEnabled;
    BOOL _isDone;
    id <MMCSEngineDelegate> _delegate;
    NSThread *_workThread;
    NSTimer *_threadKeepAliveTimer;
}

+ (id)logStringForGetItemState:(int)arg1;
+ (id)logStringForPutItemState:(int)arg1;
@property(retain, nonatomic) NSThread *workThread; // @synthesize workThread=_workThread;
@property(nonatomic) BOOL autoGenerateItemID; // @synthesize autoGenerateItemID=_autoGenerateItemID;
- (void)putAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (void)getAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (void)unregisterAsset:(id)arg1;
- (void)registerAssets:(id)arg1 forDownloadCompletionBlock:(CDUnknownBlockType)arg2;
- (void)reregisterAssetForDownload:(id)arg1;
- (void)reregisterAssetForUpload:(id)arg1;
- (void)registerAssetForUpload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelOperationsWithContext:(id)arg1;
- (void)_requestCompletedRequestorContext:(id)arg1;
- (void)_putItemDoneItemID:(unsigned long long)arg1 requestorContext:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)_putItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (void)_getItemDoneItemID:(unsigned long long)arg1 path:(id)arg2 requestorContext:(id)arg3 error:(id)arg4;
- (void)_getItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (BOOL)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)arg1 outFD:(int *)arg2 outItemType:(id *)arg3 outError:(id *)arg4;
@property(nonatomic) BOOL isMetricsGatheringEnabled; // @synthesize isMetricsGatheringEnabled=_isMetricsGatheringEnabled;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4;
- (void)_initItemIDPersistence;
- (void)_registerRequestorContext:(id)arg1;
- (void)_removeAssetForItemID:(unsigned long long)arg1;
- (unsigned long long)_nextItemID;
@property(retain, nonatomic) NSTimer *threadKeepAliveTimer; // @synthesize threadKeepAliveTimer=_threadKeepAliveTimer;
- (void)_removeRequestorContext:(id)arg1;
- (id)_assetWithItemID:(unsigned long long)arg1;
- (void)performBlockOnWorkThread:(CDUnknownBlockType)arg1;
- (void)_logLevel:(int)arg1 message:(id)arg2;
@property(nonatomic) BOOL isDone; // @synthesize isDone=_isDone;
- (void)_doNothingTimerHandler:(id)arg1;
- (void)performBlockOnWorkThread:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4 modes:(id)arg5;
- (void)threadMain:(id)arg1;
- (void)unregisterAssets:(id)arg1;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_registerAsset:(id)arg1;
@property(readonly, nonatomic) BOOL hasOutstandingActivity;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (BOOL)isActive;
@property(nonatomic) __weak id <MMCSEngineDelegate> delegate; // @synthesize delegate=_delegate;

@end
