//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (NCABAdditions)
- (BOOL)AB_shouldTransliterateToLatin;
- (id)AB_stringByTransliteratingToKana;
- (unsigned long)AB_firstUTF32Character;
- (BOOL)AB_containsEmojiCharacters;
- (BOOL)AB_containsNonLatinCharacters;
- (id)AB_stringByTransliteratingToPhoneticCharactersAsFamilyName:(BOOL)arg1;
@end

