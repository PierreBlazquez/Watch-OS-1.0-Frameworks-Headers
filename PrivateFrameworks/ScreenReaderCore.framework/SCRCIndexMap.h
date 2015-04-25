//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface SCRCIndexMap : NSObject <NSCopying, NSCoding>
{
    struct __CFDictionary *_map;
}

- (void)addObjectsFromIndexMap:(id)arg1;
- (id)indexes;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjects:(id *)arg1 andIndexes:(unsigned int *)arg2 count:(unsigned long)arg3;
- (id)_initAndDeepCopyIndexMap:(id)arg1;
- (id)_initWithIndexMap:(id)arg1;
- (id)objectForIndex:(unsigned long)arg1;
- (unsigned int *)_createIndexesWithSize:(unsigned int *)arg1;
- (void)setObject:(id)arg1 forIndex:(unsigned long)arg2;
- (void)removeObjectForIndex:(unsigned long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)removeAllObjects;
- (id)init;
- (unsigned long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

