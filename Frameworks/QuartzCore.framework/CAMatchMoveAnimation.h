//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@class CALayer, NSArray, NSString;

@interface CAMatchMoveAnimation : CAAnimation
{
}

+ (id)defaultValueForKey:(id)arg1;
@property(copy) NSArray *sourcePoints;
@property(retain) CALayer *sourceLayer;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
@property(getter=isAdditive) BOOL additive;
@property(copy) NSString *keyPath;
@property BOOL appliesRotation;
@property BOOL appliesScale;
@property BOOL appliesY;
@property BOOL appliesX;
@property BOOL targetsSuperlayer;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;

@end

