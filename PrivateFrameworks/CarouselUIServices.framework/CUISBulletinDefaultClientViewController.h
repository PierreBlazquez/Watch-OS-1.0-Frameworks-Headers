//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarouselUIServices/CUISBulletinClientViewController.h>

@class CUISAlertLongLookContentView, NSString, UIImage;

@interface CUISBulletinDefaultClientViewController : CUISBulletinClientViewController
{
    NSString *_title;
    NSString *_message;
    UIImage *_imageAttachment;
    CUISAlertLongLookContentView *_contentView;
}

- (id)initWithTitle:(id)arg1 message:(id)arg2 imageAttachment:(id)arg3;
- (id)headerBlurContentView;
- (BOOL)wantsHeaderBlur;
- (void).cxx_destruct;
- (void)loadView;

@end

