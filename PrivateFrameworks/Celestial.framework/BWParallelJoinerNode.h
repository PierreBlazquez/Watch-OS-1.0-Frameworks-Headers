//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWFunnelNode.h>

@class NSMutableDictionary;

@interface BWParallelJoinerNode : BWFunnelNode
{
    int _inputsCount;
    NSMutableDictionary *_receivedBuffers;
    NSMutableDictionary *_sentErrorCountForID;
}

- (id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned long)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)dealloc;

@end

