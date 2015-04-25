//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface UIKBRenderConfig : NSObject <NSCopying>
{
    BOOL _lightKeyboard;
    float _blurRadius;
    float _blurSaturation;
    float _keycapOpacity;
    float _lightKeycapOpacity;
}

+ (id)configForAppearance:(int)arg1;
+ (id)darkConfig;
+ (id)defaultConfig;
+ (int)backdropStyleForStyle:(int)arg1;
@property(nonatomic) float blurSaturation; // @synthesize blurSaturation=_blurSaturation;
@property(nonatomic) float lightKeycapOpacity; // @synthesize lightKeycapOpacity=_lightKeycapOpacity;
@property(nonatomic) float keycapOpacity; // @synthesize keycapOpacity=_keycapOpacity;
@property(nonatomic) BOOL lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
@property(readonly, nonatomic) BOOL whiteText;
@property(readonly, nonatomic) int backdropStyle;
@property(nonatomic) float blurRadius; // @synthesize blurRadius=_blurRadius;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end

