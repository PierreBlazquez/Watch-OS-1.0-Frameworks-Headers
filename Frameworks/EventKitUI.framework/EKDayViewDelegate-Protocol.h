//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKDayView, EKEvent, NSArray;

@protocol EKDayViewDelegate <NSObject>

@optional
- (void)dayView:(EKDayView *)arg1 didUpdateScrollPosition:(struct CGPoint)arg2;
- (void)dayView:(EKDayView *)arg1 isPinchingDayViewWithScale:(float)arg2;
- (void)dayView:(EKDayView *)arg1 didScaleDayViewWithScale:(float)arg2;
- (void)dayView:(EKDayView *)arg1 didSelectEvent:(EKEvent *)arg2;
- (void)dayView:(EKDayView *)arg1 didCreateOccurrenceViews:(NSArray *)arg2;
- (void)dayViewDidFinishScrollingToOccurrence:(EKDayView *)arg1;
- (void)dayView:(EKDayView *)arg1 firstVisibleSecondChanged:(unsigned int)arg2;
- (void)dayViewDidTapEmptySpace:(EKDayView *)arg1;
@end

