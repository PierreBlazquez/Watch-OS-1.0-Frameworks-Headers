//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRequestOrigin;
@property(nonatomic) double altitude;
@property(copy, nonatomic) NSNumber *age;
- (id)encodedClassName;
@property(nonatomic) double verticalAccuracy;
@property(nonatomic) double horizontalAccuracy;
@property(copy, nonatomic) NSString *desiredAccuracy;
@property(nonatomic) double longitude;
@property(nonatomic) double latitude;
@property(copy, nonatomic) NSString *status;
@property(nonatomic) double direction;
@property(nonatomic) double speed;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

