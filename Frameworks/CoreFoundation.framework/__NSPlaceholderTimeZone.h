//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSTimeZone.h>

@interface __NSPlaceholderTimeZone : NSTimeZone
{
}

+ (void)initialize;
+ (id)immutablePlaceholder;
- (id)initWithName:(id)arg1;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)name;
- (id)data;
- (unsigned int)retainCount;
- (id)init;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)__initWithName:(id)arg1 cache:(BOOL)arg2;
- (id)__initWithName:(id)arg1 data:(id)arg2 cache:(BOOL)arg3;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;

@end

