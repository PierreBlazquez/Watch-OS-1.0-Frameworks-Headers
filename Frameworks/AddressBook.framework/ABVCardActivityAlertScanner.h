//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ABVCardActivityAlertScanner : NSObject
{
    NSString *_string;
    unsigned int _position;
}

+ (id)scannerWithString:(id)arg1;
+ (id)scanAlertValueFromString:(id)arg1;
+ (BOOL)characterIsStringValueCharacter:(unsigned short)arg1;
- (id)initWithString:(id)arg1;
- (unsigned int)position;
- (void)dealloc;
- (void)scanPastWhitespace;
- (unsigned short)scanCharacterWithEscaping:(BOOL)arg1;
- (BOOL)scanPastCharacter:(unsigned short)arg1;
- (unsigned short)scanCharacter;
- (id)scanUnquotedStringValue;
- (id)scanQuotedStringValue;
- (unsigned short)nextUnescapedCharacter;
- (BOOL)atEnd;
- (BOOL)scanPastKeyValueSeparator;
- (id)scanStringValue;
- (BOOL)scanPastItemDelimiter;
- (id)scanKeyValuePair;
- (id)scanAlertValue;
- (unsigned short)nextCharacter;

@end

