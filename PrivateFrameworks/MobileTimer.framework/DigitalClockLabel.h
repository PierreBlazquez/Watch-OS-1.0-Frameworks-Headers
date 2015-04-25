//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileTimer/MTDateLabel.h>

@class NSCalendar, NSDate;

@interface DigitalClockLabel : MTDateLabel
{
    NSCalendar *_calendar;
    NSDate *_baseDate;
    int _hour;
    int _minute;
}

- (void)significantTimeChange:(id)arg1;
- (BOOL)setHour:(int)arg1 minute:(int)arg2;
- (void)forceSetHour:(int)arg1 minute:(int)arg2;
- (void)refreshUI;
- (void)resetFontSizes;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
