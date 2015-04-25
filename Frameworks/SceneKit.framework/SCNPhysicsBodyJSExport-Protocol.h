//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class SCNPhysicsShape;

@protocol SCNPhysicsBodyJSExport <JSExport>
+ (id)bodyWithType:(int)arg1 shape:(SCNPhysicsShape *)arg2;
+ (id)kinematicBody;
+ (id)dynamicBody;
+ (id)staticBody;
@property(nonatomic) unsigned int collisionBitMask;
@property(nonatomic) unsigned int categoryBitMask;
@property(nonatomic) struct SCNVector3 angularVelocityFactor;
@property(nonatomic) struct SCNVector3 velocityFactor;
@property(nonatomic) float angularDamping;
@property(nonatomic) float damping;
@property(nonatomic) struct SCNVector4 angularVelocity;
@property(nonatomic) struct SCNVector3 velocity;
@property(nonatomic) BOOL allowsResting;
@property(readonly, nonatomic) BOOL isResting;
@property(retain, nonatomic) SCNPhysicsShape *physicsShape;
@property(nonatomic) float rollingFriction;
@property(nonatomic) float restitution;
@property(nonatomic) float friction;
@property(nonatomic) float charge;
@property(nonatomic) float mass;
@property(nonatomic) int type;
- (id)copy;
- (void)resetTransform;
- (void)clearAllForces;
- (void)applyTorque:(struct SCNVector4)arg1 impulse:(BOOL)arg2;
- (void)applyForce:(struct SCNVector3)arg1 atPosition:(struct SCNVector3)arg2 impulse:(BOOL)arg3;
- (void)applyForce:(struct SCNVector3)arg1 impulse:(BOOL)arg2;
@end

