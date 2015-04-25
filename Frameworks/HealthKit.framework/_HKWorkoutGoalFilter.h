//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class HKQuantity;

@interface _HKWorkoutGoalFilter : _HKFilter
{
    HKQuantity *_comparisonQuantity;
    unsigned int _goalType;
    unsigned int _operatorType;
}

+ (BOOL)supportsSecureCoding;
+ (id)filterWithComparisonQuantity:(id)arg1 goalType:(unsigned int)arg2 operatorType:(unsigned int)arg3;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
@property(readonly, nonatomic) HKQuantity *comparisonQuantity; // @synthesize comparisonQuantity=_comparisonQuantity;
@property(readonly, nonatomic) unsigned int goalType; // @synthesize goalType=_goalType;
- (BOOL)acceptsDataObject:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned int operatorType; // @synthesize operatorType=_operatorType;

@end

