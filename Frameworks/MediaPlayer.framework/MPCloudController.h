//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSCloudClient, NSObject<HSCloudAvailability>, NSObject<OS_dispatch_queue>;

@interface MPCloudController : NSObject
{
    NSObject<HSCloudAvailability> *_cloudAvailabilityController;
    BOOL _isUpdateInProgress;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isInitialImport;
    BOOL _isCloudEnabled;
    BOOL _jaliscoGeniusEnabled;
    HSCloudClient *_cloudClient;
}

+ (void)migrateCellularDataPreferencesIfNeeded;
+ (BOOL)isMediaApplication;
+ (id)sharedCloudController;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic, getter=isJaliscoGeniusEnabled) BOOL jaliscoGeniusEnabled; // @synthesize jaliscoGeniusEnabled=_jaliscoGeniusEnabled;
- (void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL enablingJaliscoGeniusRequiresTerms;
@property(readonly, nonatomic) BOOL isUpdateInProgress; // @synthesize isUpdateInProgress=_isUpdateInProgress;
@property(readonly, nonatomic) BOOL isInitialImport; // @synthesize isInitialImport=_isInitialImport;
@property(readonly, nonatomic) BOOL hasCloudLockerAccount;
- (void)savePlaylist:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL canDefaultMediaLibraryShowCloudContent;
- (void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_initializeUpdateInProgressState;
- (void)becomeActive;
- (void)becomeActiveAndWaitUntilDone:(BOOL)arg1;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL canShowCloudDownloadButtons;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (void)isCellularDataRestrictedDidChangeNotification:(id)arg1;
- (void)canShowCloudTracksDidChangeNotification:(id)arg1;
- (void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) HSCloudClient *cloudClient; // @synthesize cloudClient=_cloudClient;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
@property(readonly, nonatomic) BOOL canShowCloudVideo;
@property(readonly, nonatomic) BOOL canShowCloudMusic;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL hasPurchaseHistoryAccount;
- (void)uploadItemProperties;
@property(readonly, nonatomic) BOOL isCloudEnabled; // @synthesize isCloudEnabled=_isCloudEnabled;
@property(readonly, nonatomic) BOOL isGeniusEnabled;
- (BOOL)isCellularDataRestricted;
- (void)resignActive;

@end

