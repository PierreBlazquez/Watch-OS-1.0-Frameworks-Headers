//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableData.h"

@interface NSConcreteMutableData : NSMutableData
{
    unsigned int _reserved:1;
    unsigned int _needToZero:1;
    unsigned int _hasVM:1;
    unsigned int _retainCount:29;
    unsigned int _length;
    unsigned int _capacity;
    void *_bytes;
}

- (void)finalize;
- (void)increaseLengthBy:(unsigned int)arg1;
- (id)initWithLength:(unsigned int)arg1;
- (void *)mutableBytes;
- (void)appendData:(id)arg1;
- (void)setLength:(unsigned int)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned int)arg2;
- (const void *)bytes;
- (id)initWithCapacity:(unsigned int)arg1;
- (unsigned int)length;
- (id)init;
- (void)dealloc;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;
- (void)_freeBytes;
- (void)resetBytesInRange:(struct _NSRange)arg1;
- (id)initWithBytes:(void *)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(CDUnknownBlockType)arg4;

@end

