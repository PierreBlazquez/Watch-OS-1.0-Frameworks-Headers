//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface _CDDailyProgressForecast : NSObject
{
    NSArray *_mean;
    NSArray *_var;
    double _temporalResolution;
    double _averageVar;
}

@property double averageVar; // @synthesize averageVar=_averageVar;
@property(retain) NSArray *var; // @synthesize var=_var;
@property(retain) NSArray *mean; // @synthesize mean=_mean;
@property double temporalResolution; // @synthesize temporalResolution=_temporalResolution;
- (double)averageProgressVariance;
- (double)predictedProgressVarianceForTimeOfDay:(id)arg1;
- (double)predictedProgressForTimeOfDay:(id)arg1;
- (id)initWithMean:(id)arg1 andVariance:(id)arg2;
- (void).cxx_destruct;
- (id)description;

@end

