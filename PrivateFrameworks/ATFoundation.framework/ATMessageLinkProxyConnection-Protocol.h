//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ATRequest, ATResponse, NSString;

@protocol ATMessageLinkProxyConnection <NSObject>
- (void)removeRequestHandlerForDataClass:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addRequestHandler:(id <ATMessageLinkRequestHandler>)arg1 forDataClass:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)sendResponse:(ATResponse *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)sendRequest:(ATRequest *)arg1 withCompletion:(void (^)(ATResponse *, NSError *))arg2;
- (void)connectWithCompletion:(void (^)(NSError *))arg1;
@end

