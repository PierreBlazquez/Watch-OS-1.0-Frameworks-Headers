//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLKit/GLKBaseEffect.h>

#import "GLKNamedEffect.h"

@class GLKEffectPropertyTexture;

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect>
{
    GLKEffectPropertyTexture *_textureCubeMap;
    union _GLKMatrix3 _matrix;
    BOOL _dirtyUniforms;
    int _matrixLoc;
}

@property(nonatomic) union _GLKMatrix3 matrix; // @synthesize matrix=_matrix;
- (id)description;
- (id)init;
- (void)dealloc;
@property(nonatomic) int matrixLoc; // @synthesize matrixLoc=_matrixLoc;
@property(readonly, nonatomic) GLKEffectPropertyTexture *textureCubeMap; // @synthesize textureCubeMap=_textureCubeMap;
@property(nonatomic) BOOL dirtyUniforms; // @synthesize dirtyUniforms=_dirtyUniforms;
- (void)prepareToDraw;

@end

