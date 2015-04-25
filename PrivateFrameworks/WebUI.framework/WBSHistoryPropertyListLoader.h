//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSHistoryLoader.h"

@class NSCountedSet, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface WBSHistoryPropertyListLoader : NSObject <WBSHistoryLoader>
{
    NSURL *_url;
    unsigned int _itemCountLimit;
    double _ageLimit;
    Class _historyItemClass;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    BOOL _loadInProgress;
    NSMutableArray *_loadedItems;
    NSMutableArray *_loadedDiscardedItems;
    NSCountedSet *_loadedStringsForUserTypedDomainExpansion;
    id <WBSHistoryLoaderDelegate> _delegate;
}

- (void)_finishLoadingOnMainThread;
- (BOOL)_loadHistoryFromDictionary:(id)arg1;
- (void)_finishLoadingOnMainThreadIfNeeded;
- (void)waitForLoadingToComplete;
- (void)_loadHistory;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned int)arg2 ageLimit:(double)arg3 historyItemClass:(Class)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WBSHistoryLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

