//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSString, UIImage;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification
{
    UIImage *_image;
    NSString *_uuid;
}

+ (id)notification;
@property(readonly, retain, nonatomic) NSString *assetUUID;
- (id)object;
- (id)userInfo;
- (id)name;
@property(readonly, retain, nonatomic) UIImage *image;
- (id)_init;
- (id)description;
- (id)init;
- (void)dealloc;

@end

