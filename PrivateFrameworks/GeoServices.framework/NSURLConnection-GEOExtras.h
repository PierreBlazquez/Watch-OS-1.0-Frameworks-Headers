//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLConnection.h"

@interface NSURLConnection (GEOExtras)
+ (id)_geo_sendSynchronousRequest:(id)arg1 connectionProperties:(id)arg2 returningResponse:(id *)arg3 error:(id *)arg4;
+ (void)_geo_sendAsynchronousRequest:(id)arg1 queue:(id)arg2 connectionProperties:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_geo_sendAsynchronousRequest:(id)arg1 connectionProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)_geo_sendAttributedSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (void)_geo_sendAttributedAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_geo_initWithAttributedRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
@end

