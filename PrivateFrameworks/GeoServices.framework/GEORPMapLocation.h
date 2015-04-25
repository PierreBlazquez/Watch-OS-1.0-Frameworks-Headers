//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOPDViewportInfo, NSData;

@interface GEORPMapLocation : PBCodable <NSCopying>
{
    GEOLatLng *_coordinate;
    NSData *_image;
    GEOPDViewportInfo *_viewportInfo;
    float _zoomLevel;
    struct {
        unsigned int zoomLevel:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(nonatomic) BOOL hasZoomLevel;
@property(readonly, nonatomic) BOOL hasCoordinate;
@property(readonly, nonatomic) BOOL hasViewportInfo;
@property(readonly, nonatomic) BOOL hasImage;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
