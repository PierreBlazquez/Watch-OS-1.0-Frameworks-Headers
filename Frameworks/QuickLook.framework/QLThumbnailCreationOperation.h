//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSURL, UIImage;

@interface QLThumbnailCreationOperation : NSOperation
{
    BOOL _finished;
    BOOL _executing;
    UIImage *_image;
    NSError *_error;
    NSURL *_documentURL;
    float _maximumDimension;
    float _scaleFactor;
    unsigned int _useMode;
    struct CGRect _contentRect;
}

@property(retain) NSError *error; // @synthesize error=_error;
- (void)setExecuting:(BOOL)arg1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
@property(retain) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void)main;
@property float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (void)start;
@property(retain) UIImage *image; // @synthesize image=_image;
- (void)dealloc;
- (void)setFinished:(BOOL)arg1;
@property unsigned int useMode; // @synthesize useMode=_useMode;
@property float maximumDimension; // @synthesize maximumDimension=_maximumDimension;
- (void)retrieveThumbnailForPhysicalURL:(id)arg1 hasThumbnailInIndex:(BOOL)arg2;
- (void)checkIfThumbnailExistsAtPhysicalURL:(id)arg1;
- (BOOL)_finishIfCancelled;
- (void)_finish;
- (BOOL)isConcurrent;

@end

