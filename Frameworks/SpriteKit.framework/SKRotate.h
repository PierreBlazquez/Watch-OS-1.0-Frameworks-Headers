//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

@interface SKRotate : SKAction
{
    struct SKCRotate *_mycaction;
}

+ (id)rotateToAngle:(float)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3;
+ (id)rotateByAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateToY:(float)arg1 duration:(double)arg2;
+ (id)rotateByY:(float)arg1 duration:(double)arg2;
+ (id)rotateToX:(float)arg1 duration:(double)arg2;
+ (id)rotateByX:(float)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)rotateByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end

