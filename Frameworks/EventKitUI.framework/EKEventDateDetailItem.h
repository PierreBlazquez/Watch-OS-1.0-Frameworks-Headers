//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import "EKCellShortener.h"

@class NSDate, NSString, PreferencesDoubleTwoPartValueCell;

@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener>
{
    PreferencesDoubleTwoPartValueCell *_cell;
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _indent;
}

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)shortenCell:(id)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

