//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3Collection.h>

@interface ML3Genre : ML3Collection
{
}

+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)artworkCacheIDProperty;
+ (id)trackForeignPersistentID;
+ (id)propertiesForGroupingKey;
+ (id)subCollectionCountProperty;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)defaultOrderingTerms;
+ (id)predisambiguatedProperties;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (BOOL)propertyIsCountProperty:(id)arg1;
+ (id)allProperties;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)arg1;
+ (int)revisionTrackingCode;
+ (void)initialize;
- (id)protocolItem;
- (id)multiverseIdentifier;
- (void)updateTrackValues:(id)arg1;

@end

