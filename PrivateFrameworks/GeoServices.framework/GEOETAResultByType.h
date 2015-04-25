//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOETAResultByType : PBCodable <NSCopying>
{
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    struct {
        unsigned int distance:1;
        unsigned int historicTravelTime:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int travelTimeBestEstimate:1;
    } _has;
}

@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int travelTimeBestEstimate; // @synthesize travelTimeBestEstimate=_travelTimeBestEstimate;
@property(nonatomic) BOOL hasTravelTimeBestEstimate;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(nonatomic) BOOL hasHistoricTravelTime;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

