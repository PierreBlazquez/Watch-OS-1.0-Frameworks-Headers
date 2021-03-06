//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "StreamingUnzipProtocol.h"

@class NSXPCConnection, StreamingUnzipState;

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol>
{
    long long _sandboxToken;
    void *_decompressionOutputBuffer;
    NSXPCConnection *_xpcConnection;
    StreamingUnzipState *_currentState;
}

- (void)_supplyBytes:(const char *)arg1 length:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)_beginNonStreamablePassthroughWithRemainingBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)_setErrorState;
- (void)finishStreamWithReply:(CDUnknownBlockType)arg1;
- (void)suspendStreamWithReply:(CDUnknownBlockType)arg1;
- (void)supplyXPCData:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)supplyDispatchData:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)supplyRemappableData:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)supplyBytes:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char *)arg2 options:(id)arg3 withReply:(CDUnknownBlockType)arg4;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

