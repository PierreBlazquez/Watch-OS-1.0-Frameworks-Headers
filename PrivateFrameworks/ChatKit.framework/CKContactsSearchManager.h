//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFContactsSearchConsumer.h"

@class MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface CKContactsSearchManager : NSObject <MFContactsSearchConsumer>
{
    BOOL _suppressGroupSuggestions;
    id <CKContactsSearchManagerDelegate> _delegate;
    NSArray *_enteredRecipients;
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    unsigned int _pendingSearchTypes;
    NSNumber *_currentSearchTaskID;
    NSString *_searchText;
    NSArray *_conversationCache;
    NSMutableDictionary *_recentsDateMap;
}

@property(retain, nonatomic) NSMutableDictionary *recentsDateMap; // @synthesize recentsDateMap=_recentsDateMap;
@property(nonatomic) unsigned int pendingSearchTypes; // @synthesize pendingSearchTypes=_pendingSearchTypes;
@property(retain, nonatomic) MFContactsSearchResultsModel *searchResultsModel; // @synthesize searchResultsModel=_searchResultsModel;
@property(retain, nonatomic) MFContactsSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(nonatomic) BOOL suppressGroupSuggestions; // @synthesize suppressGroupSuggestions=_suppressGroupSuggestions;
@property(retain, nonatomic) NSArray *enteredRecipients; // @synthesize enteredRecipients=_enteredRecipients;
- (void)searchWithText:(id)arg1;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned int)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned int)arg2 taskID:(id)arg3;
- (void)_sortSearchResultsWithCoreRecentsResults:(id)arg1 namedSearchResults:(id)arg2;
@property(copy, nonatomic) NSArray *conversationCache; // @synthesize conversationCache=_conversationCache;
@property(retain, nonatomic) NSNumber *currentSearchTaskID; // @synthesize currentSearchTaskID=_currentSearchTaskID;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)cancelSearch;
- (void)chatStateChanged:(id)arg1;
- (void)_generateConversationCache;
@property(nonatomic) id <CKContactsSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

