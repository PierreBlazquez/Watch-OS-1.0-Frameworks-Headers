//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCSUpcomingEventsListener.h"

@interface NTKUpcomingEventsListener : NCSUpcomingEventsListener
{
}

+ (id)_refineEvents:(id)arg1;
- (id)_upcomingEventsMetadataFromRefinedUpcomingEvents:(id)arg1;
@property(readonly, nonatomic) BOOL canReportTomorrowEvents;
- (void)stopReportingUpcomingEvents;
- (void)startReportingUpcomingEventsWithBlock:(CDUnknownBlockType)arg1;
- (id)_upcomingEventsMetadataForRefinedUpcomingEvents:(id)arg1;
- (id)launchURL;
- (id)init;

@end

