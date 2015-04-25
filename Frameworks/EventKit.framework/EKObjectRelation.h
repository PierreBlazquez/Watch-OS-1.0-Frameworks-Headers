//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKObject, NSString;

@interface EKObjectRelation : NSObject
{
    EKObject *_owner;
    NSString *_relationName;
    BOOL _dirty;
    BOOL _loaded;
    NSString *_inverseName;
}

- (BOOL)isDirty;
- (void)rollback;
- (void)reset;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) EKObject *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSString *relationName; // @synthesize relationName=_relationName;
- (void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (BOOL)isWeak;
@property(readonly, nonatomic) NSString *inverseName; // @synthesize inverseName=_inverseName;
- (void)relatedObjectDidChange;
- (id)committedValue;
- (void)updatePersistentObject;
- (id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3;
- (BOOL)validate:(id *)arg1;
- (void)didCommit;
- (void)refresh;

@end

