//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class SCNNode;

@protocol SCNPhysicsContactJSExport <JSExport>
@property(readonly, nonatomic) float penetrationDistance;
@property(readonly, nonatomic) float collisionImpulse;
@property(readonly, nonatomic) struct SCNVector3 contactNormal;
@property(readonly, nonatomic) struct SCNVector3 contactPoint;
@property(readonly, nonatomic) SCNNode *nodeB;
@property(readonly, nonatomic) SCNNode *nodeA;
@end

