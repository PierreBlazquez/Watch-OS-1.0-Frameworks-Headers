//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPersistentStore, NSSQLiteConnection, NSString, PFUbiquityLocation;

@interface PFUbiquityStoreMetadataMedic : NSObject
{
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSPersistentStore *_store;
    NSSQLiteConnection *_connection;
}

@property(readonly, nonatomic) NSSQLiteConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (BOOL)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id *)arg3;
- (BOOL)addTransactionHistoryEntriesForObjectIDs:(id)arg1 withImportContext:(id)arg2 error:(id *)arg3;
- (BOOL)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id *)arg2;
- (BOOL)recoverBaselineMetadataWithImportContext:(id)arg1 error:(id *)arg2;
- (BOOL)recoverMetadataWithError:(id *)arg1;
- (id)initWithStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) NSPersistentStore *store; // @synthesize store=_store;

@end

