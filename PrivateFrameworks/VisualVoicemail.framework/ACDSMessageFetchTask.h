//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ACDS/ACDSTask.h>

@class MFProgressiveMimeParser, NSError, NSMutableDictionary, VVService;

@interface ACDSMessageFetchTask : ACDSTask
{
    int _recordIdentifier;
    MFProgressiveMimeParser *_progressiveParser;
    int _fd;
    NSError *_parseError;
    NSMutableDictionary *_noteUserInfo;
    unsigned int _lastWrittenOffset;
    VVService *_service;
}

- (void)_postProgressiveDataNotification:(id)arg1;
- (void)_writeUpdatedDataFromParser;
- (id)_headersToPreserve;
- (void)_clearPartialDataFile;
- (int)recordIdentifier;
- (id)taskByCoalescingWithTask:(id)arg1;
- (void)attemptCompletedWithError:(id)arg1;
- (void)handleProgressiveBodyLoad:(struct __CFData *)arg1 finished:(BOOL)arg2 service:(id)arg3 error:(id *)arg4;
- (void)handleInitialResponse:(struct __CFHTTPMessage *)arg1 body:(struct __CFData *)arg2 status:(int)arg3 service:(id)arg4 error:(id *)arg5;
- (void)handleResponse:(struct __CFHTTPMessage *)arg1 body:(struct __CFData *)arg2 status:(int)arg3 service:(id)arg4 error:(id *)arg5;
- (BOOL)isProgressive;
- (BOOL)shouldCancelForTask:(id)arg1;
- (id)initForRecord:(void *)arg1;
- (int)serviceTaskType;
- (unsigned int)currentProgressiveDataLength;
- (unsigned int)expectedProgressiveDataLength;
- (BOOL)hasBegunProgressiveLoad;
- (void)progressiveMimeParser:(id)arg1 failedWithError:(id)arg2;
- (void)progressiveMimeParser:(id)arg1 beganDataForMimePart:(id)arg2;
- (void)progressiveMimeParser:(id)arg1 finishedMimePart:(id)arg2;
- (void *)record;
- (int)priority;
- (void)perform:(CDStruct_618647e5 *)arg1;
- (id)name;
- (int)type;
- (id)description;
- (void)dealloc;

@end

