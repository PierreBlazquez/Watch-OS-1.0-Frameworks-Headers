//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString;

@interface AppLaunchStatsLogFormater : NSObject
{
    NSMutableString *fetchCandidatesStr;
    NSMutableString *fetchForeground;
    NSMutableString *fetchBlackList;
    NSMutableString *fetchRecentLaunch;
    NSMutableString *filteredCandidates;
    NSMutableString *trendingCandidates;
    NSMutableString *prewarmCandidate;
    NSMutableString *foregroundCandidate;
    NSMutableString *blacklistCandidate;
    NSMutableString *resourceRestrictCandidates;
    NSMutableString *filteredCandidatesTrend;
}

- (void)dumpWhatToLaunch;
- (void)dumpTrending;
- (void)concat:(id)arg1 withSlot:(int)arg2;
- (void)resetStringIdentifierTrending;
- (void)resetStringIdentifierWhatToLaunch;
- (void).cxx_destruct;
- (id)init;

@end
