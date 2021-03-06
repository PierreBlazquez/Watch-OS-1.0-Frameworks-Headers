//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDataDelegatePrivate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

@interface MMCSHTTPSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate>
{
    BOOL _isBackground;
    NSString *_sessionName;
    NSString *_sessionConfigurationId;
    NSURLSession *_urlSession;
    NSURLSessionConfiguration *_urlSessionConfiguration;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_contextsForTasks;
}

@property BOOL isBackground; // @synthesize isBackground=_isBackground;
@property(retain, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration; // @synthesize urlSessionConfiguration=_urlSessionConfiguration;
- (id)mmcsHTTPContextForTask:(id)arg1 reason:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *contextsForTasks; // @synthesize contextsForTasks=_contextsForTasks;
@property(retain, nonatomic) NSString *sessionConfigurationId; // @synthesize sessionConfigurationId=_sessionConfigurationId;
@property(retain, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
- (id)initWithName:(id)arg1 sessionConfigurationId:(id)arg2 configuration:(id)arg3;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (id)dataTaskWithRequest:(id)arg1 uuid:(id)arg2 forHTTPContext:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, copy) NSString *description;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invalidateAndCancel;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

