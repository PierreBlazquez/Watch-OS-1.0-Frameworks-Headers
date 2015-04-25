//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PSLanguageSelector : NSObject
{
    NSString *_language;
    NSArray *_languagesWithLocaleData;
    NSArray *_otherLanguages;
}

+ (id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3;
+ (id)sharedInstance;
- (id)languagesWithAvailableLocaleIdentifiers;
- (void)setLanguage:(id)arg1 fallback:(id)arg2;
- (id)renderableLanguagesFromList:(id)arg1;
- (BOOL)languageIsSupportedLanguage:(id)arg1;
- (id)defaultOtherLanguages;
- (id)userDeviceLanguageOrder;
- (id)deviceLanguageIdentifier;
- (id)appleLanguages;
- (id)supportedLanguages;
- (void)setLanguage:(id)arg1;
- (BOOL)preferredLanguages;
- (void)dealloc;
- (id)systemLanguages;

@end

