//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject
{
    BOOL _visible;
    float _effectScale;
    NSMutableDictionary *_effectList;
}

@property(copy) NSMutableDictionary *effectList; // @synthesize effectList=_effectList;
- (id)dropShadow;
@property float effectScale; // @synthesize effectScale=_effectScale;
- (void)addLayerEffectComponent:(id)arg1;
@property BOOL visible; // @synthesize visible=_visible;
- (id)init;
- (void)dealloc;

@end
