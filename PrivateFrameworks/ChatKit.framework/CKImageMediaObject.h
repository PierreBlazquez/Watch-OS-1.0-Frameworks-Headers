//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKMediaObject.h>

@class CKImageData;

@interface CKImageMediaObject : CKMediaObject
{
    CKImageData *_imageData;
    CKImageData *_backgroundImageData;
}

+ (Class)__ck_attachmentItemClass;
+ (BOOL)isPreviewable;
+ (Class)imageDataClass;
+ (id)attachmentSummary:(unsigned int)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
- (int)mediaType;
@property(readonly, retain, nonatomic) CKImageData *imageData;
- (Class)_cknmp_mediaPresenterClass;
- (id)_cknmp_presenterTitle;
- (id)generateThumbnailForWidth:(float)arg1 orientation:(BOOL)arg2;
- (struct CGSize)bbSize;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (BOOL)canExport;
- (void)export:(id)arg1;
- (id)location;
- (void)dealloc;

@end

