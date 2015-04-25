//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, UIImage;

@interface PHImage : NSObject
{
    BOOL _isPlaceholder;
    UIImage *_uiImage;
    NSData *_data;
    unsigned int _width;
    unsigned int _height;
    unsigned int _bytesPerRow;
    unsigned int _dataWidth;
    unsigned int _dataHeight;
    unsigned int _dataOffset;
    int _format;
}

+ (id)imageWithData:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bytesPerRow:(unsigned int)arg4 dataWidth:(unsigned int)arg5 dataHeight:(unsigned int)arg6 dataOffset:(unsigned int)arg7 format:(int)arg8 isPlaceholder:(BOOL)arg9;
+ (id)imageWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(BOOL)arg3;
@property(readonly, nonatomic) int format; // @synthesize format=_format;
@property(readonly, nonatomic) BOOL isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;
@property(readonly, nonatomic) unsigned int dataOffset; // @synthesize dataOffset=_dataOffset;
@property(readonly, nonatomic) unsigned int dataHeight; // @synthesize dataHeight=_dataHeight;
@property(readonly, nonatomic) unsigned int dataWidth; // @synthesize dataWidth=_dataWidth;
- (id)initWithData:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bytesPerRow:(unsigned int)arg4 dataWidth:(unsigned int)arg5 dataHeight:(unsigned int)arg6 dataOffset:(unsigned int)arg7 format:(int)arg8 isPlaceholder:(BOOL)arg9;
- (id)initWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(BOOL)arg3;
@property(readonly, nonatomic) UIImage *uiImage; // @synthesize uiImage=_uiImage;
@property(readonly, nonatomic) unsigned int bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;

@end

