//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOStructuredAddress, NSString;

@interface GEOWaypointID : PBCodable <NSCopying>
{
    unsigned long long _muid;
    unsigned long long _resultProviderId;
    GEOStructuredAddress *_addressHint;
    GEOLatLng *_locationHint;
    NSString *_placeNameHint;
    CDStruct_12a4a01e _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *placeNameHint; // @synthesize placeNameHint=_placeNameHint;
@property(retain, nonatomic) GEOStructuredAddress *addressHint; // @synthesize addressHint=_addressHint;
@property(retain, nonatomic) GEOLatLng *locationHint; // @synthesize locationHint=_locationHint;
@property(readonly, nonatomic) BOOL hasPlaceNameHint;
@property(readonly, nonatomic) BOOL hasAddressHint;
@property(readonly, nonatomic) BOOL hasLocationHint;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) unsigned long long resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property(nonatomic) BOOL hasResultProviderId;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

