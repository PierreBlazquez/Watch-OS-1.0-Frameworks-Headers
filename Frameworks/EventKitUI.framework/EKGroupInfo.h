//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKSource, NSArray, NSMutableArray, NSSet, NSString;

@interface EKGroupInfo : NSObject
{
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    NSString *_typeTitle;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    BOOL _selected;
    BOOL _showSelectAllButton;
    EKSource *_source;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) EKSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) int sortOrder;
- (void)selectAll;
@property(readonly, copy, nonatomic) NSString *title;
- (id)description;
- (id)init;
- (id)copyCalendars;
- (id)calendarAtIndex:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSString *typeTitle;
- (void)insertDeclinedEventsItem;
- (void)removeCalendar:(id)arg1;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
@property(nonatomic) BOOL showSelectAllButton; // @synthesize showSelectAllButton=_showSelectAllButton;
@property(readonly, copy, nonatomic) NSSet *selectedCalendarSet;
@property(readonly, nonatomic) BOOL showCalendarNameIfSolitary;
- (void)selectNone;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
@property(readonly, nonatomic) unsigned int numCalendars;
- (void)insertCalendarInfo:(id)arg1;
@property(readonly, nonatomic) unsigned int numSelectableCalendars;
@property(readonly, nonatomic) unsigned int numSelectedCalendars;
@property(readonly, copy, nonatomic) NSSet *calendarSet;
- (id)initWithCustomGroupType:(int)arg1;
@property(readonly, nonatomic) BOOL showAddCalendarButton;
@property(readonly, retain, nonatomic) NSArray *calendarInfos;
- (id)initWithSource:(id)arg1;
@property(readonly, nonatomic) BOOL isSubscribed;

@end

