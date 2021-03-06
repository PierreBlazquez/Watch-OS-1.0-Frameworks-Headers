//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OSDDAFilterData.h"
#import "OSDDAVectorData.h"

@interface OSDAmbientLightData : NSObject <OSDDAFilterData, OSDDAVectorData>
{
    float lux;
    float ch0;
    float ch1;
    float ch2;
    float ch3;
    double timestamp;
}

+ (id)dataWithVectorDictionary:(id)arg1;
@property(nonatomic) float ch3; // @synthesize ch3;
@property(nonatomic) float ch2; // @synthesize ch2;
@property(nonatomic) float ch1; // @synthesize ch1;
@property(nonatomic) float ch0; // @synthesize ch0;
@property(nonatomic) float lux; // @synthesize lux;
- (id)filterData;
- (id)vectorData;
@property(nonatomic) double timestamp; // @synthesize timestamp;
- (id)init;

@end

