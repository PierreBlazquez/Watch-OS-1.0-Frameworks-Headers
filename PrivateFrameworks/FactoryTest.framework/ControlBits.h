//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ControlBits : NSObject
{
}

+ (int)readControlBit:(unsigned char)arg1 into:(out id *)arg2;
+ (int)_writeControlBits:(unsigned char)arg1 status:(int)arg2 swVersion:(id)arg3;
+ (int)_writeControlBits:(unsigned char)arg1 ecid:(long long)arg2 status:(int)arg3 swVersion:(id)arg4 error:(id *)arg5;
+ (_Bool)conformsToiPXInterface;
+ (Class)implementationClass;
+ (int)readControlBitsBytes:(char *)arg1 bufferLen:(unsigned short)arg2;
+ (_Bool)_headerCheck;
+ (int)readControlBits:(unsigned char)arg1 status:(int *)arg2 failCount:(int *)arg3 secure:(char *)arg4;
+ (int)writeControlBits:(unsigned char)arg1 status:(int)arg2;
+ (int)writeControlBits:(unsigned char)arg1 ecid:(long long)arg2 status:(int)arg3 swVersion:(id)arg4;
+ (int)writeControlBits:(unsigned char)arg1 status:(int)arg2 swVersion:(id)arg3;
+ (int)writeControlBits:(unsigned char)arg1 ecid:(long long)arg2 status:(int)arg3 swVersion:(id)arg4 error:(id *)arg5;
+ (void)initialize;

@end

