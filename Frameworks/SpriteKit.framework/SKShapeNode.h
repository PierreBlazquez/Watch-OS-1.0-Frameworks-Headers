//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class SKShader, SKTexture, UIColor;

@interface SKShapeNode : SKNode
{
    struct SKCShapeSprite *ss;
}

+ (id)shapeNodeWithRect:(struct CGRect)arg1;
+ (id)shapeNodeWithSplinePoints:(struct CGPoint *)arg1 count:(unsigned long)arg2;
+ (id)shapeNodeWithPoints:(struct CGPoint *)arg1 count:(unsigned long)arg2;
+ (id)shapeNodeWithTriangleA:(struct CGPoint)arg1 B:(struct CGPoint)arg2 C:(struct CGPoint)arg3;
+ (id)shapeNodeWithRectOfSize:(struct CGSize)arg1 cornerRadius:(float)arg2;
+ (id)shapeNodeWithRectOfSize:(struct CGSize)arg1;
+ (id)shapeNodeWithCircleOfRadius:(float)arg1;
+ (id)shapeNodeWithPath:(struct CGPath *)arg1 centered:(BOOL)arg2;
+ (id)shapeNodeWithRect:(struct CGRect)arg1 cornerRadius:(float)arg2;
+ (id)shapeNodeWithEllipseOfSize:(struct CGSize)arg1;
+ (id)shapeNodeWithEllipseInRect:(struct CGRect)arg1;
+ (id)shapeNodeWithPath:(struct CGPath *)arg1;
@property(retain, nonatomic) SKTexture *fillTexture;
- (void)_initialize;
@property(nonatomic, getter=isAntialiased) BOOL antialiased;
- (struct CGRect)calculateAccumulatedFrame;
- (void)setFillPath:(BOOL)arg1;
- (BOOL)fillPath;
@property(nonatomic) int lineJoin;
@property(nonatomic) int lineCap;
@property(nonatomic) struct CGPath *path;
@property(retain, nonatomic) UIColor *strokeColor;
@property(retain, nonatomic) UIColor *fillColor;
@property(nonatomic) float miterLimit;
@property(nonatomic) float lineWidth;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct CGRect)frame;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) float lineLength;
@property(retain, nonatomic) SKTexture *strokeTexture;
@property(retain, nonatomic) SKShader *strokeShader;
@property(retain, nonatomic) SKShader *fillShader;
@property(nonatomic) float renderQualityRatio;
@property(nonatomic) float glowWidth;
- (id)_copyImageData;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (BOOL)isEqualToNode:(id)arg1;
@property(nonatomic) int blendMode;

@end

