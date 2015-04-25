//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURLSessionConfiguration;

@interface NSURLSession : NSObject
{
    BOOL _invalid;
    BOOL __isSharedSession;
    NSOperationQueue *_delegateQueue;
    id <NSURLSessionDelegate> _delegate;
    NSString *_sessionDescription;
    NSURLSessionConfiguration *__local_immutable_configuration;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSOperationQueue *_realDelegateQueue;
    CDUnknownBlockType __connBlock;
}

+ (void)_sendPendingCallbacksForSessionIdentifier:(id)arg1;
+ (void)_releaseProcessAssertionForSessionIdentifier:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1;
+ (void)_obliterateAllBackgroundSessionsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_getActiveSessionIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sharedSession;
@property(readonly, copy) NSURLSessionConfiguration *configuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain) id <NSURLSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy) CDUnknownBlockType _connBlock; // @synthesize _connBlock=__connBlock;
@property(retain) NSOperationQueue *realDelegateQueue; // @synthesize realDelegateQueue=_realDelegateQueue;
@property BOOL invalid; // @synthesize invalid=_invalid;
@property(copy) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
- (void)delegate_streamTask:(id)arg1 didCreateInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)can_delegate_streamTask_didCreateInputStreamoutputStream;
- (id)streamTaskForHost:(id)arg1 port:(int)arg2 tls:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)streamTaskForHost:(id)arg1 port:(int)arg2 tls:(_Bool)arg3;
- (id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishTasksAndInvalidate;
- (void)invalidateAndCancel;
- (BOOL)isBackgroundSession;
- (id)_copyConfiguration;
- (BOOL)can_delegate_task_actually_didCompleteWithError;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithRequest:(id)arg1;
@property BOOL _isSharedSession; // @synthesize _isSharedSession=__isSharedSession;
@property NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (BOOL)can_delegate_AVAssetDownloadTask_didWriteData;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithError:(id)arg2;
- (BOOL)can_delegate_task_isWaitingForConnectionWithError;
- (void)delegate_didFinishEventsForBackgroundURLSession;
- (BOOL)can_delegate_didFinishEventsForBackgroundURLSession;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (BOOL)can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
- (void)delegate_willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2;
- (BOOL)can_delegate_willRetryBackgroundDataTask;
@property(retain) NSURLSessionConfiguration *_local_immutable_configuration; // @synthesize _local_immutable_configuration=__local_immutable_configuration;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (BOOL)can_delegate_downloadTask_didResumeAtOffset;
- (void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)can_delegate_downloadTask_didReceiveResponse;
- (void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_downloadTask_didFinishDownloadingToURL;
- (void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)can_delegate_downloadTask_didWriteData;
- (int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2;
- (BOOL)can_delegate_openFileAtPath;
- (id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1;
- (BOOL)can_delegate_downloadTaskNeedsDownloadDirectory;
- (void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (BOOL)can_delegate_task_didSendBodyData;
- (void)delegate_task:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2;
- (BOOL)can_delegate_task_conditionalRequirementsChanged;
- (void)delegate_task_isWaitingForConnection:(id)arg1;
- (BOOL)can_delegate_task_isWaitingForConnection;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithReason:(long long)arg2;
- (BOOL)can_delegate_task_isWaitingForConnectionWithReason;
- (void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_task_willSendRequestForEstablishedConnection;
- (void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_dataTask_didReceiveData;
- (void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2;
- (BOOL)can_delegate_task_didCompleteWithError;
- (void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_dataTask_willCacheResponse;
- (void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_task_didReceiveChallenge;
- (void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)can_delegate_didReceiveChallenge;
- (void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)can_delegate_task_willPerformHTTPRedirection;
- (void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_dataTask_didBecomeStreamTask;
- (BOOL)can_delegate_dataTask_didBecomeDownloadTask;
- (void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)can_delegate_dataTask_didReceiveResponse;
- (void)finalizeDelegateWithError:(id)arg1;
- (void)addDelegateBlock:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)delegate_task:(id)arg1 needNewBodyStream:(CDUnknownBlockType)arg2;
- (BOOL)can_delegate_task_needNewBodyStream;

@end

