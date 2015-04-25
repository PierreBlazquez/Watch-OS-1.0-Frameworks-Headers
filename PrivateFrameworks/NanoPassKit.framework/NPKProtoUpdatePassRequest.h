//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NPKProtoCatalog, NPKProtoHash, NPKProtoPass, NSData;

@interface NPKProtoUpdatePassRequest : PBRequest <NSCopying>
{
    NPKProtoCatalog *_catalog;
    unsigned int _lastKnownResyncID;
    NPKProtoHash *_libraryHash;
    NPKProtoPass *_pass;
    NSData *_previousManifestHash;
    unsigned int _resyncID;
    CDStruct_a41f3871 _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NPKProtoPass *pass; // @synthesize pass=_pass;
@property(nonatomic) unsigned int lastKnownResyncID; // @synthesize lastKnownResyncID=_lastKnownResyncID;
@property(retain, nonatomic) NSData *previousManifestHash; // @synthesize previousManifestHash=_previousManifestHash;
@property(retain, nonatomic) NPKProtoHash *libraryHash; // @synthesize libraryHash=_libraryHash;
@property(nonatomic) BOOL hasLastKnownResyncID;
@property(readonly, nonatomic) BOOL hasCatalog;
@property(readonly, nonatomic) BOOL hasPreviousManifestHash;
@property(readonly, nonatomic) BOOL hasLibraryHash;
@property(nonatomic) unsigned int resyncID; // @synthesize resyncID=_resyncID;
@property(nonatomic) BOOL hasResyncID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) NPKProtoCatalog *catalog; // @synthesize catalog=_catalog;

@end

