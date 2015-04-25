//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface PBDataReader : NSObject
{
    unsigned int _pos;
    BOOL _error;
    const char *_bytes;
    NSData *_data;
    unsigned int _length;
}

- (id)readBigEndianShortThenString;
- (id)readBytes:(unsigned int)arg1;
- (void)recall:(const CDStruct_c0454aff *)arg1;
- (BOOL)mark:(CDStruct_c0454aff *)arg1;
- (BOOL)readBOOL;
- (long long)readSfixed64;
- (int)readSfixed32;
- (unsigned long long)readFixed64;
- (unsigned int)readFixed32;
- (long long)readSint64;
- (int)readSint32;
- (unsigned long long)readUint64;
- (unsigned int)readUint32;
- (long long)readInt64;
- (int)readInt32;
- (double)readDouble;
- (long long)readVarInt;
- (BOOL)readInt8;
- (id)readProtoBuffer;
- (unsigned long long)readBigEndianFixed64;
- (BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)readTag:(unsigned short *)arg1 andType:(char *)arg2;
- (BOOL)seekToOffset:(unsigned int)arg1;
- (void)updateData:(id)arg1;
- (BOOL)hasMoreData;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (BOOL)hasError;
- (id)readString;
- (id)readData;
- (float)readFloat;
- (BOOL)isAtEnd;
@property unsigned int length; // @synthesize length=_length;
- (unsigned int)offset;
@property unsigned int position; // @synthesize position=_pos;
- (id)initWithData:(id)arg1;
- (id)data;
- (void)dealloc;

@end

