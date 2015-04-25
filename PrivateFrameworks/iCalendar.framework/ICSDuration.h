//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface ICSDuration : NSObject <NSCoding>
{
    double _duration;
}

+ (id)durationFromRFC2445UTF8String:(const char *)arg1;
+ (id)durationFromICSString:(id)arg1;
+ (id)generateDurationFromICSString:(id)arg1;
- (int)weeks;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (int)minutes;
- (int)seconds;
- (int)hours;
- (int)days;
- (id)ICSStringWithOptions:(unsigned int)arg1;
- (double)timeInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isNegative;
- (id)initWithWeeks:(int)arg1 days:(int)arg2 hours:(int)arg3 minutes:(int)arg4 seconds:(int)arg5;

@end

