//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKRasterMapTile : NSObject
{
    shared_ptr_edb96180 _bitmapData;
    struct VKTileKey _superTileKey;
    struct VKTileKey _finalTileKey;
    float _scale;
    struct CGImage *_image;
}

- (void)foreachTileOfSize:(unsigned int)arg1 perform:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithBitmapData:(shared_ptr_edb96180)arg1 superKey:(const struct VKTileKey *)arg2 finalKey:(const struct VKTileKey *)arg3 scale:(float)arg4;
- (id)initWithBitmapData:(shared_ptr_edb96180)arg1 tileKey:(const struct VKTileKey *)arg2 scale:(float)arg3;
- (BOOL)writeImageToFile:(id)arg1 format:(unsigned int)arg2 error:(id *)arg3;
- (id)imageDataInFormat:(unsigned int)arg1;
- (id)tileForKey:(const struct VKRasterTileKey *)arg1;
@property(readonly, nonatomic) struct VKRasterTileKey tileKey;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGImage *)_image;
- (void)dealloc;

@end

