//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOutputStream;

@interface _NSJSONWriter : NSObject
{
    NSOutputStream *outputStream;
    int kind;
    char *dataBuffer;
    unsigned int dataBufferLen;
    unsigned int dataLen;
    BOOL freeDataBuffer;
    char *tempBuffer;
    unsigned int tempBufferLen;
    int totalDataWritten;
}

- (void)finalize;
- (id)init;
- (void)dealloc;
- (int)appendString:(id)arg1 range:(struct _NSRange)arg2;
- (int)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned int)arg3 error:(id *)arg4;
- (id)dataWithRootObject:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)resizeTemporaryBuffer:(unsigned long)arg1;

@end

