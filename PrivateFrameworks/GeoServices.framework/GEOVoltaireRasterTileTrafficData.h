//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject
{
    CDStruct_1ef3fb1f *_vertices;
    NSMutableArray *_trafficSegments;
    NSArray *_trafficIncidents;
    double _expirationTime;
}

+ (id)createWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;
+ (double)expirationTimeInterval;
@property(readonly, nonatomic) NSArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property(nonatomic) CDStruct_1ef3fb1f *vertices; // @synthesize vertices=_vertices;
@property(retain, nonatomic) NSMutableArray *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
- (id)initWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;
- (void)dealloc;

@end

