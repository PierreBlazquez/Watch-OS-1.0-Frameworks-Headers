//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface SLDatabase : NSObject
{
    NSString *_modelPath;
    NSString *_storePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
}

- (BOOL)save:(id *)arg1;
- (void).cxx_destruct;
- (id)newObjectForEntityNamed:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
- (void)_setUpManagedObjectContext;
- (id)initWithStoreName:(id)arg1 modelPath:(id)arg2;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;

@end

