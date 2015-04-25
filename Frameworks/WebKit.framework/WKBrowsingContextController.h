//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, WKBackForwardList, WKBrowsingContextHandle, _WKRemoteObjectRegistry;

@interface WKBrowsingContextController : NSObject
{
    struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate>> _historyDelegate;
    struct RefPtr<WebKit::WebPageProxy> _page;
    struct unique_ptr<PageLoadStateObserver, std::__1::default_delete<PageLoadStateObserver>> _pageLoadStateObserver;
    struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate>> _loadDelegate;
    struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate>> _policyDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
    unsigned int _observedRenderingProgressEvents;
}

+ (id)customSchemes;
+ (void)unregisterSchemeForCustomProtocol:(id)arg1;
+ (void)registerSchemeForCustomProtocol:(id)arg1;
+ (id)_browsingContextControllerForPageRef:(struct OpaqueWKPage *)arg1;
@property(readonly, nonatomic) WKBrowsingContextHandle *handle;
@property BOOL paginationBehavesLikeColumns;
@property(nonatomic) unsigned int observedRenderingProgressEvents; // @synthesize observedRenderingProgressEvents=_observedRenderingProgressEvents;
@property __weak id <WKBrowsingContextHistoryDelegate> historyDelegate;
@property __weak id <WKBrowsingContextPolicyDelegate> policyDelegate;
@property __weak id <WKBrowsingContextLoadDelegate> loadDelegate;
@property float pageZoom;
@property float textZoom;
@property(readonly) NSArray *certificateChain;
@property(readonly) NSURL *unreachableURL;
@property(readonly) NSURL *committedURL;
@property(readonly) NSURL *provisionalURL;
@property(readonly) NSURL *activeURL;
@property(copy) NSString *applicationNameForUserAgent;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3;
- (void)loadRequest:(id)arg1 userData:(id)arg2;
- (id)_initWithPageRef:(struct OpaqueWKPage *)arg1;
- (void)reloadFromOrigin;
@property(readonly) BOOL hasOnlySecureContent;
- (void)goToBackForwardListItem:(id)arg1;
@property(readonly) struct OpaqueWKPage *_pageRef;
@property(readonly, nonatomic) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property(readonly) double estimatedProgress;
@property(readonly, nonatomic) int processIdentifier;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
@property(copy) NSString *customUserAgent;
@property float gapBetweenPages;
@property float pageLength;
@property unsigned int paginationMode;
@property(readonly) BOOL canGoForward;
@property(readonly) BOOL canGoBack;
@property(readonly, getter=isLoading) BOOL loading;
@property(readonly) unsigned int pageCount;
@property(readonly) WKBackForwardList *backForwardList;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
@property(readonly) NSString *title;
- (void)reload;
- (void)dealloc;

@end

