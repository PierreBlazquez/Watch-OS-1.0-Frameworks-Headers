//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"
#import "CPLEngineComponent.h"

@class CPLEngineLibrary, CPLPlatformObject, NSString;

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
}

+ (id)platformImplementationProtocol;
- (id)simpleDataForSyncAnchor:(id)arg1;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)supportsDelayedUploads;
- (id)removeLibraryTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)resourcePublishTaskForResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)getAssetCountsTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)uploadBatchTaskForBatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)setupTaskCreateLibraryIfNecessary:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEngineLibrary:(id)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)componentName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

