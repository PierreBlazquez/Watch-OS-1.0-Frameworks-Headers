//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKMapTileModel.h>

#import "VKMapLayer.h"

@class NSMutableArray, NSString;

@interface VKRasterOverlayMapModel : VKMapTileModel <VKMapLayer>
{
    NSMutableArray *_sortedTiles;
    unsigned int _level;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _gglRenderState;
    struct unique_ptr<ggl::Mesh, std::__1::default_delete<ggl::Mesh>> _unitMesh;
    struct unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem>> _clearItem;
}

- (id)initWithLevel:(unsigned int)arg1;
- (unsigned long long)mapLayerPosition;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (BOOL)shouldLayoutWithoutStyleManager;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

