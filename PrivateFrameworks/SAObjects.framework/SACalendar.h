//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSDate, NSString;

@interface SACalendar : AceObject <SAAceSerializable>
{
}

+ (id)calendarWithDictionary:(id)arg1 context:(id)arg2;
+ (id)calendar;
@property(copy, nonatomic) NSString *timeZoneId;
- (id)encodedClassName;
@property(copy, nonatomic) NSDate *date;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

