//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)ISOLanguageCodes;
+ (id)availableLocaleIdentifiers;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)preferredLanguages;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)systemLocale;
+ (id)currentLocale;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)internetServicesRegion;
+ (unsigned int)lineDirectionForLanguage:(id)arg1;
+ (unsigned int)characterDirectionForLanguage:(id)arg1;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOCountryCodes;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localeIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long)_cfTypeID;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (id)_prefs;
- (void)_setNullLocale;
- (unsigned char)_nullLocale;

@end

