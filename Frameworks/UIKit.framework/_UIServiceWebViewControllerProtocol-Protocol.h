//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, NSURL;

@protocol _UIServiceWebViewControllerProtocol <NSObject>
- (void)_webContentSizeWithReplyHandler:(void (^)(id, NSError *))arg1;
- (void)configureWithEncodedSettings:(NSDictionary *)arg1;
- (void)setShouldDecidePolicyRemotely:(BOOL)arg1;
- (void)stopLoading;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (void)loadUserTypedAddress:(NSString *)arg1;
- (void)loadHTMLString:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (void)loadEncodedRequest:(NSData *)arg1;
@end

