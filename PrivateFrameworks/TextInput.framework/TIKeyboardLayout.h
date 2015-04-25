//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface TIKeyboardLayout : NSObject <NSSecureCoding>
{
    unsigned int _count;
    struct _ShortRect *_frames;
    unsigned int _framesCapacity;
    char *_strings;
    unsigned int _stringsSize;
    unsigned int _stringsCapacity;
}

+ (BOOL)supportsSecureCoding;
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;
- (void)ensureStringCapacity:(unsigned int)arg1;
- (void)ensureFrameCapacity:(unsigned int)arg1;
- (void)addKeyWithString:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
