//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPersistentParticipant.h>

@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant
{
}

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (void)setOwner:(id)arg1;
@property(copy, nonatomic) NSDate *lastModified;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)owner;
- (int)entityType;
@property(nonatomic) BOOL statusChanged;
@property(nonatomic) BOOL commentChanged;
@property(nonatomic) int participantType;
- (id)initWithAddress:(id)arg1 name:(id)arg2;
- (BOOL)_valueForFlag:(unsigned int)arg1;
- (void)_setFlag:(unsigned int)arg1 value:(BOOL)arg2;
@property(nonatomic) int pendingStatus;
@property(nonatomic) int participantRole;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
@property(nonatomic) int participantStatus;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;

@end

