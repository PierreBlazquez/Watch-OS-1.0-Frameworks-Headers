//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    double _duration;
    NSDate *_referenceDate;
    id _underlyingResult;
    BOOL _timeIsSignificant;
    BOOL _timeIsApproximate;
    BOOL _timeIsPast;
}

- (unsigned long long)resultType;
@property(readonly) NSTimeZone *timeZone;
- (struct _NSRange)range;
- (id)date;
@property(readonly) double duration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly) BOOL timeIsPast;
@property(readonly) BOOL timeIsApproximate;
@property(readonly) BOOL timeIsSignificant;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5;
@property(readonly) NSDate *referenceDate;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2;
@property(readonly) void *underlyingResult;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;

@end

