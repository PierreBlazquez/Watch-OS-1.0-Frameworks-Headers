//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface NTKSolarDiskView : UIView
{
    float _horizonLine;
    UIView *_sunUpView;
    UIView *_sunDownFillView;
    UIView *_sunDownStrokeView;
    UIView *_sunDownStrokeKnockoutView;
    UIView *_sunDownFillMask;
    UIView *_sunDownStrokeMask;
}

@property(retain, nonatomic) UIView *sunDownStrokeMask; // @synthesize sunDownStrokeMask=_sunDownStrokeMask;
@property(retain, nonatomic) UIView *sunDownFillMask; // @synthesize sunDownFillMask=_sunDownFillMask;
@property(nonatomic) float horizonLine; // @synthesize horizonLine=_horizonLine;
@property(retain, nonatomic) UIView *sunDownStrokeKnockoutView; // @synthesize sunDownStrokeKnockoutView=_sunDownStrokeKnockoutView;
@property(retain, nonatomic) UIView *sunDownStrokeView; // @synthesize sunDownStrokeView=_sunDownStrokeView;
@property(retain, nonatomic) UIView *sunDownFillView; // @synthesize sunDownFillView=_sunDownFillView;
@property(retain, nonatomic) UIView *sunUpView; // @synthesize sunUpView=_sunUpView;
- (void).cxx_destruct;
- (void)setCenter:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

