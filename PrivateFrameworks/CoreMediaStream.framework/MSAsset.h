//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMCSAsset.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying>
{
    BOOL _assetDataAvailableOnServer;
    NSData *_masterAssetHash;
    NSDictionary *_metadata;
    NSString *_path;
    NSURL *_MMCSURL;
    NSData *_fileData;
    NSError *_error;
    NSString *_type;
    NSData *_fileHash;
    NSString *_MMCSAccessHeader;
    NSDate *_MMCSAccessHeaderTimeStamp;
    NSString *_MMCSReceipt;
    NSString *_GUID;
    NSString *_assetCollectionGUID;
    NSDate *_batchCreationDate;
    NSDate *_photoCreationDate;
    id <NSCoding> _userInfo;
    unsigned int _mediaAssetType;
    unsigned long long _protocolFileSize;
}

+ (id)MSASPAssetFromProtocolDictionary:(id)arg1;
+ (id)assetWithAsset:(id)arg1;
+ (id)asset;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *assetCollectionGUID; // @synthesize assetCollectionGUID=_assetCollectionGUID;
@property(retain, nonatomic) NSData *masterAssetHash; // @synthesize masterAssetHash=_masterAssetHash;
@property(retain, nonatomic) NSData *fileHash;
@property(nonatomic) unsigned int mediaAssetType; // @synthesize mediaAssetType=_mediaAssetType;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (BOOL)isPhoto;
- (id)metadataValueForKey:(id)arg1;
- (id)MSASPProtocolDictionary;
@property(nonatomic) unsigned long long protocolFileSize;
@property(nonatomic) unsigned long MMCSItemFlags;
@property(retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp; // @synthesize MMCSAccessHeaderTimeStamp=_MMCSAccessHeaderTimeStamp;
@property(retain, nonatomic) NSError *MMCSError;
@property(nonatomic) unsigned long long MMCSItemID;
- (id)MMCSItemType;
- (int)MMCSOpenNewFileDescriptor;
@property(nonatomic) BOOL assetDataAvailableOnServer; // @synthesize assetDataAvailableOnServer=_assetDataAvailableOnServer;
@property(retain, nonatomic) NSDate *photoCreationDate; // @synthesize photoCreationDate=_photoCreationDate;
@property(retain, nonatomic) NSDate *batchCreationDate; // @synthesize batchCreationDate=_batchCreationDate;
@property(retain, nonatomic) NSString *MMCSReceipt; // @synthesize MMCSReceipt=_MMCSReceipt;
- (void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSURL *MMCSURL; // @synthesize MMCSURL=_MMCSURL;
- (id)initWithGUID:(id)arg1;
@property(nonatomic) unsigned long long MMCSItemSize; // @synthesize MMCSItemSize=_protocolFileSize;
@property(retain, nonatomic) NSString *MMCSUTI; // @synthesize MMCSUTI=_type;
@property(retain, nonatomic) NSData *MMCSHash; // @synthesize MMCSHash=_fileHash;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSString *MMCSAccessHeader; // @synthesize MMCSAccessHeader=_MMCSAccessHeader;
- (unsigned long long)_fileSizeOnDisk;
- (BOOL)isVideo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) id <NSCoding> userInfo; // @synthesize userInfo=_userInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *type;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_fileSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

