//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/__NSCFType.h>

@interface __NSCFString : __NSCFType
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)finalize;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setString:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (BOOL)getCString:(char *)arg1 maxLength:(unsigned int)arg2 encoding:(unsigned int)arg3;
- (unsigned int)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)substringWithRange:(struct _NSRange)arg1;
- (Class)classForCoder;
- (BOOL)hasSuffix:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (const char *)cStringUsingEncoding:(unsigned int)arg1;
- (unsigned int)length;
- (BOOL)hasPrefix:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (oneway void)release;
- (const char *)UTF8String;
- (id)retain;
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
- (BOOL)_isCString;
- (unsigned int)smallestEncoding;
- (unsigned int)fastestEncoding;
- (void)getLineStart:(unsigned int *)arg1 end:(unsigned int *)arg2 contentsEnd:(unsigned int *)arg3 forRange:(struct _NSRange)arg4;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (const unsigned short *)_fastCharacterContents;
- (unsigned int)cStringLength;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const char *)cString;
- (void)insertString:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isNSString__;

@end

