//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSNumber, NSString, SACalendar, SAUIAppPunchOut;

@interface SAMovieShowtime : AceObject <SAAceSerializable>
{
}

+ (id)showtimeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showtime;
@property(retain, nonatomic) SACalendar *showtime;
@property(copy, nonatomic) NSNumber *seniorTicketQuantity;
@property(copy, nonatomic) NSNumber *regularTicketQuantity;
@property(nonatomic) BOOL isImax;
@property(copy, nonatomic) NSNumber *childTicketQuantity;
@property(retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;
@property(nonatomic) BOOL is3d;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

