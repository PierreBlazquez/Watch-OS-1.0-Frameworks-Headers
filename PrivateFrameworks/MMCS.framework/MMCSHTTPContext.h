//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"
#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDataDelegatePrivate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class MMCSDuetReporter, NSDictionary, NSInputStream, NSOperationQueue, NSOutputStream, NSString, NSURLSession, NSURLSessionDataTask;

@interface MMCSHTTPContext : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSStreamDelegate>
{
    BOOL _didOpen;
    BOOL _isValid;
    BOOL _isTaskDone;
    struct mmcs_http_context *_hc;
    NSURLSession *_urlSession;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSOperationQueue *_operationQueue;
    NSURLSessionDataTask *_dataTask;
    NSDictionary *_timingData;
    MMCSDuetReporter *_duetReporter;
}

+ (id)sharedMMCSHTTPSession;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(nonatomic) BOOL didOpen; // @synthesize didOpen=_didOpen;
- (long long)countOfRequestBodyBytesSent;
@property(retain, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
- (void)cleanupRequest;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) BOOL isTaskDone; // @synthesize isTaskDone=_isTaskDone;
@property(retain, nonatomic) MMCSDuetReporter *duetReporter; // @synthesize duetReporter=_duetReporter;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (BOOL)createNewRequestBodyInputStream;
@property(nonatomic) struct mmcs_http_context *hc; // @synthesize hc=_hc;
- (void)invalidateStreamPair;
- (BOOL)requestBodyCanAcceptData;
- (void)requestBodyDone;
- (int)writeRequestBody:(const char *)arg1 maxLength:(unsigned int)arg2;
- (void)cleanupResponse;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
- (void).cxx_destruct;
- (BOOL)send;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithContext:(struct mmcs_http_context *)arg1 options:(const struct mmcs_http_context_options *)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

