//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface NPKProtoSecureElementRemoveCardsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_cardAIDs;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *cardAIDs; // @synthesize cardAIDs=_cardAIDs;
- (id)cardAIDsAtIndex:(unsigned int)arg1;
- (void)clearCardAIDs;
- (unsigned int)cardAIDsCount;
- (void)addCardAIDs:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

