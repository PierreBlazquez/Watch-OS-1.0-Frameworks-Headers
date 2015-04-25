//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLToolsCommandEncoder.h>

#import "MTLComputeCommandEncoder.h"

@class NSString;

@interface MTLToolsComputeCommandEncoder : MTLToolsCommandEncoder <MTLComputeCommandEncoder>
{
}

- (void)executeBarrier;
- (void)dispatchThreadgroups:(CDStruct_32a7f38a)arg1 threadsPerThreadgroup:(CDStruct_32a7f38a)arg2;
- (void)setThreadgroupMemoryLength:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned int *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned int hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

