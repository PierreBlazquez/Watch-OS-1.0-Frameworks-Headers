//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CLLocationMatchInfoInternal : NSObject <NSCopying>
{
    int fMatchQuality;
    CDStruct_2c43369c fMatchCoordinate;
    double fMatchCourse;
    int fMatchFormOfWay;
    int fMatchRoadClass;
    BOOL fMatchShifted;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMatchQuality:(int)arg1 matchCoordinate:(CDStruct_c3b9c2ee)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6;

@end

