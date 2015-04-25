//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSystemMonitorListener.h"

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener>
{
    CKDispatchCache *_dispatchCache;
    CKMultiDict *_pendingBlocks;
}

+ (id)detailsPreviewCache;
+ (id)mapThumbnailQueue;
+ (id)transcriptPreviewCache;
- (void)transferFinished:(id)arg1;
- (id)mediaObjectManager;
@property(retain, nonatomic) CKMultiDict *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;
- (BOOL)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2;
@property(retain, nonatomic) CKDispatchCache *dispatchCache; // @synthesize dispatchCache=_dispatchCache;
- (void)endGeneratingForKey:(id)arg1;
- (void)systemApplicationDidSuspendForEventsOnly;
- (void)systemApplicationDidSuspend;
- (void)beginGeneratingForKey:(id)arg1;
- (void)transferRemoved:(id)arg1;
- (id)notificationCenter;
- (void)enqueueSaveBlock:(CDUnknownBlockType)arg1 forMediaObject:(id)arg2 withPriority:(int)arg3;
- (void)enqueueGenerationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 withPriority:(int)arg3 forKey:(id)arg4;
- (void)enqueueSaveBlock:(CDUnknownBlockType)arg1 withPriority:(int)arg2;
- (BOOL)isGeneratingPreviewForKey:(id)arg1;
- (void)setCachedPreview:(id)arg1 key:(id)arg2;
- (id)cachedPreviewForKey:(id)arg1;
- (void)resume;
- (void)didReceiveMemoryWarning;
- (void)flush;
- (id)init;
- (void)dealloc;

@end
