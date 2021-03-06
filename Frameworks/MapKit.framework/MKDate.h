//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@class NSTimeZone;

@interface MKDate : NSDate
{
    NSDate *_date;
    NSTimeZone *_tz;
}

+ (id)dateWithNSDate:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_tz;
- (double)timeIntervalSinceReferenceDate;
- (id)description;
@property(readonly, nonatomic) NSDate *nsDate; // @synthesize nsDate=_date;
- (id)initWithNSDate:(id)arg1;
- (int)dayOfCommonEra;

@end

