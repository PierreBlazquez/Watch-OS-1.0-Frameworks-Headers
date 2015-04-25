//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment;

@interface SKPaymentTransaction : NSObject
{
    id _internal;
}

@property(readonly, nonatomic) NSString *transactionIdentifier;
@property(readonly, nonatomic) NSError *error;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_setTransactionState:(int)arg1;
- (void)_setTransactionReceipt:(id)arg1;
- (void)_setTransactionIdentifier:(id)arg1;
- (void)_setTransactionDate:(id)arg1;
- (void)_setTemporaryIdentifier:(id)arg1;
- (void)_setOriginalTransaction:(id)arg1;
@property(readonly, nonatomic) NSData *transactionReceipt;
@property(readonly, nonatomic) SKPaymentTransaction *originalTransaction;
- (void)_setDownloads:(id)arg1;
- (BOOL)mergeWithTransaction:(id)arg1;
- (BOOL)canMergeWithTransaction:(id)arg1;
@property(readonly, nonatomic) NSString *_transactionIdentifier;
@property(readonly, nonatomic) NSString *matchingIdentifier;
@property(readonly, nonatomic) int transactionState;
- (id)initWithPayment:(id)arg1;
@property(readonly, nonatomic) SKPayment *payment;
@property(readonly, nonatomic) NSArray *downloads;
- (void)_setError:(id)arg1;
@property(readonly, nonatomic) NSDate *transactionDate;

@end

