//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSPredicateOperator.h>

@interface NSEqualityPredicateOperator : NSPredicateOperator
{
    BOOL _negate;
    unsigned int _options;
}

+ (BOOL)supportsSecureCoding;
- (unsigned int)options;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setNegation:(BOOL)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 negate:(BOOL)arg3;
- (void)_setOptions:(unsigned int)arg1;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 negate:(BOOL)arg3 options:(unsigned int)arg4;
- (BOOL)isNegation;

@end

