//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class ML3Query, ML3QueryResultSet_BackingStore, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface ML3QueryResultSet : NSObject <NSCopying>
{
    ML3QueryResultSet_BackingStore *_backingStore;
    ML3Query *_query;
    unsigned long long _revision;
    _Bool _supportsIncrementalUpdate;
    NSString *_subCollectionCountProperty;
    NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_requestCoalescingQueue;
    unsigned long _totalCount;
    vector_a1de3f0d _sectionIndexes;
}

@property(readonly, nonatomic) unsigned long long revision; // @synthesize revision=_revision;
- (void)enumerateSectionHeadersUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)subCollectionCountAtIndex:(unsigned long)arg1;
- (unsigned int)songCountAtIndex:(unsigned long)arg1;
- (BOOL)updateToLibraryCurrentRevision;
- (void)_loadCurrentFullResultsAtIndex:(unsigned long)arg1;
- (void)resultAtIndex:(unsigned long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_mergeChangesWithFromNewPIDs:(const vector_d87a6415 *)arg1 changedPIDs:(unordered_set_cccfe4a5 *)arg2;
- (void)resetBackingStore;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)arg1;
- (BOOL)_updateToLibraryCurrentRevision;
- (void)_onQueueAddUpdateFinishedBlock:(CDUnknownBlockType)arg1;
- (unsigned int)entityLimit;
- (CDStruct_383aa905)_sectionForNameOrderSection:(unsigned char)arg1 withSections:(const vector_a1de3f0d *)arg2;
- (CDStruct_383aa905)_sectionForRowIndex:(unsigned long)arg1 withSections:(const vector_a1de3f0d *)arg2;
- (id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(BOOL)arg2;
- (id)initWithQuery:(id)arg1;
- (void)enumerateResultsUsingBlock:(CDUnknownBlockType)arg1;
- (id)resultAtIndex:(unsigned long)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)sectionIndexTitles;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) ML3Query *query; // @synthesize query=_query;
@property(readonly, nonatomic) unsigned long count;

@end

