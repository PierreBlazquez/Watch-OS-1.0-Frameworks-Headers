//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VSTextPreProcessorRule : NSObject
{
    NSString *_matchPattern;
    NSString *_replacement;
    BOOL _caseSensitive;
    BOOL _eatPunctuation;
}

- (id)matchedString:(id)arg1 forTokenInRange:(CDStruct_1ef3fb1f *)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)dealloc;

@end

