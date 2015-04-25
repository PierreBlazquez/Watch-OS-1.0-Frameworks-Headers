//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVContainer.h"

@class ICSDuration, NSSet, NSString, NSTimeZone, NSURL;

@interface CalDAVContainer : CoreDAVContainer
{
    NSString *_calendarDescription;
    NSString *_ctag;
    NSString *_calendarColor;
    NSString *_symbolicColorName;
    NSString *_calendarOrder;
    NSSet *_supportedCalendarComponentSet;
    BOOL _subscribedStripAlarms;
    BOOL _subscribedStripTodos;
    BOOL _subscribedStripAttachments;
    ICSDuration *_subscribedRefreshRate;
    NSURL *_publishURL;
    NSURL *_prePublishURL;
    BOOL _isScheduleTransparent;
    NSTimeZone *_timeZone;
    BOOL _canBePublished;
    BOOL _canBeShared;
    NSURL *_source;
    NSSet *_freeBusySet;
    NSURL *_scheduleDefaultCalendarURL;
    NSString *_defaultTimedAlarms;
    NSString *_defaultAllDayAlarms;
    NSSet *_sharees;
    NSString *_supportedCalendarComponentSets;
    NSString *_locationCode;
    NSString *_languageCode;
    BOOL _autoprovisioned;
    BOOL _isMarkedUndeletable;
    BOOL _isMarkedImmutableSharees;
}

+ (id)copyPropertyMappingsForParser;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSSet *supportedCalendarComponentSet; // @synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet;
@property(retain, nonatomic) NSString *locationCode; // @synthesize locationCode=_locationCode;
@property(nonatomic) BOOL autoprovisioned; // @synthesize autoprovisioned=_autoprovisioned;
@property(readonly, nonatomic) BOOL isNotification;
@property(readonly, nonatomic) BOOL isScheduleOutbox;
@property(readonly, nonatomic) BOOL isScheduleInbox;
@property(retain, nonatomic) NSURL *prePublishURL; // @synthesize prePublishURL=_prePublishURL;
@property(retain, nonatomic) NSURL *publishURL; // @synthesize publishURL=_publishURL;
@property(readonly, nonatomic) BOOL isTaskContainer;
@property(readonly, nonatomic) BOOL isEventContainer;
@property(retain, nonatomic) NSString *supportedCalendarComponentSets; // @synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets;
@property(readonly, nonatomic) BOOL supportsFreebusy;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *calendarDescription; // @synthesize calendarDescription=_calendarDescription;
- (void)applyParsedProperties:(id)arg1;
@property(readonly, nonatomic) BOOL isPollContainer;
@property(readonly, nonatomic) BOOL isJournalContainer;
- (BOOL)_isComponentSupportedForString:(id)arg1;
- (void)_setTimeZoneFromProperties:(id)arg1 onCalendar:(id)arg2;
@property(nonatomic) BOOL isScheduleTransparent; // @synthesize isScheduleTransparent=_isScheduleTransparent;
@property(nonatomic) BOOL subscribedStripTodos; // @synthesize subscribedStripTodos=_subscribedStripTodos;
@property(nonatomic) BOOL subscribedStripAttachments; // @synthesize subscribedStripAttachments=_subscribedStripAttachments;
@property(nonatomic) BOOL subscribedStripAlarms; // @synthesize subscribedStripAlarms=_subscribedStripAlarms;
@property(retain, nonatomic) NSString *defaultAllDayAlarms; // @synthesize defaultAllDayAlarms=_defaultAllDayAlarms;
@property(retain, nonatomic) NSString *defaultTimedAlarms; // @synthesize defaultTimedAlarms=_defaultTimedAlarms;
@property(retain, nonatomic) NSURL *scheduleDefaultCalendarURL; // @synthesize scheduleDefaultCalendarURL=_scheduleDefaultCalendarURL;
@property(retain, nonatomic) NSSet *freeBusySet; // @synthesize freeBusySet=_freeBusySet;
@property(retain, nonatomic) ICSDuration *subscribedRefreshRate; // @synthesize subscribedRefreshRate=_subscribedRefreshRate;
@property(retain, nonatomic) NSString *calendarOrder; // @synthesize calendarOrder=_calendarOrder;
@property(retain, nonatomic) NSString *calendarColor; // @synthesize calendarColor=_calendarColor;
@property(readonly, nonatomic) BOOL isSharedOwner;
@property(readonly, nonatomic) BOOL isCalendar;
@property(retain, nonatomic) NSURL *source; // @synthesize source=_source;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
- (id)description;
- (void)dealloc;
@property(readonly, nonatomic) BOOL isShared;
@property(nonatomic) BOOL isMarkedImmutableSharees; // @synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees;
@property(nonatomic) BOOL isMarkedUndeletable; // @synthesize isMarkedUndeletable=_isMarkedUndeletable;
@property(retain, nonatomic) NSSet *sharees; // @synthesize sharees=_sharees;
@property(readonly, nonatomic) BOOL isFamilyCalendar;
@property(nonatomic) BOOL canBeShared; // @synthesize canBeShared=_canBeShared;
@property(nonatomic) BOOL canBePublished; // @synthesize canBePublished=_canBePublished;
@property(retain, nonatomic) NSString *symbolicColorName; // @synthesize symbolicColorName=_symbolicColorName;
@property(readonly, nonatomic) BOOL isSubscribed;

@end

