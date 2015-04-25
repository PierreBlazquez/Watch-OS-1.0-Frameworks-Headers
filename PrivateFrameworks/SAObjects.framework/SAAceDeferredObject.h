//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAAceCommand.h"
#import "SAAceSerializable.h"
#import "SAClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSArray, NSString;

@interface SAAceDeferredObject : SABaseCommand <SAAceSerializable, SAAceCommand, SAClientBoundCommand, SAServerBoundCommand>
{
}

+ (id)aceDeferredObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceDeferredObject;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *key;
@property(retain, nonatomic) id <SAAceSerializable> value;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

