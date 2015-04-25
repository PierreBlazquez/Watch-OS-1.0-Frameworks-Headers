//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CAAnimation, NSString, SCNNode;

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying>
{
    id _reserved;
    CAAnimation *_animation;
    int _inputMode;
    float _inputScale;
    float _inputBias;
    SCNNode *_inputOrigin;
    NSString *_inputProperty;
    id _c3dAnimation;
}

+ (BOOL)supportsSecureCoding;
+ (id)particlePropertyControllerWithAnimation:(id)arg1;
+ (id)controllerWithAnimation:(id)arg1;
+ (id)SCNJSExportProtocol;
@property(retain, nonatomic) CAAnimation *animation;
@property(nonatomic) int inputMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_customDecodingOfSCNParticlePropertyController:(id)arg1;
- (void)_customEncodingOfSCNParticlePropertyController:(id)arg1;
@property(copy, nonatomic) NSString *inputProperty;
@property(nonatomic) __weak SCNNode *inputOrigin;
@property(nonatomic) float inputBias;
@property(nonatomic) float inputScale;
- (id)c3dAnimation;
- (void)setC3dAnimation:(id)arg1;

@end

