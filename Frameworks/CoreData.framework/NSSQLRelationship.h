//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLProperty.h>

@class NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty
{
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (BOOL)isOrdered;
- (void)dealloc;
- (void)_setForeignOrderKey:(id)arg1;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)_setInverseRelationship:(id)arg1;
- (id)sourceEntity;
- (id)relationshipDescription;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)inverseRelationship;
- (id)foreignKey;
- (id)correlationTableName;
- (id)destinationEntity;

@end

