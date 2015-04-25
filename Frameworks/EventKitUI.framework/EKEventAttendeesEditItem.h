//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

@class EKParticipant, NSOperationQueue, NSString;

@interface EKEventAttendeesEditItem : EKEventEditItem
{
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
    NSOperationQueue *_availabilityQueue;
    int _numberOfConflicts;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)attendeesWithoutSelfOrganizerAndLocations;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)forceRefreshInviteesItemOnCommit;
- (BOOL)forceRefreshStartAndEndDatesOnCommit;
- (BOOL)forceTableReloadOnCommit;
- (BOOL)requiresReconfigurationOnCommit;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;

@end

