//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSTimeZone.h>

@interface __NSTimeZone : NSTimeZone
{
    struct __CFString *_name;
    struct __CFData *_data;
    void **_ucal;
    struct _opaque_pthread_mutex_t _lock;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)__new:(struct __CFString *)arg1 cache:(BOOL)arg2;
+ (id)__new:(struct __CFString *)arg1 data:(struct __CFData *)arg2;
- (void)finalize;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)name;
- (id)data;
- (void)dealloc;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;

@end

