//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchSharesOperation : CKOperation
{
    BOOL _isFetchAllSharesOperation;
    NSArray *_shareIDs;
    CDUnknownBlockType _fetchSharesCompletionBlock;
    NSMutableDictionary *_sharesByShareID;
    NSMutableDictionary *_shareIDErrors;
}

+ (id)fetchAllSharesOperation;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(copy, nonatomic) CDUnknownBlockType fetchSharesCompletionBlock; // @synthesize fetchSharesCompletionBlock=_fetchSharesCompletionBlock;
@property(retain, nonatomic) NSMutableDictionary *shareIDErrors; // @synthesize shareIDErrors=_shareIDErrors;
@property(nonatomic) BOOL isFetchAllSharesOperation; // @synthesize isFetchAllSharesOperation=_isFetchAllSharesOperation;
@property(retain, nonatomic) NSMutableDictionary *sharesByShareID; // @synthesize sharesByShareID=_sharesByShareID;
- (id)initWithShareIDs:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;

@end

