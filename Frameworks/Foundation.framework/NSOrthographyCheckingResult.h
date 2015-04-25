//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSOrthography *_orthography;
}

- (unsigned long long)resultType;
- (struct _NSRange)range;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 orthography:(id)arg2;
- (id)orthography;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;

@end

