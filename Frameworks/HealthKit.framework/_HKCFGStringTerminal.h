//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKCFGTerminal.h>

@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal
{
    BOOL _caseSensitive;
    NSString *_string;
}

- (id)characterSet;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (BOOL)_scanValue:(id *)arg1 withScanner:(id)arg2;
- (unsigned int)_minimumLength;
- (id)_label;
@property(nonatomic) BOOL caseSensitive; // @synthesize caseSensitive=_caseSensitive;

@end
