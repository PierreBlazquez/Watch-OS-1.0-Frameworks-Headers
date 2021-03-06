//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogCore/PLTimeReference.h>

@class NSDate, NSMutableArray, NSMutableDictionary, PLNSTimerOperatorComposition;

@interface PLTimeReferenceDynamic : PLTimeReference
{
    NSMutableDictionary *_timeChangeBlocks;
    NSDate *_lastQueryTime;
    NSMutableArray *_offsetHistory;
    int _offsetHistoryHead;
    PLNSTimerOperatorComposition *_periodicCurrentTime;
    double _tooFarInFutureDistance;
    double _tooFarInPastDistance;
    double _accumulatedError;
}

+ (double)nearestDistanceFromDate:(id)arg1 toRegionWithStartDate:(id)arg2 andEndDate:(id)arg3;
@property(retain) PLNSTimerOperatorComposition *periodicCurrentTime; // @synthesize periodicCurrentTime=_periodicCurrentTime;
@property(retain) NSMutableArray *offsetHistory; // @synthesize offsetHistory=_offsetHistory;
@property double tooFarInPastDistance; // @synthesize tooFarInPastDistance=_tooFarInPastDistance;
@property double tooFarInFutureDistance; // @synthesize tooFarInFutureDistance=_tooFarInFutureDistance;
@property(retain) NSMutableDictionary *timeChangeBlocks; // @synthesize timeChangeBlocks=_timeChangeBlocks;
@property(retain) NSDate *lastQueryTime; // @synthesize lastQueryTime=_lastQueryTime;
- (BOOL)shouldQueryCurrentTime;
- (void)notifyTimeChange:(double)arg1;
- (id)newOffsetEntryWithCurrentTime;
@property int offsetHistoryHead; // @synthesize offsetHistoryHead=_offsetHistoryHead;
@property double accumulatedError; // @synthesize accumulatedError=_accumulatedError;
- (void)initializeOffsetHistoryWithEntries:(id)arg1;
- (void)checkForTimeChangeWithCurrentTime:(id)arg1;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1;
- (id)removeTimeOffsetFromReferenceTime:(id)arg1;
- (void)registerForTimeChangedNotification;
- (void)initializeOffsetWithEntries:(id)arg1;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(int)arg3;
- (void).cxx_destruct;
- (void)setOffset:(double)arg1;

@end

