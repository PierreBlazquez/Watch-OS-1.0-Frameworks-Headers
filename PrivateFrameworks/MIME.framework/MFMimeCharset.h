//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MFMimeCharset : NSObject
{
    unsigned long _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
    unsigned int _coversLargeUnicodeSubset:1;
    unsigned int _useBase64InHeaders:1;
    unsigned int _canBeUsedForOutgoingMessages:1;
}

+ (id)charsetForEncoding:(unsigned long)arg1;
+ (id)allMimeCharsets;
+ (id)allMimeCharsets:(BOOL)arg1;
+ (id)preferredMimeCharset;
- (unsigned long)encoding;
- (id)charsetName;
- (BOOL)useBase64InHeaders;
- (BOOL)coversLargeUnicodeSubset;
- (BOOL)canBeUsedForOutgoingMessages;
- (id)initWithEncoding:(unsigned long)arg1;
- (void)_setPrimaryLanguage:(id)arg1;
- (id)displayName;
- (id)primaryLanguage;
- (id)description;
- (void)dealloc;

@end
