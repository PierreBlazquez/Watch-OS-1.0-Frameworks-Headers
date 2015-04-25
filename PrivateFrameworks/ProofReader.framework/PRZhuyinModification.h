//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProofReader/PRModification.h>

@class NSString;

@interface PRZhuyinModification : PRModification
{
    struct _NSRange _range;
    NSString *_replacementString;
    unsigned int _modificationType;
    struct _NSRange _syllableRange;
    struct _NSRange _additionalSyllableRange;
    double _modificationScore;
    unsigned int _syllableCountScore;
    unsigned char _letters[5];
    BOOL _producesPartialSyllable;
}

- (struct _NSRange)additionalSyllableRange;
- (double)modificationScore;
- (struct _NSRange)syllableRange;
- (unsigned int)modificationType;
- (BOOL)_shouldAppendLetter:(unsigned char)arg1;
- (struct _NSRange)combinedSyllableRange;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned int)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(BOOL)arg8;
- (BOOL)producesPartialSyllable;
- (unsigned int)syllableCountScore;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned int)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned int)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(BOOL)arg9;
- (struct _NSRange)range;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)replacementString;

@end

