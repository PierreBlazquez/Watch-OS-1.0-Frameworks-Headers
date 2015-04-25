//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation
{
    BOOL _isFetchAllSubscriptionsOperation;
    NSArray *_subscriptionIDs;
    CDUnknownBlockType _fetchSubscriptionCompletionBlock;
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_subscriptionErrors;
}

+ (id)fetchAllSubscriptionsOperation;
@property(retain, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *subscriptionsBySubscriptionID; // @synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID;
@property(copy, nonatomic) CDUnknownBlockType fetchSubscriptionCompletionBlock; // @synthesize fetchSubscriptionCompletionBlock=_fetchSubscriptionCompletionBlock;
@property(nonatomic) BOOL isFetchAllSubscriptionsOperation; // @synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation;
@property(copy, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
@property(retain, nonatomic) NSMutableDictionary *subscriptionErrors; // @synthesize subscriptionErrors=_subscriptionErrors;
- (id)initWithSubscriptionIDs:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;

@end

