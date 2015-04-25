//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface OSDPDCAResult : NSObject
{
    _Bool _passed;
    NSString *_name;
    NSString *_failureMessage;
    NSString *_subtest;
    NSString *_subsubtest;
    unsigned int _priority;
    NSNumber *_value;
    NSNumber *_lowerLimit;
    NSNumber *_upperLimit;
    NSString *_units;
}

@property(copy, nonatomic) NSString *units; // @synthesize units=_units;
@property(copy, nonatomic) NSString *failureMessage; // @synthesize failureMessage=_failureMessage;
@property(copy, nonatomic) NSNumber *upperLimit; // @synthesize upperLimit=_upperLimit;
@property(copy, nonatomic) NSNumber *lowerLimit; // @synthesize lowerLimit=_lowerLimit;
@property(copy, nonatomic) NSString *subsubtest; // @synthesize subsubtest=_subsubtest;
@property(copy, nonatomic) NSString *subtest; // @synthesize subtest=_subtest;
@property(nonatomic) _Bool passed; // @synthesize passed=_passed;
- (_Bool)getDoubleFromString:(id)arg1 doubleValue:(double *)arg2;
- (id)initParametricTestNamed:(id)arg1 passed:(_Bool)arg2 value:(id)arg3 subtest:(id)arg4 subsubtest:(id)arg5 lowerLimit:(id)arg6 upperLimit:(id)arg7 units:(id)arg8 failureMessage:(id)arg9 priority:(unsigned int)arg10;
- (id)initPassFailTestNamed:(id)arg1 passed:(_Bool)arg2 subtest:(id)arg3 subsubtest:(id)arg4 failureMessage:(id)arg5 priority:(unsigned int)arg6;
- (void).cxx_destruct;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
