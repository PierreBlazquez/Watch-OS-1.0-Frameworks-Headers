//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISDataProvider, ISURLRequestPerformance, NSCountedSet, NSMutableData, NSURLConnection, NSURLRequest, NSURLResponse, SSAuthenticationContext, SSMutableURLRequestProperties, SSURLRequestProperties;

@interface ISURLOperation : ISOperation
{
    NSURLRequest *_activeURLRequest;
    SSAuthenticationContext *_authenticationContext;
    NSURLConnection *_connection;
    NSMutableData *_dataBuffer;
    ISDataProvider *_dataProvider;
    int _networkRetryCount;
    NSCountedSet *_redirectURLs;
    SSMutableURLRequestProperties *_requestProperties;
    NSURLResponse *_response;
    BOOL _shouldSetCookies;
    BOOL _usesPrivateCookieStore;
    ISURLRequestPerformance *_performanceMetrics;
    BOOL _loadsHTTPFailures;
    BOOL _uploadProgressRequested;
}

+ (BOOL)isSharedCacheStorageSession:(struct __CFURLStorageSession *)arg1;
+ (struct _CFURLCache *)sharedCFURLCache;
+ (struct __CFURLStorageSession *)newSharedCacheStorageSession;
+ (id)copyUserAgent;
@property(nonatomic, getter=isUploadProgressRequested) BOOL uploadProgressRequested; // @synthesize uploadProgressRequested=_uploadProgressRequested;
@property(getter=_usesPrivateCookieStore, setter=_setUsesPrivateCookieStore:) BOOL _usesPrivateCookieStore; // @synthesize _usesPrivateCookieStore;
@property(getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies; // @synthesize _shouldSetCookies;
@property(getter=_loadsHTTPFailures, setter=_setLoadsHTTPFailures:) BOOL _loadsHTTPFailures; // @synthesize _loadsHTTPFailures;
@property BOOL tracksPerformanceMetrics;
@property(readonly) ISURLRequestPerformance *performanceMetrics;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id *)arg2;
- (id)_copyConnectionPropertiesWithDataConnectionServiceType:(struct __CFString *)arg1;
- (BOOL)_runRequestWithURL:(id)arg1 dataConnectionServiceType:(struct __CFString *)arg2;
- (void)_logRequest:(id)arg1;
- (void)_sendRequestToDelegate:(id)arg1;
- (BOOL)_validateContentLength:(long long)arg1 error:(id *)arg2;
- (void)_sendContentLengthToDelegate:(long long)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_retry;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id *)arg2;
- (id)_errorWithDomain:(id)arg1 code:(int)arg2;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_logResponseBody:(id)arg1;
- (id)_decodedDataForData:(id)arg1;
- (void)_handleFinishedLoading;
- (BOOL)_isTrustExtendedValidation:(struct __SecTrust *)arg1;
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (id)_handleRedirectRequest:(id)arg1 response:(id)arg2;
- (BOOL)_shouldFollowRedirectWithRequest:(id)arg1 error:(id *)arg2;
- (id)_sanitizedStringForString:(id)arg1;
- (void)_handleReceivedResponse:(id)arg1;
- (void)_handleReceivedData:(id)arg1;
- (void)_stopConnection;
- (id)_errorWithDefaultStringsForError:(id)arg1;
- (id)_sanitizedDescriptionForObject:(id)arg1;
- (id)_copyAcceptLanguageString;
- (id)_accountIdentifier;
- (void)_setActiveURLRequest:(id)arg1;
- (id)newRequestWithURL:(id)arg1;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (id)_requestProperties;
- (id)_sanitizedURLForURL:(id)arg1;
- (id)_activeURL;
- (id)_copyAuthenticationContext;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)setRequest:(id)arg1;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(copy) SSURLRequestProperties *requestProperties;
- (void)_stopIfCancelled;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
- (void)handleResponse:(id)arg1;
@property(retain) ISDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)run;
- (id)request;
- (void)_run;
- (id)init;
- (void)dealloc;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)_updateProgress;

// Remaining properties
@property id <ISURLOperationDelegate> delegate; // @dynamic delegate;

@end

