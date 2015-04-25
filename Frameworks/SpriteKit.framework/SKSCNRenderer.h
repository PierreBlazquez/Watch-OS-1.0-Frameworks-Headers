//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKLabelNode, SKScene;

@interface SKSCNRenderer : NSObject
{
    double _timePreviousUpdate;
    SKLabelNode *_statsLabel;
    float _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    BOOL _hasRenderedOnce;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _isInTransition;
    BOOL _disableInput;
    SKScene *_scene;
    struct SKCRenderer *_renderer;
    float _prevBackingScaleFactor;
    BOOL showsFPS;
    BOOL showsNodeCount;
    float _backingScaleFactor;
    struct CGRect _bounds;
}

+ (id)rendererWithContext:(id)arg1 options:(id)arg2;
- (void)_initialize;
- (void)set_showsCPUStats:(BOOL)arg1;
- (void)set_showsGPUStats:(BOOL)arg1;
@property(nonatomic) BOOL showsDrawCount;
@property(nonatomic) BOOL showsNodeCount; // @synthesize showsNodeCount;
@property(nonatomic) BOOL showsFPS; // @synthesize showsFPS;
@property(nonatomic) BOOL ignoresSiblingOrder;
- (struct CGSize)pixelSize;
- (void)_update:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_scene;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)init;
- (void)dealloc;
@property(nonatomic) float backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
- (int)_spriteSubmitCount;
- (int)_spriteRenderCount;
- (float)_fps;
- (void)_showAllStats;
- (BOOL)_showsTotalAreaRendered;
- (BOOL)_showsCulledNodesInNodeCount;
- (BOOL)_showsGPUStats;
- (BOOL)_showsCPUStats;
- (BOOL)_showsCoreAnimationFPS;
- (BOOL)_shouldCenterStats;
- (void)set_shouldCenterStats:(BOOL)arg1;
- (BOOL)_showsSpriteBounds;
- (void)set_showsSpriteBounds:(BOOL)arg1;
@property(nonatomic) BOOL showsFields;
- (BOOL)_showsOutlineInterior;
- (void)set_showsOutlineInterior:(BOOL)arg1;
- (BOOL)showsQuadCount;
- (BOOL)showsSpriteBounds;
- (void)set_showsTotalAreaRendered:(BOOL)arg1;
- (void)set_showsCoreAnimationFPS:(BOOL)arg1;
- (void)set_showsCulledNodesInNodeCount:(BOOL)arg1;
- (void)setShowsQuadCount:(BOOL)arg1;
- (void)setupContext;
- (void)setShowsSpriteBounds:(BOOL)arg1;
@property(nonatomic) BOOL showsPhysics;
- (void)render:(BOOL)arg1;
- (void)updateAtTime:(double)arg1;
@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;

@end

