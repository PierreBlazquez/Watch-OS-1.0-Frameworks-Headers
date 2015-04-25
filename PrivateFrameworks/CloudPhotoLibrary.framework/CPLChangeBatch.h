//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"
#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSFastEnumeration>
{
    NSMutableArray *_records;
    NSMutableDictionary *_localResources;
}

+ (BOOL)supportsSecureCoding;
- (id)_initWithRecords:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (id)summaryDescription;
- (void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)localResourceOfType:(unsigned int)arg1 forItemWithCloudIdentifier:(id)arg2;
- (void)extractInitialDownloadBatch:(id *)arg1 shouldConsiderRecordFilter:(CDUnknownBlockType)arg2;
- (void)sortBatch;
- (void)_setRecords:(id)arg1;
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4;
- (void)addRecordsFromBatch:(id)arg1;
- (id)cplFullDescription;
- (void).cxx_destruct;
- (void)addRecord:(id)arg1;
@property(readonly, nonatomic) NSArray *records;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)init;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;

@end

