//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDActivityCacheEntity : HDSampleEntity
{
}

+ (id)entitiesToDeleteBeforeInsertingObject:(id)arg1 sourceEntity:(id)arg2 database:(id)arg3;
+ (id)activityCachesInRangeStart:(id)arg1 end:(id)arg2 inHealthDaemon:(id)arg3 error:(id *)arg4;
+ (id)activityCacheForIndex:(long long)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (id)_tableValuesFromDataObject:(id)arg1;
+ (id)_propertySettersForDataObject;
+ (Class)_associatedDataObjectClass;
+ (id)_columnsSQL;
+ (id)_databaseTable;
+ (id)codableObjectsFromObjectCollection:(id)arg1;

@end
