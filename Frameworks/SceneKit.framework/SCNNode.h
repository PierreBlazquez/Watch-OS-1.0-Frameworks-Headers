//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SCNActionable.h"
#import "SCNAnimatable.h"
#import "SCNBoundingVolume.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SCNCamera, SCNGeometry, SCNLight, SCNMorpher, SCNOrderedDictionary, SCNPhysicsBody, SCNPhysicsField, SCNSkinner;

@interface SCNNode : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNActionable, SCNBoundingVolume>
{
    id _reserved;
    // Error parsing type: ^{__C3DNode={__C3DEntity={__CFRuntimeBase=I[4C]}^v^{__CFString}^{__CFString}^{__CFDictionary}ii}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1IB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}, name: _node
    SCNNode *_parent;
    NSMutableArray *_childNodes;
    SCNNode *_presentationInstance;
    unsigned int _isPresentationInstance:1;
    unsigned int _lightLoaded:1;
    unsigned int _geometryLoaded:1;
    unsigned int _cameraLoaded:1;
    unsigned int _skinnerLoaded:1;
    unsigned int _morpherLoaded:1;
    unsigned int _paused:1;
    unsigned int _pausedByInheritance:1;
    unsigned int _affineUpToDate:1;
    unsigned int _transformUpToDate:1;
    unsigned int _hasPivot:1;
    unsigned int _usesEuler:1;
    struct SCNMatrix4 _transform;
    struct SCNVector3 _position;
    struct SCNVector4 _rotation;
    struct SCNVector3 _scale;
    float _opacity;
    BOOL _hidden;
    BOOL _castsShadow;
    unsigned int _categoryBitMask;
    SCNLight *_light;
    SCNGeometry *_geometry;
    SCNCamera *_camera;
    SCNSkinner *_skinner;
    SCNMorpher *_morpher;
    NSArray *_filters;
    NSMutableArray *_particleSystems;
    SCNOrderedDictionary *_animations;
    SCNOrderedDictionary *_actions;
    NSMutableArray *_constraints;
    SCNPhysicsBody *_physicsBody;
    SCNPhysicsField *_physicsField;
    struct SCNVector3 *_fixedBoundingBoxExtrema;
    int _renderingOrder;
    NSString *_name;
    NSMutableDictionary *_valueForKey;
    id _rendererDelegate;
}

