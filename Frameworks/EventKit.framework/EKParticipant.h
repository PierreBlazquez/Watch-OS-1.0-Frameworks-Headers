//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import "EKIdentityProtocol.h"
#import "NSCopying.h"

@class EKCalendarItem, NSString, NSURL;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying>
{
    EKCalendarItem *_owner;
}

+ (void *)findABPersonByURL:(id)arg1 inAddressBook:(void *)arg2;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *comment;
@property(copy, nonatomic) NSURL *address;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) EKCalendarItem *owner; // @synthesize owner=_owner;
- (void)setDisplayName:(id)arg1;
- (void *)ABRecordWithAddressBook:(void *)arg1;
- (BOOL)isEqualToParticipant:(id)arg1;
@property(readonly, nonatomic) int participantRole;
@property(readonly, nonatomic) int participantType;
- (id)_persistentItem;
@property(readonly, nonatomic) BOOL isCurrentUser;
@property(readonly, nonatomic) int participantStatus;
@property(copy, nonatomic) NSString *emailAddress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

