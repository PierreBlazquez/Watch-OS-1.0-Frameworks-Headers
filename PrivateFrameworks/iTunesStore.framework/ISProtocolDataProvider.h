//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISDataProvider.h>

#import "NSCopying.h"

@interface ISProtocolDataProvider : ISDataProvider <NSCopying>
{
    BOOL _shouldPostFooterSectionChanged;
    BOOL _shouldProcessAccount;
    BOOL _shouldProcessAuthenticationDialogs;
    BOOL _shouldProcessDialogs;
    BOOL _shouldProcessProtocol;
    BOOL _shouldTriggerDownloads;
}

@property BOOL shouldTriggerDownloads; // @synthesize shouldTriggerDownloads=_shouldTriggerDownloads;
@property BOOL shouldProcessAuthenticationDialogs; // @synthesize shouldProcessAuthenticationDialogs=_shouldProcessAuthenticationDialogs;
@property BOOL shouldPostFooterSectionChanged; // @synthesize shouldPostFooterSectionChanged=_shouldPostFooterSectionChanged;
- (void)_checkInAppPurchaseQueueForAction:(id)arg1;
@property BOOL shouldProcessAccount; // @synthesize shouldProcessAccount=_shouldProcessAccount;
- (void)_selectFooterSection:(id)arg1;
- (void)_checkDownloadQueues;
- (BOOL)_processFailureTypeFromDictionary:(id)arg1 error:(id *)arg2;
- (void)_performActionsForResponse:(id)arg1;
- (void)_presentDialog:(id)arg1;
- (BOOL)_shouldFailWithTokenErrorForDialog:(id)arg1 dictionary:(id)arg2 error:(id *)arg3;
@property BOOL shouldProcessDialogs; // @synthesize shouldProcessDialogs=_shouldProcessDialogs;
- (BOOL)processDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)processDialogFromDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
@property BOOL shouldProcessProtocol; // @synthesize shouldProcessProtocol=_shouldProcessProtocol;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
