//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPCompleteMyCollectionArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
}

- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (BOOL)areRepresentationsForCatalog:(id)arg1 visuallyIdenticalToRepresentationsForCatalog:(id)arg2;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (int)_artworkTypeForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;

@end

