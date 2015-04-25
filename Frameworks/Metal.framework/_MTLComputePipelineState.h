//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _MTLComputePipelineState : NSObject
{
    NSString *_label;
    id <MTLDevice> _device;
}

@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) NSString *label; // @synthesize label=_label;
- (id)description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;

@end

