//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSArray, NSNumber, NSString, SAVoice, SAWatchData;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAssistantData;
@property(copy, nonatomic) NSNumber *uiScale;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSNumber *voiceTriggerEnabled;
@property(retain, nonatomic) SAWatchData *watchData;
@property(nonatomic) BOOL voiceOver;
@property(copy, nonatomic) NSString *userInterfaceIdiom;
@property(copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property(retain, nonatomic) SAVoice *ttsVoice;
@property(copy, nonatomic) NSString *temperatureUnit;
@property(copy, nonatomic) NSNumber *storefront;
@property(copy, nonatomic) NSArray *parentalRestrictions;
@property(copy, nonatomic) NSArray *meCards;
@property(nonatomic) BOOL inRetailStoreDemoMode;
@property(copy, nonatomic) NSNumber *holdToTalkThresholdInMilliseconds;
@property(copy, nonatomic) NSString *deviceVersion;
@property(copy, nonatomic) NSString *deviceEnclosure;
@property(copy, nonatomic) NSString *deviceColor;
@property(copy, nonatomic) NSArray *deviceCapabilities;
@property(copy, nonatomic) NSNumber *debugFlags;
@property(copy, nonatomic) NSNumber *allowUserGeneratedContent;
@property(copy, nonatomic) NSArray *abSources;
@property(nonatomic) BOOL handsFree;
@property(nonatomic) BOOL censorSpeech;
@property(copy, nonatomic) NSString *timeZoneId;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *osVersion;
@property(copy, nonatomic) NSString *region;
@property(copy, nonatomic) NSString *anchor;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

