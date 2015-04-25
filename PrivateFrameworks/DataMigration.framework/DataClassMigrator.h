//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface DataClassMigrator : NSObject
{
    NSDictionary *_context;
    BOOL _didUpgrade;
}

- (BOOL)performMigration;
- (id)dataClassName;
@property(nonatomic) BOOL didUpgrade; // @synthesize didUpgrade=_didUpgrade;
- (float)estimatedDuration;
@property(readonly, nonatomic) BOOL wasPasscodeSetInBackup;
@property(readonly, nonatomic) BOOL shouldPreserveSettingsAfterRestore;
@property(readonly, nonatomic) BOOL didRestoreFromCloudBackup;
@property(readonly, nonatomic) BOOL didMigrateBackupFromDifferentDevice;
@property(readonly, nonatomic) BOOL didRestoreFromBackup;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (float)migrationProgress;

@end

