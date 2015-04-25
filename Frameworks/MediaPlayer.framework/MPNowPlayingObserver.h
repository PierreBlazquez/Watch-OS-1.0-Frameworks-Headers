//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPStoreDownloadManagerObserver.h"

@class MPAVController, MPImageCache, MPStoreDownload, NSData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIImage;

@interface MPNowPlayingObserver : NSObject <MPStoreDownloadManagerObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIImage *_currentArtworkImage;
    NSData *_currentArtworkData;
    BOOL _hasSeenAnyItem;
    NSMutableDictionary *_mediaItemCoalescedUpdateDateAccessedTimers;
    MPStoreDownload *_activeDownload;
    BOOL _scheduledNowPlayingInfoUpdate;
    BOOL _enabled;
    MPImageCache *_imageCache;
    MPAVController *_player;
}

@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) MPImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (BOOL)_itemNotificationIsRelevantToObservedPlayer:(id)arg1;
- (void)_postNowPlayingInfo;
- (void)_playbackErrorNotification:(id)arg1;
- (void)_repeatTypeDidChangeNotification:(id)arg1;
- (void)_itemDidFinishLoadingNotification:(id)arg1;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setNowPlayingInfo:(id)arg1 forItem:(id)arg2;
- (void)_postNowPlayingInfoForItem:(id)arg1;
- (int)_MPNowPlayingDownloadStateForDownload:(id)arg1;
- (id)_activeDownloadForItemWithStoreID:(long long)arg1;
- (void)_prefetchArtworkForNextItem;
- (void)_coalescedUpdateLastUsedDateForCurrentItem;
- (BOOL)_hasProperConditionsToLoadArtwork;
- (void)_updateProgressForDownload:(id)arg1;
- (id)_storeDownloadForNowPlayingItemInArray:(id)arg1;
- (void)_setNeedsNowPlayingInfoUpdate;
- (BOOL)_reloadArtworkIfPossible;
- (void)_unregisterForNotificationsForPlayer:(id)arg1;
- (void)_registerForNotificationsForPlayer:(id)arg1;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_avItemIsExplicitDidChangeNotification:(id)arg1;
- (void)_avItemDurationDidChangeNotification:(id)arg1;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

