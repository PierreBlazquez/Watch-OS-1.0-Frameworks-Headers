//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKCancellableRemoteOperation.h"

@class EKEventStore, NSPredicate, NSString;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation>
{
    CDUnknownBlockType _callback;
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    id _cancellationToken;
    BOOL _finished;
    BOOL _isCancelled;
}

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (void)dealloc;
- (void)cancel;
- (void)terminate;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (id)startWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

