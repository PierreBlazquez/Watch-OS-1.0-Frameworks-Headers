//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKLabelMarkerFeatureHandle : NSObject
{
    int _featureType;
    int _featureIndex;
    int _tileX;
    int _tileY;
    int _tileZ;
}

- (id)initWithFeature:(CDStruct_fafc065c *)arg1 featureType:(int)arg2;
- (int)tileZ;
- (int)tileY;
- (int)tileX;
- (int)featureIndex;
- (int)featureType;

@end

