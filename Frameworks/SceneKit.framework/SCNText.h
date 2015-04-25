//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@class NSString, UIBezierPath, UIFont;

@interface SCNText : SCNGeometry
{
    id _reserved;
    float _flatness;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    struct UIBezierPath *_chamferProfile;
    int _primitiveType;
    id _string;
    UIFont *_font;
    BOOL _wrapped;
    long _alignmentMode;
    long _truncationMode;
    BOOL _useCustomContainerFrame;
    struct CGRect _customContainerFrame;
    BOOL __wantsSeparateGeometryElements;
}

+ (BOOL)supportsSecureCoding;
+ (id)text;
+ (id)textWithString:(id)arg1 extrusionDepth:(float)arg2;
+ (id)SCNJSExportProtocol;
- (int)primitiveType;
@property(copy, nonatomic) NSString *alignmentMode;
@property(copy, nonatomic) id string;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) float flatness;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (float)discretizedStraightLineMaxLength;
- (BOOL)_wantsSeparateGeometryElements;
- (void)set_wantsSeparateGeometryElements:(BOOL)arg1;
- (void)setDiscretizedStraightLineMaxLength:(float)arg1;
- (void)_customDecodingOfSCNText:(id)arg1;
- (void)_customEncodingOfSCNText:(id)arg1;
- (CDStruct_8016081b)params;
- (id)initWithTextGeometryRef:(struct __C3DTextGeometry *)arg1;
@property(copy, nonatomic) UIBezierPath *chamferProfile;
@property(copy, nonatomic) NSString *truncationMode;
@property(nonatomic) struct CGRect containerFrame;
@property(nonatomic, getter=isWrapped) BOOL wrapped;
@property(nonatomic) float extrusionDepth;
- (id)initPresentationTextGeometryWithTextGeometryRef:(struct __C3DTextGeometry *)arg1;
@property(nonatomic) float chamferRadius;
- (void)_syncObjCModel:(struct __C3DTextGeometry *)arg1;
- (void)setPrimitiveType:(int)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(float *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (id)presentationGeometry;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;

@end

