//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, PKCatalogGroup;

@interface PKGroup : NSObject
{
    PKCatalogGroup *_catalogGroup;
    NSMutableDictionary *_passesByUniqueID;
    BOOL _local;
    id <PKGroupDelegate> _delegate;
    unsigned int _frontmostPassIndex;
}

@property(nonatomic) unsigned int frontmostPassIndex; // @synthesize frontmostPassIndex=_frontmostPassIndex;
- (void)enumerateUniqueIDsWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)containsOnlyUniqueID:(id)arg1;
- (BOOL)containsPasses;
- (void)handleUserPassDelete:(id)arg1;
- (id)copyCatalogGroup;
- (void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3;
- (id)initWithCatalogGroup:(id)arg1 passes:(id)arg2;
- (unsigned int)indexForPassUniqueID:(id)arg1;
- (id)passAtIndex:(unsigned int)arg1;
- (unsigned int)passCount;
- (unsigned int)_indexOfUniqueID:(id)arg1;
- (void)_removeUniqueID:(id)arg1 notify:(BOOL)arg2;
- (void)_insertPass:(id)arg1 atIndex:(unsigned int)arg2 notify:(BOOL)arg3;
- (void)_moveUniqueID:(id)arg1 toIndex:(unsigned int)arg2 notify:(BOOL)arg3;
- (void)_updatePass:(id)arg1 notify:(BOOL)arg2;
- (id)passWithUniqueID:(id)arg1;
@property(nonatomic) id <PKGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)dealloc;
@property(nonatomic, getter=isLocal) BOOL local; // @synthesize local=_local;
@property(readonly, nonatomic) NSNumber *groupID;

@end

