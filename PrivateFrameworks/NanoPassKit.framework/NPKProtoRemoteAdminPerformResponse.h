//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying>
{
    NSData *_responseDictionary;
    unsigned int _resultCode;
}

@property(nonatomic) unsigned int resultCode; // @synthesize resultCode=_resultCode;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSData *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(readonly, nonatomic) BOOL hasResponseDictionary;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

