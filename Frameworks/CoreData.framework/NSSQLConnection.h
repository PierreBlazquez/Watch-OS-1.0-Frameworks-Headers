//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSQLAdapter, NSSQLStatement;

@interface NSSQLConnection : NSObject
{
    NSSQLAdapter *_adapter;
    BOOL _transactionIsOpen;
    BOOL _useSyntaxColoredLogging;
    NSSQLStatement *_sqlStatement;
    NSArray *_columnsToFetch;
    NSArray *_metadataColumns;
}

+ (void)initialize;
- (void)deleteRow:(id)arg1;
- (void)insertRow:(id)arg1;
- (void)finalize;
- (BOOL)isOpen;
- (void)execute;
- (void)disconnect;
- (void)connect;
- (void)commitTransaction;
- (void)dealloc;
- (void)dropUbiquityTables;
- (id)ubiquityTableValueForKey:(id)arg1;
- (id)ubiquityTableKeysAndValues;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (id)allPeerRanges;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (void)addPeerRange:(id)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (id)fetchUbiquityKnowledgeVector;
- (void)_performPostSaveTasks;
- (BOOL)hasPrimaryKeyTable;
- (void)endPrimaryKeyGeneration;
- (void)prepareForPrimaryKeyGeneration;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (id)fetchMetadata;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (id)fetchTableCreationSQL;
- (id)fetchTableNames;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (struct __CFArray *)rawIntegerRowsForSQL:(id)arg1;
- (void)createSchema;
- (int)fetchResultSet:(void *)arg1 usingFetchPlan:(id)arg2;
- (id)describeResults;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (id)sqlStatement;
- (void)selectAttributes:(id)arg1 fetchRequest:(id)arg2 lock:(BOOL)arg3 entity:(id)arg4;
- (void)updateRow:(id)arg1;
- (void)writeCorrelationChangesFromTracker:(id)arg1;
- (BOOL)databaseIsEmpty;
- (BOOL)canConnect;
- (void)transactionDidRollback;
- (void)transactionDidCommit;
- (void)transactionDidBegin;
- (void)_forceDisconnectOnError;
- (void)forceTransactionClosed;
- (BOOL)hasOpenTransaction;
- (void)sleep;
- (void)awake;
- (id)initWithAdapter:(id)arg1;
- (void)_raiseOptimisticLockingExceptionWithReason:(id)arg1;
- (id)newFetchedArray;
- (void)setColumnsToFetch:(id)arg1;
- (id)metadataColumns;
- (void)rollbackTransaction;
- (void)saveMetadata:(id)arg1;
- (void)createMetadata;
- (void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(BOOL)arg2;
- (void)createTablesForEntities:(id)arg1;
- (void)didCreateSchema;
- (BOOL)hasMetadataTable;
- (void)beginTransaction;
- (void)willCreateSchema;
- (void)createManyToManyTablesForEntity:(id)arg1;
- (void)createIndexesForEntity:(id)arg1;
- (void)createTableForEntity:(id)arg1;
- (void)prepareAndExecuteSQLStatement:(id)arg1;
- (void)releaseSQLStatement;
- (void)resetSQLStatement;
- (void)prepareSQLStatement:(id)arg1;
- (id)adapter;
- (void)bindTempTableForBindIntarray:(id)arg1;
- (BOOL)isFetchInProgress;
- (void)endFetch;
- (id)columnsToFetch;

@end

