//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMovieV2MovieContextObject : SADomainObject
{
}

+ (id)movieContextObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieContextObject;
@property(copy, nonatomic) NSString *movieName;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

