//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface UIAlertButton : UIButton
{
    float _imageOffset;
    BOOL _isNewStyle;
    UIImageView *_highlightView;
}

@property(nonatomic) BOOL isNewStyle; // @synthesize isNewStyle=_isNewStyle;
@property(nonatomic) float imageOffset; // @synthesize imageOffset=_imageOffset;
@property(retain, nonatomic) UIImage *highlightImage;
- (void)_transitionHighlightViewToHighlighted:(BOOL)arg1;
@property(readonly) UIImageView *highlightView; // @synthesize highlightView=_highlightView;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithTitle:(id)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (BOOL)_isFocusableElement;
- (void)_focusStateDidChange;
- (void)setEnabled:(BOOL)arg1;
- (id)image;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end
