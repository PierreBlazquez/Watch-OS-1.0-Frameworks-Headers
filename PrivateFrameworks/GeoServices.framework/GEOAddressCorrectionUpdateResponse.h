//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying>
{
    unsigned int _retryScheduleInDays;
    struct {
        unsigned int retryScheduleInDays:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) unsigned int retryScheduleInDays; // @synthesize retryScheduleInDays=_retryScheduleInDays;
@property(nonatomic) BOOL hasRetryScheduleInDays;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

