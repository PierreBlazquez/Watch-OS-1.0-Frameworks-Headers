//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class SAWeatherLocation;

@interface SAWeatherLocationAdd : SADomainCommand
{
}

+ (id)locationAddWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationAdd;
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
