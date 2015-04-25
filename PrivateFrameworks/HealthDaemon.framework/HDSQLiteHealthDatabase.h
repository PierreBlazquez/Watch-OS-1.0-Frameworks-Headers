//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSQLiteDatabase.h>

@class NSString;

@interface HDSQLiteHealthDatabase : HDSQLiteDatabase
{
    NSString *_homeDirectoryPath;
}

+ (void)removeProtectedDatabaseWithHomeDirectoryPath:(id)arg1;
+ (void)removeAllDatabasesWithHomeDirectoryPath:(id)arg1;
+ (void)_removeDatabases:(id)arg1 withHomeDirectoryPath:(id)arg2;
+ (id)virtualFilesystemModule;
- (id)initWithDatabaseURL:(id)arg1;
- (void)detachProtectedDatabase;
- (BOOL)isProtectedDatabaseAttached;
@property(copy, nonatomic) NSString *homeDirectoryPath; // @synthesize homeDirectoryPath=_homeDirectoryPath;
- (BOOL)attachProtectedDatabaseWithError:(id *)arg1;
- (id)initWithHomeDirectoryPath:(id)arg1;
- (void).cxx_destruct;

@end

