//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableSet.h"

@class NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableSet : NSMutableSet
{
    int _cd_rc;
    struct _NSFaultingMutableSetFlags _flags;
    id _realSet;
    NSManagedObject *_source;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
- (void)setSet:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
@property(readonly, nonatomic, getter=isFault) BOOL fault;
- (id)member:(id)arg1;
@property(readonly, nonatomic) NSManagedObject *source;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)valueForKeyPath:(id)arg1;
- (id)objectEnumerator;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)minusSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)allObjects;
- (void)intersectSet:(id)arg1;
- (id)anyObject;
- (void)addObjectsFromArray:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)description;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (unsigned int)count;
- (void)removeObject:(id)arg1;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)valueForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (Class)classForArchiver;
- (id)replacementObjectForCoder:(id)arg1;
- (BOOL)_isIdenticalFault:(id)arg1;
- (BOOL)_shouldProcessKVOChange;
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)willReadWithContents:(id)arg1;
@property(readonly, nonatomic) NSPropertyDescription *relationship;
- (void)turnIntoFault;
- (void)getObjects:(id *)arg1;
- (void)willRead;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3;

@end

