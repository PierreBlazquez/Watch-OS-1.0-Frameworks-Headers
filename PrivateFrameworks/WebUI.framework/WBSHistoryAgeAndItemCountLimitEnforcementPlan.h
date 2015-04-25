//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, WBSHistoryDeletionPlan, WBSHistorySQLiteStore;

@interface WBSHistoryAgeAndItemCountLimitEnforcementPlan : NSObject
{
    WBSHistorySQLiteStore *_store;
    NSSet *_items;
    double _ageLimit;
    unsigned int _itemCountLimit;
    NSSet *_itemsToKeep;
    NSSet *_itemsToDiscard;
    WBSHistoryDeletionPlan *_deletionPlan;
}

@property(readonly, nonatomic) NSSet *itemsToDiscard; // @synthesize itemsToDiscard=_itemsToDiscard;
@property(readonly, nonatomic) NSSet *itemsToKeep; // @synthesize itemsToKeep=_itemsToKeep;
- (id)initWithSQLiteStore:(id)arg1 items:(id)arg2 ageLimit:(double)arg3 itemCountLimit:(unsigned int)arg4;
- (void)prepare;
- (id)_itemsToDiscardFromItemsOrderedByLastVisitTime:(id)arg1;
- (void)execute;
- (void).cxx_destruct;

@end

