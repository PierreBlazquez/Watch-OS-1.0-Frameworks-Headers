//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface PFUbiquityLocation : NSObject <NSCopying>
{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootLocationPath;
    int _ubiquityLocationType;
    NSString *_exportingPeerID;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSString *_filename;
    NSArray *_otherPathComponents;
    BOOL _isDirectory;
    unsigned int _hash;
    BOOL _isRootUbiquitous;
}

+ (void)initialize;
+ (id)createLocalContainerRootLocationWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createLocalStoresPathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)arg1 andNewManagedObjectModel:(id)arg2 inUbiquityPeerStoreLocation:(id)arg3;
+ (id)createUbiquityPeerReceiptSafeSaveLocationFromReceiptFileLocation:(id)arg1;
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createPeerBaselineFileLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 UUID:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataPeerLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
+ (id)createMetadataStoreFileLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)arg1;
+ (id)createUbiquityLocationForSubpath:(id)arg1 ofUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootURL:(id)arg2;
+ (id)createLocalBasePathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)localLocationSentinel;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (BOOL)isUbiquityLocationPath:(id)arg1 equalToPath:(id)arg2;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForRootPath:(id)arg1 checkIsUbiquitous:(BOOL)arg2;
+ (id)createStringByAppendingSubpath:(id)arg1 toPath:(id)arg2;
+ (id)createPeerStoreLocationForPeerID:(id)arg1 andStoreName:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andLog:(id)arg2;
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)arg1;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForRootPath:(id)arg1;
+ (void)setLocationSentinel:(id)arg1;
+ (id)locationSentinel;
+ (id)createUbiquityExternalDataReferenceStoreLocationForStoreName:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createCurrentBaselineLocation:(int)arg1 forStoreName:(id)arg2 peerID:(id)arg3 andModelVersionHash:(id)arg4 forFileNamed:(id)arg5 withUbiquityRootLocation:(id)arg6;
+ (id)createPeerStoreVersionLocationForPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createBaselineStagingLocation:(int)arg1 forStoreName:(id)arg2 modelVersionHash:(id)arg3 andFilename:(id)arg4 withUbiquityRootLocation:(id)arg5;
+ (id)createPeerBaselineFileSafeSaveLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andStore:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createTransactionLogLocationForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 logFilename:(id)arg4 andUbiquityRootLocation:(id)arg5;
+ (id)createUbiquityLocationForRootURL:(id)arg1;
+ (id)createArrayOfSubLocationsAtLocation:(id)arg1 error:(id *)arg2;
+ (id)createVersionHashStringForModel:(id)arg1;
+ (id)createPeerRootLocationForPeerID:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)arg1;
- (void)setFilename:(id)arg1;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned int hash; // @synthesize hash=_hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isEqualToURL:(id)arg1;
- (BOOL)fileAtLocationIsDownloaded:(id *)arg1;
- (BOOL)fileAtLocationIsUploaded:(id *)arg1;
@property(readonly, nonatomic, getter=isTransactionLogLocation) BOOL isTransactionLogLocation;
@property(readonly, nonatomic) BOOL usesBaselineDirectory;
@property(readonly, nonatomic) BOOL usesTemporaryLogDirectory;
@property(readonly, nonatomic) BOOL usesStagingLogDirectory;
- (id)initWithUbiquityRootURL:(id)arg1;
- (BOOL)__isDirectory;
@property(readonly, nonatomic) BOOL isDirectory; // @synthesize isDirectory=_isDirectory;
- (BOOL)fileExistsAtLocationWithLocalPeerID:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL usesBaselineStagingDirectory;
- (void)setIsRootUbiquitous:(BOOL)arg1;
- (void)setHash:(unsigned int)arg1;
- (void)setUbiquityLocationType:(int)arg1;
- (void)setOtherPathComponents:(id)arg1;
@property(readonly, nonatomic) NSArray *otherPathComponents; // @synthesize otherPathComponents=_otherPathComponents;
- (void)setModelVersionHash:(id)arg1;
- (void)setUbiquityRootLocationPath:(id)arg1;
- (id)initWithUbiquityRootPath:(id)arg1;
- (void)updateHash;
@property(readonly, nonatomic) BOOL usesCurrentBaselineDirectory;
- (BOOL)removeFileAtLocation:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL usesNosyncDirectory;
- (id)createFullPath;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setExportingPeerID:(id)arg1;
@property(readonly, nonatomic) NSString *exportingPeerID; // @synthesize exportingPeerID=_exportingPeerID;
- (id)createFullURL;
@property(readonly, nonatomic) BOOL isRootUbiquitous; // @synthesize isRootUbiquitous=_isRootUbiquitous;
- (id)createRelativePath;
@property(readonly, nonatomic) NSString *ubiquityRootLocationPath; // @synthesize ubiquityRootLocationPath=_ubiquityRootLocationPath;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
- (BOOL)fileExistsAtLocation;
@property(readonly, nonatomic) NSString *modelVersionHash; // @synthesize modelVersionHash=_modelVersionHash;
@property(readonly, nonatomic) int ubiquityLocationType; // @synthesize ubiquityLocationType=_ubiquityLocationType;

@end

