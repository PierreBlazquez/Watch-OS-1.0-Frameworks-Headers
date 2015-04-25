//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface IMServiceAgent : NSObject
{
    NSDictionary *_currentAVChatInfo;
}

+ (int)serviceAgentCapabilities;
+ (void)setServiceAgentCapabilities:(int)arg1;
+ (id)sharedAgent;
+ (id)imageURLForStatus:(unsigned int)arg1;
+ (id)imageNameForStatus:(unsigned int)arg1;
+ (void)forgetStatusImageAppearance;
+ (id)notificationCenter;
- (unsigned int)requestVideoStillForPerson:(id)arg1;
@property(readonly, nonatomic) unsigned int requestAudioReflectorStop;
@property(readonly, nonatomic) unsigned int requestAudioReflectorStart;
@property(readonly, nonatomic) NSDictionary *currentAVChatInfo;
- (id)serviceWithNameNonBlocking:(id)arg1;
@property(retain, nonatomic) NSArray *myAwayMessages;
@property(retain, nonatomic) NSArray *myAvailableMessages;
- (void)launchIfNecessary;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
@property(readonly, nonatomic) unsigned long long vcCapabilities;
- (id)myPictureData;
- (id)serviceWithName:(id)arg1;
- (id)notificationCenter;

@end

