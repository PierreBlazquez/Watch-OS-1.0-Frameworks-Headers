//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSString;

@interface SAGKAlternateResult : AceObject <SAAceSerializable>
{
}

+ (id)alternateResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)alternateResult;
- (id)encodedClassName;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
@property(copy, nonatomic) NSString *name;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

