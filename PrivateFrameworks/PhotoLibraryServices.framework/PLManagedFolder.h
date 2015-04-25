//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLGenericAlbum.h>

#import "PLAlbumContainer.h"

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer>
{
    BOOL _adjustingChildOrderKeys;
    BOOL _needsPersistenceUpdate;
}

+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (void)refreshCollections;
- (void)removeChildCollections:(id)arg1;
- (void)removeChildCollectionsObject:(id)arg1;
- (void)addChildCollectionsObject:(id)arg1;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned int)arg2;
- (void)_handleChildOrderKeys;
- (BOOL)_childOrderKeysAreValid;
- (void)addChildCollections:(id)arg1;
@property(readonly, nonatomic) unsigned int unreadAlbumsCount;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
- (BOOL)albumHasFixedOrder:(struct NSObject *)arg1;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
- (BOOL)canEditAlbums;
- (BOOL)hasAtLeastOneAlbum;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
- (short)albumListType;
@property(readonly, nonatomic) unsigned int containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)containers;
@property(readonly, nonatomic) int filter;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
- (id)childKeyForOrdering;
- (id)sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (id)childToOrderKeyMap;
@property(readonly, nonatomic) unsigned int albumsCount;
@property(nonatomic) BOOL needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
- (void)didSave;
- (void)willSave;
- (void)removePersistedFileSystemData;
- (BOOL)isValidKindForPersistence;
- (void)prepareForDeletion;
- (id)newOrderKeyChild:(id)arg1;
- (void)persistMetadataToFileSystem;
- (unsigned int)videosCount;
- (unsigned int)photosCount;
- (unsigned int)assetsCount;
- (unsigned int)approximateCount;
- (id)assets;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (id)mutableAssets;
- (id)albums;
- (BOOL)isEmpty;
- (id)identifier;
- (unsigned int)count;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *childCollections; // @dynamic childCollections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly) Class superclass;

@end

