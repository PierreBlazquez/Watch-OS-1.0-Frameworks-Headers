//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLSessionTaskDelegate.h"

@class NSCachedURLResponse, NSData, NSURLResponse, NSURLSession, NSURLSessionDataTask, NSURLSessionDownloadTask;

@protocol NSURLSessionDataDelegate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 willCacheResponse:(NSCachedURLResponse *)arg3 completionHandler:(void (^)(NSCachedURLResponse *))arg4;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didBecomeDownloadTask:(NSURLSessionDownloadTask *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(int))arg4;
@end

