//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetChangeObserver.h"
#import "PLAssetContainer.h"

@class NSArray, NSDate, NSIndexSet, NSMutableIndexSet, NSOrderedSet, NSString, PLManagedAsset, PLPhotoLibrary;

@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver>
{
    NSString *_uuid;
    NSOrderedSet *_assets;
    PLPhotoLibrary *_photoLibrary;
    NSIndexSet *__originalAutoPickIndexes;
    NSMutableIndexSet *__autoPickIndexes;
    NSIndexSet *__originalUserFavoriteIndexes;
    NSMutableIndexSet *__userFavoriteIndexes;
    unsigned int __originalStackIndex;
    unsigned int __stackIndex;
    PLManagedAsset *__aNewPick;
    PLManagedAsset *__anOldPick;
    CDUnknownBlockType __completionHandler;
}

+ (struct CGRect)frameOfTopImageInStackForStackFrame:(struct CGRect)arg1;
+ (id)partialAvalancheStackForImage:(id)arg1 backgroundColor:(id)arg2;
+ (id)avalancheStackForImage:(id)arg1 backgroundColor:(id)arg2;
+ (unsigned int)countForAvalancheUUID:(id)arg1 inLibrary:(id)arg2;
+ (unsigned int)_calculateStackAssetForAssetCount:(unsigned int)arg1 autoPicks:(id)arg2 userFavorites:(id)arg3;
+ (id)_assetAmongAssets:(id)arg1 fromIndexes:(id)arg2 excludingIndexes:(id)arg3;
+ (id)_visibleIndexesAmongAssets:(id)arg1 fromUserFavoriteIndexes:(id)arg2 stackIndex:(unsigned int)arg3;
+ (void)_handleUpdatesForContextWillSave:(id)arg1;
+ (void)_updateMembershipForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(BOOL)arg5;
+ (id)_updatePropertiesForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(BOOL)arg5;
+ (id)assetsWithAvalancheUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (BOOL)shouldHideAvalanchesFromPhotoStream;
+ (BOOL)shouldOnlyShowAvalanchePicks;
+ (void)removeFavoriteStatus:(id)arg1;
@property(nonatomic) unsigned int _stackIndex; // @synthesize _stackIndex=__stackIndex;
@property(nonatomic) unsigned int _originalStackIndex; // @synthesize _originalStackIndex=__originalStackIndex;
@property(retain, nonatomic) NSMutableIndexSet *_userFavoriteIndexes; // @synthesize _userFavoriteIndexes=__userFavoriteIndexes;
@property(retain, nonatomic) NSIndexSet *_originalUserFavoriteIndexes; // @synthesize _originalUserFavoriteIndexes=__originalUserFavoriteIndexes;
@property(retain, nonatomic) NSMutableIndexSet *_autoPickIndexes; // @synthesize _autoPickIndexes=__autoPickIndexes;
@property(retain, nonatomic) NSIndexSet *_originalAutoPickIndexes; // @synthesize _originalAutoPickIndexes=__originalAutoPickIndexes;
- (id)proposedStackAssetAfterRemovingFavorite:(id)arg1;
- (BOOL)isAutoPick:(id)arg1;
- (BOOL)isUserFavorite:(id)arg1;
- (void)removeUserFavorite:(id)arg1;
@property(retain, nonatomic, setter=_setANewPick:) PLManagedAsset *_aNewPick; // @synthesize _aNewPick=__aNewPick;
@property(retain, nonatomic, setter=_setAnOldPick:) PLManagedAsset *_anOldPick; // @synthesize _anOldPick=__anOldPick;
- (void)addUserFavorite:(id)arg1;
- (void)_recalculateStackAsset;
- (void)assetsDidChange:(id)arg1;
@property(retain, nonatomic) NSOrderedSet *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void)applyChangesAndDeleteNonPicks:(BOOL)arg1 currentContainer:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)userFavorites;
- (id)autoPicks;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)stackAsset;
- (id)initWithUUID:(id)arg1 photoLibrary:(id)arg2;
- (void)applyTrashedState:(short)arg1;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowAvalancheStacks;
@property(readonly, nonatomic) BOOL canShowComments;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned int hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

