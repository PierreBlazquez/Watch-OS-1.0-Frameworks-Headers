//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNPhysicsField.h>

@interface SCNPhysicsNoiseField : SCNPhysicsField
{
    float _smoothness;
    float _animationSpeed;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) float animationSpeed;
@property(nonatomic) float smoothness;
-     // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}8@0:4, name: _createField

@end

