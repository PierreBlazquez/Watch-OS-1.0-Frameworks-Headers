//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString, NSURL, SAEmail, SALocation, SAPhone;

@interface SAABPersonSearch : SADomainCommand
{
}

+ (id)personSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)personSearch;
@property(copy, nonatomic) NSNumber *me;
@property(copy, nonatomic) NSString *relationship;
- (BOOL)requiresResponse;
- (id)encodedClassName;
@property(retain, nonatomic) SAEmail *email;
@property(copy, nonatomic) NSURL *accountIdentifier;
@property(retain, nonatomic) SALocation *address;
@property(copy, nonatomic) NSString *company;
@property(retain, nonatomic) SAPhone *phone;
@property(copy, nonatomic) NSString *scope;
@property(copy, nonatomic) NSString *name;
- (id)groupIdentifier;
@property(copy, nonatomic) NSDate *birthday;

@end
