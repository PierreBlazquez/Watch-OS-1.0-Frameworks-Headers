//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SystemConfig : NSObject
{
}

+ (int)readSysCfgBytes:(char *)arg1 bufferLen:(unsigned short)arg2;
+ (int)getKeyList:(id)arg1;
+ (int)writeSystemConfig:(unsigned int)arg1 inBuffer:(id)arg2;
+ (int)readSystemConfig:(unsigned int)arg1 outBuffer:(id)arg2;
+ (int)deleteSystemConfig:(unsigned int)arg1;
+ (unsigned long)smallKeySize;
+ (_Bool)writeToFDR:(unsigned int)arg1 buffer:(id)arg2;

@end
