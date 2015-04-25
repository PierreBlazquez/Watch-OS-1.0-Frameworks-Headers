//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPropPatchTaskDelegate.h"

@class NSString, NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>
{
    int _action;
    NSURL *_url;
    int _state;
    NSURL *_publishedURL;
}

- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(retain, nonatomic) NSURL *publishedURL; // @synthesize publishedURL=_publishedURL;
- (void)finishWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

