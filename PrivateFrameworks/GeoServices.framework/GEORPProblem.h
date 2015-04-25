//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORPProblemContext, GEORPProblemCorrections;

@interface GEORPProblem : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _userPaths;
    GEORPProblemContext *_problemContext;
    GEORPProblemCorrections *_problemCorrections;
    int _problemType;
    unsigned int _protocolVersion;
    struct {
        unsigned int problemType:1;
        unsigned int protocolVersion:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) GEORPProblemContext *problemContext; // @synthesize problemContext=_problemContext;
@property(retain, nonatomic) GEORPProblemCorrections *problemCorrections; // @synthesize problemCorrections=_problemCorrections;
@property(nonatomic) int problemType; // @synthesize problemType=_problemType;
@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, nonatomic) BOOL hasProblemContext;
@property(readonly, nonatomic) BOOL hasProblemCorrections;
@property(nonatomic) BOOL hasProblemType;
- (void)setUserPaths:(int *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) int *userPaths;
@property(nonatomic) BOOL hasProtocolVersion;
- (void)addUserPath:(int)arg1;
- (int)userPathAtIndex:(unsigned int)arg1;
- (void)clearUserPaths;
@property(readonly, nonatomic) unsigned int userPathsCount;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
