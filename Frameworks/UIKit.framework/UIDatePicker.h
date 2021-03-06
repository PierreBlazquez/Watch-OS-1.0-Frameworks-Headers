//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "NSCoding.h"
#import "UIPickerViewScrollTesting.h"

@class NSCalendar, NSDate, NSLocale, NSTimeZone, UIColor, _UIDatePickerView;

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding>
{
    _UIDatePickerView *_pickerView;
    BOOL _useCurrentDateDuringDecoding;
}

+ (Class)_pickerViewClass;
- (id)_labelTextForCalendarUnit:(unsigned int)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_dateUnderSelectionBar) NSDate *dateUnderSelectionBar; // @dynamic dateUnderSelectionBar;
- (void)_setHighlightsToday:(BOOL)arg1;
@property(nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) BOOL allowsZeroTimeInterval; // @dynamic allowsZeroTimeInterval;
@property(nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) BOOL allowsZeroCountDownDuration; // @dynamic allowsZeroCountDownDuration;
@property(nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome; // @dynamic usesBlackChrome;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)setDate:(id)arg1 animate:(BOOL)arg2;
- (int)second;
- (int)minute;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setDateComponents:(id)arg1;
- (id)dateComponents;
@property(nonatomic) double countDownDuration; // @dynamic countDownDuration;
@property(retain, nonatomic) NSLocale *locale; // @dynamic locale;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) int minuteInterval; // @dynamic minuteInterval;
@property(retain, nonatomic) NSDate *maximumDate; // @dynamic maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @dynamic minimumDate;
@property(copy, nonatomic) NSCalendar *calendar; // @dynamic calendar;
@property(retain, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
- (id)_locale;
@property(nonatomic) int datePickerMode; // @dynamic datePickerMode;
@property(nonatomic, getter=_useCurrentDateDuringDecoding, setter=_setUseCurrentDateDuringDecoding:) BOOL useCurrentDateDuringDecoding;
@property(readonly, nonatomic, getter=_isTimeIntervalMode) BOOL isTimeIntervalMode; // @dynamic isTimeIntervalMode;
- (void)_setLocale:(id)arg1;
- (void)_insertPickerView;
@property(nonatomic) double timeInterval; // @dynamic timeInterval;
- (int)hour;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, nonatomic, getter=_contentWidth) float contentWidth; // @dynamic contentWidth;
- (void)invalidateIntrinsicContentSize;
- (void)awakeFromNib;
@property(retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property(retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property(nonatomic, getter=_usesModernStyle, setter=_setUsesModernStyle:) BOOL _usesModernStyle;
@property(nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) BOOL drawsBackground; // @dynamic drawsBackground;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_performScrollTest:(id)arg1 withIterations:(int)arg2 rowsToScroll:(int)arg3 inComponent:(int)arg4;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

