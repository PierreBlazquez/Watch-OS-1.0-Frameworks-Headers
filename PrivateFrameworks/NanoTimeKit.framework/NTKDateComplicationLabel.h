//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "NTKDateComplicationDisplay.h"

@class NSString, UIColor, UIFont, UILabel, UIView;

@interface NTKDateComplicationLabel : UIControl <NTKDateComplicationDisplay>
{
    BOOL _frozen;
    NSString *_currentDateText;
    UILabel *_internalLabel;
    UIView *_highlightView;
    BOOL _usesLegibility;
    unsigned int complicationType;
    id <NTKComplicationDisplayObserver> displayObserver;
    unsigned int _dateStyle;
    int _sizeStyle;
    UIFont *_font;
    UIColor *_textColor;
}

@property(readonly, nonatomic) int sizeStyle; // @synthesize sizeStyle=_sizeStyle;
- (struct CGSize)_highlightInset;
- (float)_legibtilityShadowRadius;
- (float)_cornerRadius;
@property(nonatomic) BOOL usesLegibility; // @synthesize usesLegibility=_usesLegibility;
- (BOOL)shouldCancelTouchesInScrollview;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property(nonatomic) unsigned int complicationType; // @synthesize complicationType;
- (void)setDateComplicationText:(id)arg1 forDateStyle:(unsigned int)arg2;
- (unsigned int)supportedDateComplicationDateStyles;
- (id)initWithDateStyle:(unsigned int)arg1 andSizeStyle:(int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) float _lastLineBaseline;
- (void)_setText:(id)arg1;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)_setFont:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) unsigned int dateStyle; // @synthesize dateStyle=_dateStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

