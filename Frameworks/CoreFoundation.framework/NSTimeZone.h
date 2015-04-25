//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)timeZoneForSecondsFromGMT:(int)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)localTimeZone;
+ (id)defaultTimeZone;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)resetSystemTimeZone;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;
+ (id)timeZoneDataVersion;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (id)knownTimeZoneNames;
+ (void)setDefaultTimeZone:(id)arg1;
+ (id)abbreviationDictionary;
+ (id)systemTimeZone;
- (int)secondsFromGMT;
- (id)initWithName:(id)arg1;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextDaylightSavingTimeTransition;
- (double)daylightSavingTimeOffset;
- (BOOL)isDaylightSavingTime;
- (id)abbreviation;
- (BOOL)isEqualToTimeZone:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (BOOL)isNSTimeZone__;
- (unsigned long)_cfTypeID;

@end

