//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOLocationShiftFunctionResponse : NSObject
{
    CDStruct_2c43369c _originalCoordinate;
    CDStruct_2c43369c _shiftedCoordinate;
    double _creationTime;
    double _params[9];
    double _radius;
    BOOL _isPolyLocationShift;
    BOOL _shouldUsePolyShiftFunction;
}

@property(nonatomic) CDStruct_c3b9c2ee originalCoordinate; // @synthesize originalCoordinate=_originalCoordinate;
- (id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(CDStruct_c3b9c2ee)arg2;
- (id)initWithLocationShiftResponse:(id)arg1 originalCoordinate:(CDStruct_c3b9c2ee)arg2;
- (CDStruct_c3b9c2ee)shiftedCoordinateForCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double *)arg2;
- (BOOL)wantsNewFunctionForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)needsNewFunctionForCoordinate:(CDStruct_c3b9c2ee)arg1;

@end
