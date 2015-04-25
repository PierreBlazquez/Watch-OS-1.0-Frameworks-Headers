//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalPreferences, NSArray, NSDate, NSNumber, NSString;

@interface CalendarPreferences : NSObject
{
    CalPreferences *_preferences;
    BOOL _drawDebugViewColors;
}

+ (id)sharedPreferences;
@property(retain, nonatomic) NSString *searchString;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic) BOOL drawDebugViewColors; // @synthesize drawDebugViewColors=_drawDebugViewColors;
@property(nonatomic) BOOL swipeToDeleteEnabled;
@property(nonatomic) BOOL travelEngineEnabled;
@property(nonatomic) BOOL disableContinuity;
@property(retain, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property(nonatomic) BOOL showExperimentalUI;
@property(nonatomic) unsigned int promptForCommentWhenDeclining;
@property(retain, nonatomic) NSNumber *locationSearchResultLimit;
@property(nonatomic) BOOL showEventsInPhoneMonthView;
- (void)setDeselectedCalendarIDs:(id)arg1;
- (id)deselectedCalendarIDsFromCalendars:(id)arg1;
@property(retain, nonatomic) NSArray *calendarUUIDsExcludedFromNotifications;
@property(nonatomic) BOOL requestSyncOnApplicationLaunch;
@property(nonatomic) BOOL viewedTimeZoneAutomatic;
@property(nonatomic) BOOL immediateAlarmCreation;
@property(nonatomic) BOOL showDebugGridOverlay;
@property(nonatomic) BOOL showMonthDividedListView;
@property(nonatomic) BOOL showListView;
@property(nonatomic) BOOL showWeekNumbers;
@property(retain, nonatomic) NSString *overlayCalendarID;
@property(retain, nonatomic) NSNumber *weekViewHourScale;
@property(retain, nonatomic) NSNumber *lastSuspendTime;
@property(retain, nonatomic) NSNumber *lastViewedDate;
@property(retain, nonatomic) NSNumber *lastViewMode;
@property(retain, nonatomic) NSNumber *weekStart;
@property(retain, nonatomic) NSDate *simulatedCurrentDate;
@property(retain, nonatomic) NSNumber *dayViewHourScale;

@end

