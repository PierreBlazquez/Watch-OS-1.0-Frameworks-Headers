//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOMapItemAddressBookAttributes, GEOMapItemRoutineAttributes;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying>
{
    GEOMapItemAddressBookAttributes *_addressBookAttributes;
    GEOMapItemRoutineAttributes *_routineAttributes;
}

+ (id)clientAttributesCopyForSharing:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) GEOMapItemAddressBookAttributes *addressBookAttributes; // @synthesize addressBookAttributes=_addressBookAttributes;
@property(retain, nonatomic) GEOMapItemRoutineAttributes *routineAttributes; // @synthesize routineAttributes=_routineAttributes;
@property(readonly, nonatomic) BOOL hasRoutineAttributes;
@property(readonly, nonatomic) BOOL hasAddressBookAttributes;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

