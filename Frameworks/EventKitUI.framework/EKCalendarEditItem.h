//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKCalendar, EKEventStore;

@interface EKCalendarEditItem : NSObject
{
    EKEventStore *_store;
    EKCalendar *_calendar;
    id <EKCalendarEditItemDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
}

- (id)headerTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
- (void)reset;
- (BOOL)becomeFirstResponder;
@property(nonatomic) __weak id <EKCalendarEditItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)applyStyleProviderToCell:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (void)layoutForWidth:(float)arg1;
- (float)footerHeightForSection;
- (id)footerViewForSection;
- (BOOL)configureWithCalendar:(id)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (BOOL)saveStateToCalendar:(id)arg1;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
- (unsigned int)numberOfSubitems;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;

@end

