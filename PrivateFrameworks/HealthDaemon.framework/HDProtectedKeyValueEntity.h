//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDProtectedKeyValueEntity : HDKeyValueEntity
{
}

+ (id)databaseTable;
+ (BOOL)removeUserDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (BOOL)setUserDefaultValue:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (id)userDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)keyForUserCharacteristicType:(id)arg1;
+ (BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)modificationDateForCharacteristicWithType:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (id)userCharacteristicForType:(id)arg1 healthDaemon:(id)arg2 entity:(id *)arg3 error:(id *)arg4;
+ (id)_keyForDataType:(id)arg1 error:(id *)arg2;
+ (int)_deviceLocalCategory;
+ (id)achievementValueForKey:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (BOOL)setAchievementValuesWithDictionary:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (int)protectionClass;

@end

