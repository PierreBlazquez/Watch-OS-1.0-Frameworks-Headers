//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKCamera;

@interface VKMapSnapshot : NSObject
{
    struct CGImage *_image;
    unsigned long _width;
    unsigned long _height;
    float _scale;
    VKCamera *_camera;
}

- (BOOL)writeImageToFile:(id)arg1 format:(unsigned int)arg2 error:(id *)arg3;
- (CDStruct_c3b9c2ee)coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)imageDataInFormat:(unsigned int)arg1;
- (id)_initWithImage:(struct CGImage *)arg1 scale:(float)arg2 camera:(id)arg3;
@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
- (id)description;
- (void)dealloc;

@end

