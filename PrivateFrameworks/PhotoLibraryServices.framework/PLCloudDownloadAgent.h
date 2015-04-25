//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudScenarioProducer.h>

@class NSObject<OS_dispatch_queue>, PLCloudPhotoLibraryManager, PLPhotoLibrary;

@interface PLCloudDownloadAgent : PLCloudScenarioProducer
{
    NSObject<OS_dispatch_queue> *_agentQueue;
    CDStruct_691a9b3b _walkStatus[4];
    PLPhotoLibrary *_localLibrary;
    PLCloudPhotoLibraryManager *_remoteLibrary;
}

- (void)prefetchResources;
- (void)resetWalkStatus;
@property(retain) PLCloudPhotoLibraryManager *remoteLibrary; // @synthesize remoteLibrary=_remoteLibrary;
@property(retain) PLPhotoLibrary *localLibrary; // @synthesize localLibrary=_localLibrary;
- (void)metadataStable:(id)arg1;
- (void)appInForeground:(id)arg1;
- (void)metadataChanged:(id)arg1;
- (void)systemStarted:(id)arg1;
- (void)prefetchAllThumbnails;
- (void)prefetchLastWeeksOriginals;
- (void)prefetchLastWeeksFull;
- (void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned int)arg2 startingAtOffset:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginPopulatingResourcesOfType:(unsigned int)arg1 withFetchRequest:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)downloadResources:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_beginPopulatingResourcesOfType:(unsigned int)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned int)arg3 then:(CDUnknownBlockType)arg4;
- (int)typeToIndex:(unsigned int)arg1;
- (unsigned int)batchSize;
- (void)activate;
- (id)init;
- (void)dealloc;

@end

