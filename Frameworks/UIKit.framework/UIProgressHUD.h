//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIProgressIndicator, UIWindow;

@interface UIProgressHUD : UIView
{
    UIProgressIndicator *_progressIndicator;
    UILabel *_progressMessage;
    UIImageView *_doneView;
    UIWindow *_parentWindow;
    struct {
        unsigned int isShowing:1;
        unsigned int isShowingText:1;
        unsigned int fixedFrame:1;
        unsigned int reserved:30;
    } _progressHUDFlags;
}

- (void)done;
- (void)showInView:(id)arg1;
- (void)setShowsText:(BOOL)arg1;
- (id)_progressIndicator;
- (void)setFontSize:(int)arg1;
- (id)initWithWindow:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)show:(BOOL)arg1;
- (void)hide;

@end

