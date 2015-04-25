//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying>
{
    NSMutableArray *_routes;
    int _status;
    CDStruct_47fe53f2 _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasStatus;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
- (id)routeAtIndex:(unsigned int)arg1;
- (void)clearRoutes;
- (unsigned int)routesCount;
- (void)addRoute:(id)arg1;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

