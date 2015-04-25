//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NPKProtoHash, NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying>
{
    NPKProtoHash *_expectedHash;
    NSMutableArray *_manifestHashes;
    unsigned int _resyncID;
    NSMutableArray *_uniqueIDs;
    BOOL _fullResyncNeeded;
    struct {
        unsigned int resyncID:1;
        unsigned int fullResyncNeeded:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *uniqueIDs; // @synthesize uniqueIDs=_uniqueIDs;
@property(nonatomic) unsigned int resyncID; // @synthesize resyncID=_resyncID;
@property(nonatomic) BOOL fullResyncNeeded; // @synthesize fullResyncNeeded=_fullResyncNeeded;
@property(retain, nonatomic) NSMutableArray *manifestHashes; // @synthesize manifestHashes=_manifestHashes;
@property(retain, nonatomic) NPKProtoHash *expectedHash; // @synthesize expectedHash=_expectedHash;
@property(nonatomic) BOOL hasResyncID;
@property(nonatomic) BOOL hasFullResyncNeeded;
@property(readonly, nonatomic) BOOL hasExpectedHash;
- (id)manifestHashesAtIndex:(unsigned int)arg1;
- (void)clearManifestHashes;
- (unsigned int)manifestHashesCount;
- (id)uniqueIDsAtIndex:(unsigned int)arg1;
- (void)clearUniqueIDs;
- (unsigned int)uniqueIDsCount;
- (void)addManifestHashes:(id)arg1;
- (void)addUniqueIDs:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

