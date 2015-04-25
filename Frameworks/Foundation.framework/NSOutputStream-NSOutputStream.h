//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

@interface NSOutputStream (NSOutputStream)
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)outputStreamWithURL:(id)arg1 append:(BOOL)arg2;
+ (id)outputStreamToFileAtPath:(id)arg1 append:(BOOL)arg2;
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned int)arg2;
+ (id)outputStreamToMemory;
- (BOOL)hasSpaceAvailable;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (unsigned long)_cfTypeID;
@end
