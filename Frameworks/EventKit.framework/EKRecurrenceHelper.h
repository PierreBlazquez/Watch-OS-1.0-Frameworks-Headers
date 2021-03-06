//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface EKRecurrenceHelper : NSObject
{
    NSString *_specifier;
    BOOL _dirty;
    BOOL _parsed;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
}

@property(readonly, nonatomic) BOOL isDirty;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(copy, nonatomic) NSString *specifier;
- (id)initWithSpecifier:(id)arg1;
- (id)_parseIndexList:(CDStruct_9bd77fb5 *)arg1 range:(CDStruct_f683c4ba)arg2;
- (id)_parseDaysOfWeek:(CDStruct_9bd77fb5 *)arg1 range:(CDStruct_f683c4ba)arg2;
- (void)_appendIndexList:(id)arg1 toSpecifier:(id)arg2 propertyKey:(unsigned short)arg3;
- (void)_appendDaysOfTheWeek:(id)arg1 toSpecifier:(id)arg2;
- (void)_parseSpecifierIfNeeded;
- (void)_clearArrays;
- (void)_updateSpecifier;
@property(copy, nonatomic) NSArray *weeksOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheYear;
@property(copy, nonatomic) NSArray *setPositions;
@property(copy, nonatomic) NSArray *daysOfTheWeek;
@property(copy, nonatomic) NSArray *monthsOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheMonth;
- (void)revert;

@end

