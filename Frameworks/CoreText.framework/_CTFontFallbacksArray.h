//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class NSMutableArray;

@interface _CTFontFallbacksArray : NSArray
{
    int _lock;
    const struct TBaseFont *_baseFont;
    unsigned int _count;
    NSArray *_cascade;
    NSMutableArray *_fallbacks;
}

- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)initWithBaseFont:(const struct TBaseFont *)arg1 cascade:(id)arg2;

@end

