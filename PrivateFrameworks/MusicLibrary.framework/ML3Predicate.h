//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface ML3Predicate : NSObject <NSCoding, NSCopying>
{
}

- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;
- (id)spotlightPredicate;
- (BOOL)isDynamicForEntityClass:(Class)arg1;
- (id)predicateOptimizedForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

