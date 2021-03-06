//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PBMutableData;

@interface PBDataWriter : NSObject
{
    PBMutableData *_data;
}

- (void)writeTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)writeBareVarint:(unsigned long long)arg1;
- (void)writeUint8:(unsigned char)arg1;
- (void)writeInt8:(BOOL)arg1;
- (void)writeProtoBuffer:(id)arg1;
- (void)writeBigEndianFixed32:(unsigned int)arg1;
- (void)writeSfixed64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSfixed32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSint64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeSint32:(int)arg1 forTag:(unsigned short)arg2;
- (BOOL)writeData:(id)arg1;
- (id)immutableData;
- (void)writeUint64:(unsigned long long)arg1 forTag:(unsigned short)arg2;
- (void)writeUint32:(unsigned int)arg1 forTag:(unsigned short)arg2;
- (void)writeFixed32:(unsigned int)arg1 forTag:(unsigned short)arg2;
- (void)writeBigEndianShortThenString:(id)arg1;
- (void)writeBigEndianFixed16:(unsigned short)arg1;
- (id)data;
- (id)init;
- (void)dealloc;
- (void)writeFloat:(float)arg1 forTag:(unsigned short)arg2;
- (void)writeDouble:(double)arg1 forTag:(unsigned short)arg2;
- (void)writeInt64:(long long)arg1 forTag:(unsigned short)arg2;
- (void)writeBOOL:(BOOL)arg1 forTag:(unsigned short)arg2;
- (void)writeInt32:(int)arg1 forTag:(unsigned short)arg2;
- (void)writeString:(id)arg1 forTag:(unsigned short)arg2;
- (void)writeData:(id)arg1 forTag:(unsigned short)arg2;
- (unsigned int)write:(const char *)arg1 maxLength:(unsigned int)arg2;

@end

