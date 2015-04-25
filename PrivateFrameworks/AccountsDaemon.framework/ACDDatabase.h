//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStore, NSString;

@interface ACDDatabase : NSObject
{
    NSString *_path;
    NSManagedObjectContext *_context;
    NSManagedObjectModel *_model;
    NSPersistentStore *_store;
    id _contextDidSaveNotificationObserver;
}

+ (id)defaultPath;
+ (void)_resetPeristentStoreCoordinator;
+ (void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
+ (void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2;
+ (BOOL)_isUnrecoverableDatabaseError:(id)arg1;
+ (BOOL)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
+ (id)_optionsForOpeningPersistentStore;
+ (id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1;
+ (struct __CFString *)_copyRootPath;
+ (id)_managedObjectModel;
- (BOOL)_databaseFileExists;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)_store;
- (void)_handleManagedObjectContextDidSaveNotification:(id)arg1;
- (void)_setupManagedObjectContext;
- (BOOL)saveWithError:(id *)arg1 rollbackOnFailure:(BOOL)arg2;
- (id)initWithDefaultPath;
- (id)objectForObjectURI:(id)arg1;
- (id)managedObjectIDForURI:(id)arg1;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)existingObjectWithURI:(id)arg1;
- (unsigned int)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (BOOL)saveWithError:(id *)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @dynamic managedObjectContext;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
@property(nonatomic) int version; // @dynamic version;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;

@end
