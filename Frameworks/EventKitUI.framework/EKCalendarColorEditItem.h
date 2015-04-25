//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray;

@interface EKCalendarColorEditItem : EKCalendarEditItem
{
    NSMutableArray *_cells;
    unsigned int _checkedRow;
}

@property(readonly, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
- (id)headerTitle;
- (void).cxx_destruct;
- (void)reset;
- (id)_cellForColor:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (BOOL)saveStateToCalendar:(id)arg1;
- (unsigned int)numberOfSubitems;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;

@end

