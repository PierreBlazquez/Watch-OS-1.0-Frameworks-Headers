//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface HDSQLitePredicate : NSObject <NSCopying>
{
}

+ (id)compoundPredicateWithPredicate:(id)arg1 otherPredicate:(id)arg2;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)SQLForEntityClass:(Class)arg1;
- (BOOL)isCompatibleWithPredicate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

