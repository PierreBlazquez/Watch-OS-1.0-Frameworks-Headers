//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSScanner.h>

@class NSCharacterSet, NSString;

@interface NSConcreteScanner : NSScanner
{
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned int scanLocation;
    struct {
        unsigned int caseSensitive:1;
        unsigned int :31;
    } flags;
}

- (unsigned int)scanLocation;
- (void)finalize;
- (BOOL)scanLongLong:(long long *)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (BOOL)scanInt:(int *)arg1;
- (id)locale;
- (void)setScanLocation:(unsigned int)arg1;
- (void)setLocale:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)string;
- (void)dealloc;
- (id)_invertedSkipSet;
- (void)setCaseSensitive:(BOOL)arg1;
- (BOOL)caseSensitive;
- (id)charactersToBeSkipped;

@end

