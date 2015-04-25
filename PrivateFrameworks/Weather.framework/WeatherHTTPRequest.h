//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSMutableData, NSMutableURLRequest, NSString, NSURLConnection;

@interface WeatherHTTPRequest : NSObject <NSURLConnectionDataDelegate>
{
    NSMutableData *_rawData;
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
}

+ (void)saveDebugString;
+ (void)appendDebugString:(id)arg1;
- (id)aggregateDictionaryDomain;
- (void)request:(id)arg1 receivedResponseData:(id)arg2;
- (void)failWithError:(id)arg1;
- (id)connection;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)isLoading;
- (void)loadRequest:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

