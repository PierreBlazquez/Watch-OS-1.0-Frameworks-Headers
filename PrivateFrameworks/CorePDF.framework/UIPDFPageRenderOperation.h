//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation
{
    UIPDFPageRenderJob *_job;
    BOOL executing;
    BOOL finished;
}

@property(retain) UIPDFPageRenderJob *job; // @synthesize job=_job;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithJob:(id)arg1;
- (void)main;
- (void)start;
- (void)dealloc;
- (void)completeOperation;
- (BOOL)isConcurrent;

@end

