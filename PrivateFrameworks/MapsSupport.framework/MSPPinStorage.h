//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MSPDroppedPin, NSString, PBUnknownFields;

@interface MSPPinStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDroppedPin *_droppedPin;
    NSString *_identifier;
    int _type;
    CDStruct_dd13975a _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasType;
@property(retain, nonatomic) MSPDroppedPin *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(readonly, nonatomic) BOOL hasDroppedPin;
@property(nonatomic) BOOL hasPosition;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
@property(nonatomic) BOOL hasTimestamp;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double position; // @synthesize position=_position;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

