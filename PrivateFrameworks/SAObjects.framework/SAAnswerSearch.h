//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SALocation;

@interface SAAnswerSearch : SADomainCommand
{
}

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) NSString *verbType;
@property(copy, nonatomic) NSString *timeQuestion;
@property(copy, nonatomic) NSArray *product;
@property(copy, nonatomic) NSString *placeAttribute;
@property(copy, nonatomic) NSString *miscQuestion;
@property(copy, nonatomic) NSString *attribute;
- (BOOL)requiresResponse;
- (id)encodedClassName;
@property(retain, nonatomic) SALocation *address;
- (id)groupIdentifier;

@end
