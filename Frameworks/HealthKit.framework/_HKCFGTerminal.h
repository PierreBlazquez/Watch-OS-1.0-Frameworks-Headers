//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKCFGExpression.h>

@interface _HKCFGTerminal : _HKCFGExpression
{
}

+ (id)terminalMatchingSequenceOfCharactersInSet:(id)arg1;
+ (id)terminalMatchingAnyDouble;
+ (id)terminalMatchingAnyInteger;
+ (id)terminalMatchingCharacterInString:(id)arg1;
+ (id)terminalMatchingDoubleWithCondition:(CDUnknownBlockType)arg1;
+ (id)terminalMatchingIntegerWithCondition:(CDUnknownBlockType)arg1;
+ (id)terminalMatchingCharacterInSet:(id)arg1;
+ (id)terminalMatchingString:(id)arg1 caseSensitive:(BOOL)arg2;
+ (id)terminalMatchingString:(id)arg1;
- (id)characterSet;
- (BOOL)_scanValue:(id *)arg1 withScanner:(id)arg2;
- (unsigned int)_minimumLength;
- (id)_label;
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(CDUnknownBlockType)arg2;

@end

