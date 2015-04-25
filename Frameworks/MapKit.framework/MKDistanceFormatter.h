//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter
{
    NSLocale *_locale;
    unsigned int _units;
    unsigned int _unitStyle;
}

@property(nonatomic) unsigned int units; // @synthesize units=_units;
- (id)stringForObjectValue:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)description;
- (id)init;
- (double)distanceFromString:(id)arg1;
- (id)stringFromDistance:(double)arg1;
- (BOOL)_useMetric;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
@property(nonatomic) unsigned int unitStyle; // @synthesize unitStyle=_unitStyle;

@end

