//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)locationAddCompletedWithWeatherLocationId:(id)arg1;
+ (id)locationAddCompletedWithError:(id)arg1;
+ (id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationAddCompleted;
@property(copy, nonatomic) NSURL *weatherLocationId;
- (id)initWithWeatherLocationId:(id)arg1;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *error;
- (id)initWithError:(id)arg1;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

