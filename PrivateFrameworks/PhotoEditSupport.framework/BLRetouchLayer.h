//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLBaseLayerStack, NSData;

@interface BLRetouchLayer : NSObject
{
    BOOL _enabled;
    int _brushType;
    BLRetouchLayer *_layerBelow;
    BLBaseLayerStack *_layerStack;
}

+ (id)layer;
@property(nonatomic) BLRetouchLayer *layerBelow; // @synthesize layerBelow=_layerBelow;
@property(nonatomic) int brushType; // @synthesize brushType=_brushType;
@property(nonatomic) NSData *layerData;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(float)arg3;
- (struct CGImage *)newImageForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(float)arg3;
@property(nonatomic) BLBaseLayerStack *layerStack; // @synthesize layerStack=_layerStack;
@property(readonly, nonatomic) BOOL hasLayerMask;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)init;
- (BOOL)boolForKey:(id)arg1;

@end
