//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CoreCECTypesInternal : NSObject
{
    NSArray *deckControlConstants;
    NSArray *deckControlStrings;
    NSArray *deckInfoConstants;
    NSArray *deckInfoStrings;
    NSArray *deviceTypesConstants;
    NSArray *deviceTypesStrings;
    NSArray *playModeConstants;
    NSArray *playModeStrings;
    NSArray *requestTypeConstants;
    NSArray *requestTypeStrings;
    NSArray *systemAudioModeStatusConstants;
    NSArray *systemAudioModeStatusStrings;
    NSArray *uiCommandConstants;
    NSArray *uiCommandStrings;
}

+ (id)defaultTypes;
- (unsigned int)uiCommandForString:(id)arg1;
- (unsigned int)systemAudioStatusForString:(id)arg1;
- (unsigned int)requestTypeForString:(id)arg1;
- (unsigned int)deviceTypeForString:(id)arg1;
- (unsigned int)playModeForString:(id)arg1;
- (unsigned int)deckInfoForString:(id)arg1;
- (unsigned int)deckControlModeForString:(id)arg1;
- (id)stringForSystemAudioStatus:(unsigned int)arg1;
- (id)stringForRequestType:(unsigned int)arg1;
- (id)stringForPlayMode:(unsigned int)arg1;
- (id)stringForDeckControlMode:(unsigned int)arg1;
- (id)stringForDeckInfo:(unsigned int)arg1;
- (id)stringForDeviceType:(unsigned int)arg1;
- (id)stringForUICommand:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

@end

