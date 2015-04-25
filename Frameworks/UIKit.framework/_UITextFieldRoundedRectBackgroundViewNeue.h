//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView
{
    BOOL _disabled;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    float _lineWidth;
    float _cornerRadius;
}

- (void)updateView;
- (id)_initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2 lineWidth:(float)arg3 updateView:(BOOL)arg4;
- (id)_initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2 lineWidth:(float)arg3;
- (float)_pixelAlignment;
- (float)_pathInset;
- (id)_fillColor:(BOOL)arg1;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (id)_strokeColor:(BOOL)arg1;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (id)initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setActive:(BOOL)arg1;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

