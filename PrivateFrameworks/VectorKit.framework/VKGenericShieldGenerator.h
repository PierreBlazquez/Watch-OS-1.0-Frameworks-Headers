//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"

@class NSCache, NSString, VKGenericShieldDrawStyle, VKResourceManager;

@interface VKGenericShieldGenerator : NSObject <GEOResourceManifestTileGroupObserver>
{
    VKGenericShieldDrawStyle *_defaultStyle;
    NSCache *_defaultStylePacks;
    unsigned int _tileGroupIdentifier;
    VKResourceManager *_resourceManager;
}

- (id)newArtworkWithScale:(float)arg1 style:(id)arg2 size:(int)arg3 numberOfLines:(unsigned int)arg4;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

