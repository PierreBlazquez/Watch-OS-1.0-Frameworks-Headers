//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger
{
    NSPersistentStoreCoordinator *fPersistentStoreCoordinator;
}

+ (BOOL)replacePersistentStore:(id)arg1 withURL:(id)arg2;
+ (id)mangedObjectWithURI:(id)arg1 inContext:(id)arg2;
+ (id)getStoreURLforContext:(id)arg1;
+ (BOOL)destroyDBAtLocation:(id)arg1;
+ (id)migrationOptions;
+ (id)getPersistenCoordinator:(id)arg1;
+ (void)setPropertyValue:(id)arg1 forKey:(id)arg2 forContext:(id)arg3;
+ (id)getPropertyValueForKey:(id)arg1 forContext:(id)arg2;
+ (id)entityDescriptionHavingName:(id)arg1 forContext:(id)arg2;
+ (BOOL)migrateDataStoreAtLocation:(id)arg1 withDstModelAtLocation:(id)arg2;
+ (id)instanceWithUsingDBAtURL:(id)arg1 modelURL:(id)arg2;
+ (id)instanceWithInitDBAtURL:(id)arg1 modelURL:(id)arg2;
+ (int)isDataStoreAtURLInitialized:(id)arg1 withModelAtURL:(id)arg2;
@property(retain, nonatomic) NSPersistentStoreCoordinator *fPersistentStoreCoordinator; // @synthesize fPersistentStoreCoordinator;
- (id)createManagedObjectContext;
- (void).cxx_destruct;
- (id)init;

@end

