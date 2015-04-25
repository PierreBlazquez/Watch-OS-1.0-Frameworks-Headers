//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Social/SLSheetImagePreviewView.h>

@class UIImageView, UIView;

@interface SLSheetBevelledImageView : SLSheetImagePreviewView
{
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
    BOOL _needsURLPlaceholderImage;
}

- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)init;
- (void)setImage:(id)arg1;
@property(nonatomic) BOOL needsURLPlaceholderImage; // @synthesize needsURLPlaceholderImage=_needsURLPlaceholderImage;
- (void)ensurePlaceholderPreviewImage;
- (BOOL)generatePreviewImageFromAttachments;

@end

