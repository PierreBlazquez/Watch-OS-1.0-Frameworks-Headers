//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OSDDAFilterData.h"
#import "OSDDAScalarData.h"
#import "OSDDAVectorData.h"

@interface OSDAccelerometerData : NSObject <OSDDAFilterData, OSDDAScalarData, OSDDAVectorData>
{
    float x;
    float y;
    float z;
    double timestamp;
}

+ (id)dataWithVectorDictionary:(id)arg1;
- (id)scalarData;
- (id)filterData;
- (id)vectorData;
@property(nonatomic) float z; // @synthesize z;
@property(nonatomic) float y; // @synthesize y;
@property(nonatomic) float x; // @synthesize x;
@property(nonatomic) double timestamp; // @synthesize timestamp;
- (id)init;

@end

