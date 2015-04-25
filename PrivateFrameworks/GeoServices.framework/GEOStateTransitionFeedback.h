//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOStateTransitionFeedback : PBCodable <NSCopying>
{
    int _newValue;
    int _oldValue;
    int _stateType;
    struct {
        unsigned int newValue:1;
        unsigned int oldValue:1;
        unsigned int stateType:1;
    } _has;
}

@property(nonatomic) int newValue; // @synthesize newValue=_newValue;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) int stateType; // @synthesize stateType=_stateType;
@property(nonatomic) BOOL hasNewValue;
@property(nonatomic) BOOL hasOldValue;
@property(nonatomic) BOOL hasStateType;
@property(nonatomic) int oldValue; // @synthesize oldValue=_oldValue;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

