//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol SyncProtocol <NSObject>
- (void)hello:(NSString *)arg1;
- (void)bootUp:(void (^)(BOOL))arg1;
- (void)migrateCallDB:(NSArray *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)clearSyncToken:(void (^)(NSString *))arg1;
- (void)sync:(void (^)(NSString *))arg1;
- (void)appendTransactions:(NSArray *)arg1;
@end

