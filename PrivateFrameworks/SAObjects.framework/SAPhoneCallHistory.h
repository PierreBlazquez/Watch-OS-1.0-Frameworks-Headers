//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSNumber;

@interface SAPhoneCallHistory : SAPhoneCallSearchResult
{
}

+ (id)callHistoryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callHistory;
@property(copy, nonatomic) NSNumber *callCount;
@property(copy, nonatomic) NSNumber *blocked;
@property(copy, nonatomic) NSNumber *missed;
@property(copy, nonatomic) NSNumber *faceTimeAudio;
@property(copy, nonatomic) NSNumber *faceTime;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
@property(copy, nonatomic) NSNumber *outgoing;
- (id)groupIdentifier;

@end
