//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKCFGExpression.h>

@class NSCharacterSet, NSMutableArray, NSString;

@interface _HKCFGNonTerminal : _HKCFGExpression
{
    NSString *_label;
    NSMutableArray *_replacementRules;
    NSCharacterSet *_charactersToBeSkipped;
}

+ (id)nonTerminalWithLabel:(id)arg1;
@property(copy, nonatomic) NSCharacterSet *charactersToBeSkipped; // @synthesize charactersToBeSkipped=_charactersToBeSkipped;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_checkForCycles;
- (id)_replacementRules;
- (id)_parseTreeWithContext:(id)arg1;
- (void)addReplacementRuleWithExpressions:(id)arg1 nodeEvaluator:(CDUnknownBlockType)arg2;
- (void)_checkForCycles:(id)arg1;
- (BOOL)_tryNodesForExpressions:(id)arg1 nodes:(id)arg2 context:(id)arg3 solutionTest:(CDUnknownBlockType)arg4;
- (id)initWithLabel:(id)arg1;
- (unsigned int)_minimumLength;
- (id)_label;
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(CDUnknownBlockType)arg2;

@end

