//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import "EKIdentityProtocol.h"

@class EKCalendar, EKCalendarItem, NSDate, NSNumber, NSString, NSURL;

@interface EKResourceChange : EKObject <EKIdentityProtocol>
{
}

- (id)lastName;
- (id)firstName;
@property(readonly, nonatomic) unsigned int changeType;
@property(readonly, retain, nonatomic) EKCalendar *calendar;
@property(readonly, nonatomic) NSNumber *deleteCount;
- (id)name;
@property(readonly, copy, nonatomic) NSDate *timestamp;
- (id)_calendarItemRelation;
- (id)_persistentResourceChange;
@property(readonly, nonatomic) unsigned int publicStatus;
@property(readonly, copy, nonatomic) NSString *changedByLastName;
@property(readonly, copy, nonatomic) NSString *changedByFirstName;
@property(readonly, copy, nonatomic) NSURL *changedByAddress;
@property(readonly, nonatomic) NSNumber *updateCount;
@property(readonly, nonatomic) NSNumber *createCount;
@property(readonly, copy, nonatomic) NSString *changedByDisplayName;
@property(readonly, nonatomic) NSString *deletedTitle;
@property(readonly, nonatomic) BOOL locationChanged;
@property(readonly, nonatomic) BOOL titleChanged;
@property(readonly, nonatomic) BOOL timeChanged;
@property(readonly, nonatomic) BOOL dateChanged;
- (id)lazyLoadRelationForKey:(id)arg1;
- (void)clearAlertedStatus;
@property(readonly, retain, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, nonatomic) BOOL alerted;
- (id)emailAddress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