+ (id)node;
+ (BOOL)supportsSecureCoding;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)keyPathsForValuesAffectingTransform;
+ (id)nodeWithGeometry:(id)arg1;
+     // Error parsing type: @12@0:4^{__C3DNode={__C3DEntity={__CFRuntimeBase=I[4C]}^v^{__CFString}^{__CFString}^{__CFDictionary}ii}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1IB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}8, name: nodeWithNodeRef:
+ (id)SCNJSExportProtocol;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)hidden;
@property(retain, nonatomic) SCNCamera *camera;
@property(nonatomic, getter=isPaused) BOOL paused;
- (void)_setPosition:(struct SCNVector3)arg1;
- (struct SCNVector4)quaternion;
@property(nonatomic) unsigned int categoryBitMask;
- (void)addAnimation:(id)arg1;
@property(retain, nonatomic) SCNGeometry *geometry;
- (void)_setScale:(struct SCNVector3)arg1;
@property(readonly, nonatomic) SCNNode *parentNode;
@property(nonatomic) struct SCNVector4 rotation;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) struct SCNVector4 orientation;
- (void)setIdentifier:(id)arg1;
- (void)removeAllActions;
@property(readonly, nonatomic) NSArray *childNodes;
@property(nonatomic) struct SCNVector3 scale;
- (void)removeAllAnimations;
@property(copy, nonatomic) NSArray *filters;
@property(nonatomic) float opacity;
@property(nonatomic) struct SCNVector3 position;
- (void)renderInContext:(void *)arg1;
@property(copy) NSArray *constraints;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
@property(nonatomic) struct SCNMatrix4 transform;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (id)actionForKey:(id)arg1;
@property(copy, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)identifier;
- (void)_setParent:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copy;
- (id)init;
@property(nonatomic, getter=isHidden) BOOL hidden;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)flattenedCopy;
- (void)removeAllChilds;
- (BOOL)isJoint;
- (id)mutableChildNodes;
- (void)setQuaternion:(struct SCNVector4)arg1;
- (void)_registerAsObserver;
- (id)jsChildNodesWithAttribute:(id)arg1;
- (id)childNodesWithAttribute:(Class)arg1 recursively:(BOOL)arg2;
- (id)objectInChildNodesWithName:(id)arg1;
- (void)dump;
- (BOOL)isPresentationInstance;
- (void)_didDecodeSCNNode:(id)arg1;
- (void)_customDecodingOfSCNNode:(id)arg1;
- (void)_customEncodingOfSCNNode:(id)arg1;
- (void)setBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
@property(nonatomic) struct SCNVector3 eulerAngles;
- (BOOL)hasActions;
- (void)runAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)childNodeWithName:(id)arg1;
- (id)getBoundingSphere;
- (id)getBoundingBox;
- (void)removeParticleSystem:(id)arg1;
- (void)removeAllParticleSystems;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (struct SCNMatrix4)convertTransform:(struct SCNMatrix4)arg1 toNode:(id)arg2;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 fromNode:(id)arg2;
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)childNodesPassingTest:(CDUnknownBlockType)arg1;
- (void)replaceChildNode:(id)arg1 with:(id)arg2;
- (void)insertChildNode:(id)arg1 atIndex:(unsigned int)arg2;
- (id)clone;
- (void)_removeDeadParticleSystem:(struct __C3DParticleSystem *)arg1;
- (void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeActionForKey:(id)arg1;
- (void)_actionsTimeJump:(double)arg1;
- (id)flattenedClone;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(float *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (void)replaceObjectInChildNodesAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (unsigned int)indexOfChildNode:(id)arg1;
- (void)removeObjectFromChildNodesAtIndex:(unsigned int)arg1;
- (void)__removeObjectFromChildNodesAtIndex:(unsigned int)arg1;
- (void)__insertObject:(id)arg1 inChildNodesAtIndex:(unsigned int)arg2;
- (void)_setPaused:(BOOL)arg1;
- (BOOL)canAddChildNode:(id)arg1;
- (void)insertObject:(id)arg1 inChildNodesAtIndex:(unsigned int)arg2;
- (unsigned int)countOfChildNodes;
- (BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id *)arg3 remainingPath:(id *)arg4;
- (id)objectInChildNodesAtIndex:(unsigned int)arg1;
- (id)__geometry;
- (id)__camera;
- (id)__morpher;
- (id)__skinner;
- (id)__light;
- (struct SCNMatrix4)convertTransform:(struct SCNMatrix4)arg1 fromNode:(id)arg2;
- (void)_updateTransform;
- (struct SCNVector3)_euler;
- (void)_setQuaternion:(struct SCNVector4)arg1;
- (struct SCNVector4)_quaternion;
- (void)_updateAffine;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 toNode:(id)arg2;
- (id)objectInChildNodesWithAttribute:(id)arg1 firstOnly:(BOOL)arg2;
- (void)_childNodesWithAttribute:(Class)arg1 output:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)_enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)childNodesPassingTest:(CDUnknownBlockType)arg1 recursively:(BOOL)arg2;
- (BOOL)_childNodesPassingTest:(CDUnknownBlockType)arg1 recursively:(BOOL)arg2 output:(id)arg3;
-     // Error parsing type: @12@0:4^{__C3DNode={__C3DEntity={__CFRuntimeBase=I[4C]}^v^{__CFString}^{__CFString}^{__CFDictionary}ii}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1IB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}8, name: initWithNodeRef:
- (void)_expandChildArrayIfNeeded;
- (void)_initChildNodesArray;
- (void)addChildNode:(id)arg1;
- (id)_copyRecursively;
- (id)_copy:(BOOL)arg1;
@property(retain, nonatomic) SCNPhysicsBody *physicsBody;
- (void)runAction:(id)arg1 forKey:(id)arg2;
- (id)actionKeys;
- (void)setGizmo:(BOOL)arg1;
- (BOOL)isGizmo;
- (void)addParticleSystem:(id)arg1;
- (id)particleSystems;
@property(retain, nonatomic) SCNPhysicsField *physicsField;
@property(retain, nonatomic) SCNMorpher *morpher;
@property(retain, nonatomic) SCNSkinner *skinner;
@property(nonatomic) id <SCNNodeRendererDelegate> rendererDelegate;
@property(retain, nonatomic) SCNLight *light;
@property(nonatomic) int renderingOrder;
@property(nonatomic) struct SCNMatrix4 pivot;
- (void)_dump:(id)arg1;
-     // Error parsing type: @12@0:4^{__C3DNode={__C3DEntity={__CFRuntimeBase=I[4C]}^v^{__CFString}^{__CFString}^{__CFDictionary}ii}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1IB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}8, name: initPresentationNodeWithNodeRef:
- (void)_setMorpher:(id)arg1;
- (void)_setSkinner:(id)arg1;
- (void)_setLight:(id)arg1;
- (void)_setCamera:(id)arg1;
- (void)_setGeometry:(id)arg1;
- (void)_setAttributes:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
@property(nonatomic) BOOL castsShadow;
- (void)_syncEntityObjCModel;
- (void)_syncObjCModel;
- (void)runAction:(id)arg1;
- (id)childNodeWithName:(id)arg1 recursively:(BOOL)arg2;
- (id)presentationNode;
@property(readonly, nonatomic) struct SCNMatrix4 worldTransform;
- (void)_removeAction:(id)arg1 forKey:(id)arg2;
- (void)removeFromParentNode;
- (void)setWorldTransform:(struct SCNMatrix4)arg1;
- (id)presentationInstance;
- (BOOL)isPausedOrPausedByInheritance;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void)_syncObjCAnimations;
- (void *)__CFObject;
- (struct __C3DScene *)sceneRef;
-     // Error parsing type: ^{__C3DNode={__C3DEntity={__CFRuntimeBase=I[4C]}^v^{__CFString}^{__CFString}^{__CFDictionary}ii}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1IB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}8@0:4, name: nodeRef
- (id)scene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

