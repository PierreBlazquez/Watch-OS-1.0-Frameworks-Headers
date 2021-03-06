//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPasteboardControl.h>

@class ABClippingImageView, ABUIPerson, UIImage, UIImageView;

@interface ABPersonImageView : ABPasteboardControl
{
    UIImageView *_personImageView;
    UIImageView *_editingImageView;
    ABClippingImageView *_emptyImageView;
    ABClippingImageView *_pasteboardMaskImageView;
    UIImage *_personImage;
    BOOL _isEditing;
    BOOL _showLabel;
    BOOL _needsReflow;
    BOOL _needsReload;
    BOOL _allowsEditing;
    BOOL _multiplePhotoBackdropEnabled;
    ABUIPerson *_displayedPerson;
    id <ABStyleProvider> _styleProvider;
    id <ABPersonImageDataDelegate> _imageDataDelegate;
}

+ (id)newImageWithName:(id)arg1;
- (void)reloadIfNeeded;
@property(retain, nonatomic) ABUIPerson *displayedPerson; // @synthesize displayedPerson=_displayedPerson;
- (void)setNeedsReload;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
@property(readonly, nonatomic) UIImage *backgroundImage;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)reload;
- (void)layoutSubviews;
- (void)dealloc;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;
@property(nonatomic) BOOL multiplePhotoBackdropEnabled; // @synthesize multiplePhotoBackdropEnabled=_multiplePhotoBackdropEnabled;
- (id)_newDictionaryWithImageData;
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)arg1;
- (id)pasteboardMaskImageView;
- (void)setNeedsReflow;
- (id)copyDefaultImageForPerson:(id)arg1;
- (void)reflowIfNeeded;
- (void)reflow;
- (id)emptyImageView;
- (id)framedPhoto;
- (id)editingImageView;
- (void)_drawEditLabelInFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIImage *attributionImage;
@property(readonly, nonatomic) UIImage *overlayImage;
@property(readonly, nonatomic) UIImage *maskImage;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
@property(nonatomic) id <ABPersonImageDataDelegate> imageDataDelegate; // @synthesize imageDataDelegate=_imageDataDelegate;
- (id)personImageView;

@end

