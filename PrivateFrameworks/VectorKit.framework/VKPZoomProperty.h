//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class VKPStyleProperties;

@interface VKPZoomProperty : PBCodable <NSCopying>
{
    float _maxZ;
    float _minZ;
    VKPStyleProperties *_properties;
}

- (void)applyTo:(id)arg1 zoom:(float)arg2;
@property(nonatomic) float maxZ; // @synthesize maxZ=_maxZ;
@property(nonatomic) float minZ; // @synthesize minZ=_minZ;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) VKPStyleProperties *properties; // @synthesize properties=_properties;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

