//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, PFUbiquityLocation;

@interface PFUbiquityMigrationAssistant : NSObject
{
    NSString *_ubiquityName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSMutableDictionary *_baselineLocationsByVersionHash;
    NSMutableDictionary *_logLocationsByVersionHash;
    NSMutableArray *_receiptLocations;
    NSMutableArray *_orderedReceipts;
    NSString *_previousModelVersionHash;
    NSString *_currentModelVersionHash;
}

- (void)dealloc;
@property(readonly, nonatomic) NSString *currentModelVersionHash; // @synthesize currentModelVersionHash=_currentModelVersionHash;
@property(readonly, nonatomic) NSString *previousModelVersionHash; // @synthesize previousModelVersionHash=_previousModelVersionHash;
- (BOOL)electPreviousModelVersionHashFromTransactionLogsError:(id *)arg1;
- (id)latestTransactionLogForModelVersionHash:(id)arg1;
- (id)orderedReceipts;
- (BOOL)canUseReceipts;
- (id)receiptLocations;
- (void)_populateBaselineAndTransactionLogLocations;
- (id)latestBaselineLocationSkipModelVersionHash:(id)arg1;
- (id)baselineLocationsByModelVersionHash;
- (id)transactionLogLocationsByModelVersionHash;
- (id)transactionLogLocationsForModelVersionHash:(id)arg1;
- (id)initWithUbiquityRootLocation:(id)arg1 peerID:(id)arg2 ubiquityName:(id)arg3 modelVersionHash:(id)arg4;

@end

