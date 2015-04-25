//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSString;

@interface BLTPBHandleDismissActionRequest : PBRequest <NSCopying>
{
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) BOOL hasRecordID;
@property(readonly, nonatomic) BOOL hasSectionID;
@property(readonly, nonatomic) BOOL hasPublisherBulletinID;
@property(retain, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;

@end

