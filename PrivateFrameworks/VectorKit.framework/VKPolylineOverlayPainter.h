//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKOverlayPainter.h>

#import "VKPolylineObserver.h"

@class NSSet, NSString, VKAnimation, VKPolylineOverlay, VKRouteLine, VKStyleManager, VKTileKeyList;

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver>
{
    VKRouteLine *_routeLine;
    double _routeLineWidthScaleRegular;
    double _routeLineHalfWidthRealistic;
    BOOL _selected;
    VKPolylineOverlay *_routeOverlay;
    struct unordered_map<GEOTransportType, vk::TransportTypeInfo, std::__1::hash<GEOTransportType>, std::__1::equal_to<GEOTransportType>, std::__1::allocator<std::__1::pair<const GEOTransportType, vk::TransportTypeInfo>>> _transportTypeMap;
    shared_ptr_1fee3c91 _viewUniforms;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager>> _trafficManager;
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer>> _trafficLayer;
    struct unique_ptr<vk::RouteLineArrowManager, std::__1::default_delete<vk::RouteLineArrowManager>> _arrowManager;
    struct vector<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer>>, std::__1::allocator<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer>>>> _arrowLayers;
    struct unique_ptr<vk::RouteLineManager, std::__1::default_delete<vk::RouteLineManager>> _routeLineManager;
    struct unique_ptr<vk::RouteLineLayer, std::__1::default_delete<vk::RouteLineLayer>> _routeLineLayer;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _debugRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _debugRenderItems;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup>>> _debugShaderSetups;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _debugLineRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::BaseMesh>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BaseMesh>>> _debugUnmatchedRouteLineMeshes;
    VKStyleManager *_lastQueriedStyleManager;
    double _previousViewUnitsPerPoint;
    int _styleZ;
    struct unordered_set<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *>> _selectedSections;
    CDStruct_aa5aacbc _matrix;
    NSSet *_previousTilesInView;
    VKTileKeyList *_previousKeysInView;
    double _simplificationEpsilon;
    VKAnimation *_fadeAnimation;
    float _alphaScale;
    VKAnimation *_arrowFadeAnimation;
    float _arrowAlphaScale;
    BOOL _showArrows;
    VKAnimation *_arrowCrossFadeAnimation;
    BOOL _showTraffic;
    BOOL _forceRoutelineUpdate;
    int _stencilValue;
    float _contentScale;
    shared_ptr_6e6219d6 _trafficStyle;
    unsigned int _targetDisplayStep;
    float _crossfadingDisplayStep;
    BOOL _wasInRealisticMode;
}

@property(nonatomic) BOOL showTraffic; // @synthesize showTraffic=_showTraffic;
@property(retain, nonatomic) VKPolylineOverlay *routeOverlay; // @synthesize routeOverlay=_routeOverlay;
- (void)updateRouteLineStencilValue:(int)arg1;
- (void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (float)automobileRouteLineWidthForCamera:(id)arg1 canvasSize:(struct CGSize)arg2;
- (void)prepareDebugLines;
- (void)layoutDebugUnmatchedRouteLine:(id)arg1 commandBuffer:(struct CommandBuffer *)arg2;
- (void)_updateZoomDependentStyleProperties;
- (void)prepareToDrawWithCanvas:(id)arg1;
- (void)gglLayoutWithContext:(id)arg1 commandBuffer:(struct CommandBuffer *)arg2 tiles:(id)arg3 layer:(unsigned char)arg4;
@property(readonly, nonatomic) VKPolylineOverlay *polyline;
- (void)_didReceiveMemoryWarning;
- (id)initWithOverlay:(id)arg1;
- (BOOL)_shouldShowTraffic;
- (void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)gglLayoutWithContext:(id)arg1 commandBuffer:(struct CommandBuffer *)arg2 tiles:(id)arg3;
- (void)setContainerModel:(id)arg1;
- (void)flushPools;
- (void)stylesheetDidChange;
- (id)styleManager;
- (void).cxx_destruct;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
