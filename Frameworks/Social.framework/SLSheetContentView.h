//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSMutableDictionary, SLSheetTextComposeView, UILabel, UITextView;

@interface SLSheetContentView : UIView
{
    SLSheetTextComposeView *_textComposeView;
    NSMutableArray *_constraints;
    NSMutableDictionary *_intrinsicSizes;
    float _previewTopMargin;
    float _textViewTopMargin;
    UIView *_bottomSeparator;
    UIView *_autoCompletionModeSeparator;
    int _currentVerticalSizeClass;
    BOOL _autoCompletionMode;
    float _autoCompletionTextViewHeight;
    UIView *_previewView;
    UIView *_accessoryView;
}

@property(readonly, nonatomic) UILabel *placeholderLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITextView *textView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)adjustComposeViewForPreview;
- (void)updateTextViewMargin;
- (void)updatePreviewMargin;
- (float)_textTopMarginForContentSize:(struct CGSize)arg1;
- (float)_previewMarginForContentSize:(struct CGSize)arg1;
- (void)resetPreview;
- (void)_resetAccessoryView;
- (void)_setConstraints;
- (void)_setupConstraints;
- (void)_setupView;
- (void)beginAutoCompletionMode;
- (void)preflightAutoCompletionModeWithApparentHeight:(float)arg1;
- (void)endAutoCompletionMode;
- (void)setIntrinsicSize:(struct CGSize)arg1 forVerticalSizeClass:(int)arg2;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void)setCurrentVerticalSizeClass:(int)arg1;

@end

