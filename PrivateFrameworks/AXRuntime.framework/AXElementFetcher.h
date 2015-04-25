//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXElement, AXElementGroup, AXElementGroupPruner, AXVisualElementGrouper, NSArray, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AXElementFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_elementFetchQueue;
    NSObject<OS_dispatch_queue> *_elementAccessQueue;
    struct __AXObserver *_axRuntimeNotificationObserver;
    unsigned int _scheduledFetchEvent;
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;
    BOOL _enabled;
    BOOL _eventManagementEnabled;
    BOOL _groupingEnabled;
    BOOL _shouldUsePadInterfaceHeuristics;
    BOOL _fetchingElements;
    BOOL _didSendFakeScreenChangeOnLastFetch;
    id <AXElementFetcherDelegate> _delegate;
    int _fetchPolicy;
    NSMapTable *_fetchObservers;
    unsigned int _activeFetchEvents;
    NSArray *_elementCache;
    AXElementGroup *_rootGroupCache;
    AXElementGroup *_keyboardGroupCache;
    AXElement *_currentApp;
    AXVisualElementGrouper *_visualElementGrouper;
    AXElementGroupPruner *_elementGroupPruner;
    NSMutableDictionary *_postFetchFilters;
}

+ (id)springBoardElement;
+ (id)currentAppWithPositionHint:(struct CGPoint)arg1;
+ (id)_applicationForElement:(id)arg1;
+ (id)systemWideElement;
- (id)lastElement;
- (id)firstElement;
@property(retain, nonatomic) NSMutableDictionary *postFetchFilters; // @synthesize postFetchFilters=_postFetchFilters;
@property(nonatomic, getter=isFetchingElements) BOOL fetchingElements; // @synthesize fetchingElements=_fetchingElements;
@property(nonatomic) BOOL shouldUsePadInterfaceHeuristics; // @synthesize shouldUsePadInterfaceHeuristics=_shouldUsePadInterfaceHeuristics;
@property(nonatomic, getter=isGroupingEnabled) BOOL groupingEnabled; // @synthesize groupingEnabled=_groupingEnabled;
@property(retain, nonatomic) NSMapTable *fetchObservers; // @synthesize fetchObservers=_fetchObservers;
@property(nonatomic) int fetchPolicy; // @synthesize fetchPolicy=_fetchPolicy;
- (void)_debugLogElementCache;
- (void)updateKeyboardGroup:(id)arg1;
- (id)findGroupableMatchingBlock:(CDUnknownBlockType)arg1;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(char *)arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(char *)arg2;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(char *)arg2;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(char *)arg2;
- (id)closestElementToElement:(id)arg1;
- (id)findElementsMatchingBlock:(CDUnknownBlockType)arg1;
- (id)findElementMatchingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllPostFetchFilters;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (void)addPostFetchFilter:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (void)fetchEventOccurred:(unsigned int)arg1;
- (void)removeFetchEvents:(unsigned int)arg1;
- (void)unregisterFetchObserver:(id)arg1;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
@property(readonly, nonatomic) AXElementGroup *lastKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *firstKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *rootGroup;
@property(readonly, nonatomic) NSArray *availableElements;
@property(readonly, nonatomic) BOOL willFetchElements;
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned int)arg2 fetchPolicy:(int)arg3 enableEventManagement:(BOOL)arg4 enableGrouping:(BOOL)arg5 beginEnabled:(BOOL)arg6;
@property(retain, nonatomic) AXElementGroupPruner *elementGroupPruner; // @synthesize elementGroupPruner=_elementGroupPruner;
@property(retain, nonatomic) AXVisualElementGrouper *visualElementGrouper; // @synthesize visualElementGrouper=_visualElementGrouper;
- (id)_filterGroup:(id)arg1 withFilter:(CDUnknownBlockType)arg2;
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(int)arg2 label:(id)arg3 currentPid:(int)arg4;
- (id)_findGroupableMatchingBlock:(CDUnknownBlockType)arg1 inElementGroup:(id)arg2;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(BOOL)arg2 didWrap:(char *)arg3;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)closestElementToPoint:(struct CGPoint)arg1;
- (id)findElementMatchingElement:(id)arg1;
- (id)_findElementsMatchingBlock:(CDUnknownBlockType)arg1 internalRequest:(BOOL)arg2;
- (BOOL)_shouldConsiderCacheAsInvalid;
@property(retain, nonatomic) AXElementGroup *keyboardGroupCache; // @synthesize keyboardGroupCache=_keyboardGroupCache;
@property(retain, nonatomic) AXElementGroup *rootGroupCache; // @synthesize rootGroupCache=_rootGroupCache;
@property(retain, nonatomic) NSArray *elementCache; // @synthesize elementCache=_elementCache;
- (id)_filterElements:(id)arg1 withFilter:(CDUnknownBlockType)arg2;
- (void)_sendFakeScreenChangeIfNecessaryForGroup:(id)arg1 orElements:(id)arg2 appDidChange:(BOOL)arg3;
- (id)_fetchFirstElements;
- (id)_fetchVisibleElements;
@property(nonatomic) BOOL didSendFakeScreenChangeOnLastFetch; // @synthesize didSendFakeScreenChangeOnLastFetch=_didSendFakeScreenChangeOnLastFetch;
@property(nonatomic, getter=isEventManagementEnabled) BOOL eventManagementEnabled; // @synthesize eventManagementEnabled=_eventManagementEnabled;
- (id)_axNotificationsForManagedEvents;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned int)arg1 foundNewElements:(BOOL)arg2;
- (BOOL)_fetchElements:(BOOL)arg1;
- (BOOL)_fetchGroups:(BOOL)arg1;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned int)arg1;
- (double)_delayForFetchEvent:(unsigned int)arg1;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned int)arg1;
- (void)_scheduleFetchEvent:(unsigned int)arg1;
- (int)_priorityForFetchEvent:(unsigned int)arg1;
- (BOOL)_fetchEventCanBeManaged:(unsigned int)arg1;
- (void)_fetchEventOccurred:(unsigned int)arg1;
@property(nonatomic) unsigned int activeFetchEvents; // @synthesize activeFetchEvents=_activeFetchEvents;
@property(readonly, nonatomic) AXElementGroup *keyboardGroup;
@property(retain, nonatomic) AXElement *currentApp; // @synthesize currentApp=_currentApp;
- (BOOL)_updateCurrentApp;
- (id)_debugStringForFetchEvents:(unsigned int)arg1;
- (id)_debugStringForPolicy:(int)arg1;
- (void)unregisterAllFetchObservers;
- (void)disableEventManagement;
- (void)_tearDownEventCoalesceTimer;
- (void)enableEventManagement;
- (void)addFetchEvents:(unsigned int)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) id <AXElementFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)dealloc;
- (void)refresh;

@end

