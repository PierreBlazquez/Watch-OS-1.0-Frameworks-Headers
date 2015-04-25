//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

#import "NSCopying.h"

@class EKPersistentCalendarItem, EKRecurrenceEnd, NSArray, NSDate, NSString;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying>
{
    id _helper;
    EKRecurrenceEnd *_recurrenceEnd;
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
@property(retain, nonatomic) EKPersistentCalendarItem *owner;
@property(copy, nonatomic) NSDate *endDate;
- (BOOL)isDirty;
@property(nonatomic) int interval;
@property(readonly, nonatomic) NSString *calendarIdentifier;
@property(nonatomic) int frequency;
@property(nonatomic) unsigned int count;
@property(readonly, nonatomic) NSString *UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (int)entityType;
- (id)_helper;
@property(nonatomic) int firstDayOfTheWeek;
@property(readonly, nonatomic) BOOL shouldPinMonthDays;
@property(readonly, nonatomic) NSDate *cachedEndDate;
@property(copy, nonatomic) NSArray *weeksOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheYear;
@property(copy, nonatomic) NSArray *setPositions;
@property(copy, nonatomic) NSArray *daysOfTheWeek;
@property(copy, nonatomic) NSArray *monthsOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheMonth;
- (CDStruct_6e43267c)gregorianUnits;
- (BOOL)validate:(id *)arg1;

@end

