//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface MIPSeries : PBCodable <NSCopying>
{
    long long _storeId;
    NSString *_name;
    NSString *_sortName;
    struct {
        unsigned int storeId:1;
    } _has;
}

@property(readonly, nonatomic) BOOL hasName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
@property(readonly, nonatomic) BOOL hasSortName;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(nonatomic) BOOL hasStoreId;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

