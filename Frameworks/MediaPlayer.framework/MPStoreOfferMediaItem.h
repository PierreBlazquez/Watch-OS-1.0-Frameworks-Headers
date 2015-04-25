//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPNondurableMediaItem.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class MPStoreOfferContentRating, MPStoreOfferMediaItemArtworkDescriptor, NSDictionary, NSNumber;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying>
{
    NSDictionary *_lookupCollectionPropertyValues;
    NSNumber *_itemID;
    int _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_contentRating;
    MPStoreOfferMediaItemArtworkDescriptor *_offerArtworkDescriptor;
    long _offerArtworkDescriptorOnceToken;
    id _pid;
    id _discNumber;
    id _trackNumber;
    id _title;
}

+ (BOOL)supportsSecureCoding;
+ (id)localRepresentativeItemPropertyForMediaProperty:(id)arg1;
+ (id)assetLookupKeyForItemMediaProperty:(id)arg1;
+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1;
+ (id)offerLookupKeyForItemMediaProperty:(id)arg1;
+ (id)itemLookupKeyForMediaProperty:(id)arg1;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)preferredAssetDictionaryInOfferDictionary:(id)arg1;
+ (id)mediaItemsByRemovingRestrictedContentFromMediaItems:(id)arg1;
+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2;
+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)offerArtworkDescriptorForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (BOOL)canMergeStoreOfferWithLocalMediaItems:(id)arg1;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 mediaProperty:(id)arg3;
+ (BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (BOOL)canRequestStoreOfferForLocalMediaItems:(id)arg1;
+ (id)defaultPropertyValues;
+ (BOOL)canFilterByProperty:(id)arg1;
- (unsigned long long)persistentID;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (unsigned int)discNumber;
- (id)valueForProperty:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)title;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_lookupOfferDictionaries;
- (BOOL)_offeredItemAlreadyExists;
- (id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2 itemID:(id)arg3;
- (int)preferredStoreOfferVariant;
- (BOOL)isDownloadable;
- (id)buyOfferForVariant:(int)arg1;
- (id)screenshotArtworkCatalog;
- (id)offerArtworkDescriptor;
- (id)mediaLibrary;
- (unsigned int)albumTrackNumber;

@end

