//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, fetchDenyEntry, fetchFilterEntry;

@interface AppLaunchStatsAggD : NSObject
{
    _Bool buildLaunchStats;
    NSObject<OS_dispatch_queue> *aggDQueue;
    int hasStats;
    int fetchDeniedWithReasons[10];
    int fetchDenied;
    int fetchAttempt;
    int pushDenied;
    int pushAttempt;
    int pushDeniedReasons[11];
    long long fetchDataTotal;
    int fetchDataCount;
    int fetchPWTotal;
    int fetchGiven;
    int fetchFailedCount;
    int fetchAppFiltered[7];
    long long fetchUpdateTimeTotal;
    int fetchUpdateTimeCount;
    int forceRelease;
    int zoneCounts[9];
    int topNZoneCounts[9];
    NSDate *cycleStart;
    NSMutableArray *pastCycle;
    NSMutableDictionary *launchDict;
    int prewarmZoneCounts[9];
    int prewarmEligibleZone[9];
    NSMutableDictionary *prewarmDict;
    NSMutableDictionary *previousPrewarmDict;
    int prewarmHits;
    int prewarmMiss;
    long long avgDownloadsize;
    long long avgPWConsumed;
    int totalBGDownloads;
    long long totalNonDiscDownload;
    long long totalNonDiscEnergy;
    int BGReportToken;
    unsigned long blameReasons[29];
    fetchFilterEntry *mostRecentFilter;
    fetchDenyEntry *mostRecentDeny;
    CDUnknownBlockType appisFetchable;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *pastCycle; // @synthesize pastCycle;
- (_Bool)accountYesterday:(id)arg1 atzone:(int)arg2 launchVal:(int)arg3 result:(int *)arg4;
- (void)calculatePrewarmHitMiss:(id)arg1 launch:(id)arg2;
- (void)accountPredatePrewarm:(id)arg1 prevDay:(id)arg2 launch:(int)arg3 launchvalue:(int)arg4 prewarmvalue:(int)arg5 diff:(int)arg6 result:(int *)arg7;
- (int)distanceToLastPrewarm:(id)arg1 prevDay:(id)arg2 currentSlot:(int)arg3 currentoffset:(int)arg4;
- (void)nonDiscretionaryAdd:(unsigned long long)arg1 withPW:(unsigned long long)arg2;
- (void)backgroundSucceeds:(long long)arg1 withPW:(long long)arg2;
- (void)searchBlame:(id)arg1 inzone:(int)arg2 inminute:(int)arg3;
- (void)mostRecentDenyResult:(int)arg1;
- (void)appFGLaunch:(id)arg1;
- (void)setFetchCapableCheck:(CDUnknownBlockType)arg1;
- (void)setCollectLaunchStats;
- (void)fetchFailedUpdate;
- (void)appPrewarm:(id)arg1 type:(int)arg2;
- (void)fetchDataCount:(int)arg1;
- (void)pushDeniedBecause:(_Bool)arg1 withPWBudget:(_Bool)arg2 inwifi:(_Bool)arg3 incell:(_Bool)arg4 ignorePoorCell:(_Bool)arg5;
- (void)pushDenied:(int)arg1;
- (void)pushAttemptIncrement:(int)arg1;
- (void)newCycleWithApps:(id)arg1;
- (void)populatePrewarmZones:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)populatePredictZones:(int)arg1 filter:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fetchPWCount:(int)arg1;
- (void)mostRecentFilterResult:(id)arg1;
- (void)fetchCountUpdate:(int)arg1;
- (void)fetchFiltered:(int)arg1;
- (void)fetchDeniedBecause:(_Bool)arg1 withPWBudget:(_Bool)arg2 inwifi:(_Bool)arg3 incell:(_Bool)arg4 ignorePoorCell:(_Bool)arg5 incall:(_Bool)arg6 thermal:(_Bool)arg7 hascell:(_Bool)arg8 haswifi:(_Bool)arg9;
- (void)fetchDenied:(int)arg1;
- (void)fetchAttemptIncrement;
- (void)replacePredictionAtZone:(id)arg1 zoneid:(int)arg2;
@property(readonly, nonatomic) NSDate *cycleStart; // @synthesize cycleStart;
- (void)forceReleaseCount;
- (void)fetchTimeUpdate:(long long)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)uploadData;

@end
