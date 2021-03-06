//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSEntityDescription, NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying>
{
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st {
        unsigned int _readOnly:1;
        unsigned int _reservedFlags:31;
    } _cd_flags;
    unsigned int _cd_nullFlags_;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (unsigned int)newBatchAllocation:(id *)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id *)arg3;
+ (Class)classForEntity:(id)arg1;
+ (void)_entityDeallocated;
- (void)finalize;
- (id)initWithObjectID:(id)arg1;
@property(readonly, nonatomic) NSEntityDescription *entity;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)description;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (id)copy;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (id)_descriptionValues;
- (id)_snapshot_;

@end

