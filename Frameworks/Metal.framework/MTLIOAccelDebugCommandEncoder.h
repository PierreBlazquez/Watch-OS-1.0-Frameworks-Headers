//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/_MTLDebugCommandEncoder.h>

@class MTLResourceList;

@interface MTLIOAccelDebugCommandEncoder : _MTLDebugCommandEncoder
{
    void *_kernelCommandBufferCurrent;
    void *_kernelCommandBufferEnd;
    struct IOAccelResourceList *_resourceList;
    MTLResourceList *_api_resourceList;
}

- (void)dealloc;
- (void)IOLogResource:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)kprintfResource:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)addAPIResource:(id)arg1;
- (void)debugResourceBytes:(unsigned int)arg1 length:(unsigned long)arg2 output_type:(unsigned int)arg3;
- (void)debugBytes:(const char *)arg1 length:(unsigned long)arg2 output_type:(unsigned int)arg3;
- (unsigned int)addDebugResourceListInfo:(struct IOAccelResourceInfo *)arg1 flag:(unsigned int)arg2;
- (void *)reserveKernelCommandBufferSpace:(unsigned long)arg1;
- (void)restartDebugPass;
- (void)IOLogBytes:(const char *)arg1 length:(unsigned long)arg2;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long)arg2;
- (id)initWithCommandBuffer:(id)arg1;
- (void)endEncoding;

@end

