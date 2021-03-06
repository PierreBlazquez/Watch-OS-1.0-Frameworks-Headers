//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WebStorageManager : NSObject
{
}

+ (void)closeIdleLocalStorageDatabases;
+ (void)setStorageDatabaseIdleInterval:(double)arg1;
+ (id)sharedWebStorageManager;
+ (id)_storageDirectoryPath;
- (void)syncFileSystemAndTrackerDatabase;
- (void)syncLocalStorage;
- (void)deleteAllOrigins;
- (void)deleteOrigin:(id)arg1;
- (id)origins;
- (unsigned long long)diskUsageForOrigin:(id)arg1;
- (id)init;

@end

