//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class SCNPhysicsField;

@protocol SCNPhysicsFieldJSExport <JSExport>
+ (SCNPhysicsField *)customFieldWithEvaluationBlock:(struct SCNVector3 (^)(struct SCNVector3, struct SCNVector3, float, float, double))arg1;
+ (SCNPhysicsField *)magneticField;
+ (SCNPhysicsField *)electricField;
+ (SCNPhysicsField *)springField;
+ (SCNPhysicsField *)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (SCNPhysicsField *)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (SCNPhysicsField *)linearGravityField;
+ (SCNPhysicsField *)radialGravityField;
+ (SCNPhysicsField *)vortexField;
+ (SCNPhysicsField *)dragField;
@property(nonatomic) unsigned int categoryBitMask;
@property(nonatomic) struct SCNVector3 direction;
@property(nonatomic) struct SCNVector3 offset;
@property(nonatomic) int scope;
@property(nonatomic) BOOL usesEllipsoidalExtent;
@property(nonatomic) struct SCNVector3 halfExtent;
@property(nonatomic, getter=isExclusive) BOOL exclusive;
@property(nonatomic, getter=isActive) BOOL active;
@property(nonatomic) float minimumDistance;
@property(nonatomic) float falloffExponent;
@property(nonatomic) float strength;
- (id)copy;
@end

