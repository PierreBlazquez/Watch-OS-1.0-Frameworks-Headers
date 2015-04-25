//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsynchronousVideoCompositionRequest, AVVideoCompositionRenderContext, NSDictionary;

@protocol AVVideoCompositing <NSObject>
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(AVAsynchronousVideoCompositionRequest *)arg1;
- (void)renderContextChanged:(AVVideoCompositionRenderContext *)arg1;

@optional
- (void)cancelAllPendingVideoCompositionRequests;
@end

