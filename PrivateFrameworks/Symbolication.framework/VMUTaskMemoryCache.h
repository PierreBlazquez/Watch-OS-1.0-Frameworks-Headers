//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VMUTaskMemoryCache : NSObject
{
    struct mapped_memory_t *_memoryRegions;
    unsigned int _task;
    BOOL _taskIs64Bit;
    BOOL _stopped;
    BOOL _shouldTouchPages;
}

+ (id)taskMemoryCacheForTask:(unsigned int)arg1;
+ (BOOL)taskIs64Bit:(unsigned int)arg1;
- (void)finalize;
- (int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long *)arg2;
- (int)stopPeeking;
- (void)flushMemoryCache;
- (int)startPeeking;
- (BOOL)copyRange:(struct _VMURange)arg1 to:(void *)arg2;
- (int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void **)arg3;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;

@end

