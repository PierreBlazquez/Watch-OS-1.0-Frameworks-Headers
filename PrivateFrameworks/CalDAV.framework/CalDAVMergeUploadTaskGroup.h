//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

@class CalDAVBulkUploadTaskGroup;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup
{
    id <CalDAVCalendar> _calendar;
    id <CalDAVPrincipal> _principal;
    CalDAVBulkUploadTaskGroup *_uploadTaskGroup;
    BOOL _shouldTrySyncTokenForBulkUpload;
}

- (id)dataContentType;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)_performRegularUpload;
- (void)_performBulkUpload;
- (id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (void)dealloc;

@end

