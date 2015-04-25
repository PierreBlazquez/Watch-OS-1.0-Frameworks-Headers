//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOVectorTile, NSArray, NSMutableArray, VKSharedResources, VKStyleManager;

@interface VK3DObjectSubTile : NSObject
{
    NSMutableArray *_objectGroups;
    GEOVectorTile *_modelTile;
    VKStyleManager *_styleManager;
    VKSharedResources *_sharedResources;
    int _vectorType;
    float _contentScale;
    struct vector<VKBuildingHeightMap, std::__1::allocator<VKBuildingHeightMap>> _heights;
}

- (BOOL)_createMeshForObjects:(CDStruct_f31c98c6 *)arg1 count:(unsigned int)arg2;
- (void)_read3DObjects:(vector_25c79282 *)arg1 fromDiskForTileKey:(const struct _GEOTileKey *)arg2;
@property(copy, nonatomic) NSArray *objectGroups;
- (void)fillShadowAreasInContext:(struct CGContext *)arg1;
- (Box_3fb92e00)shadowBounds;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 styleManager:(id)arg3 sharedResources:(id)arg4 contentScale:(float)arg5;
- (BOOL)heightAtPoint:(const Matrix_8746f91e *)arg1 outZ:(float *)arg2;
@property(retain, nonatomic) GEOVectorTile *modelTile; // @synthesize modelTile=_modelTile;
@property(retain, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property(retain, nonatomic) VKStyleManager *styleManager; // @synthesize styleManager=_styleManager;
- (void).cxx_destruct;
@property(nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
- (id).cxx_construct;
- (void)dealloc;

@end

