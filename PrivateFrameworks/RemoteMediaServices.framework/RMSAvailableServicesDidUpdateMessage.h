//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface RMSAvailableServicesDidUpdateMessage : PBCodable <NSCopying>
{
    NSMutableArray *_services;
    int _sessionIdentifier;
    CDStruct_07a29e00 _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)servicesAtIndex:(unsigned int)arg1;
- (void)clearServices;
- (unsigned int)servicesCount;
- (void)addServices:(id)arg1;
@property(nonatomic) BOOL hasSessionIdentifier;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

