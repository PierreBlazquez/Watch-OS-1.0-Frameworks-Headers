//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface WebCoreSharedBufferData : NSData
{
    struct RefPtr<WebCore::SharedBuffer::DataBuffer> sharedBufferDataBuffer;
    struct RefPtr<WebCore::SharedBuffer> sharedBuffer;
}

+ (void)initialize;
- (id)initWithMemoryMappedSharedBuffer:(struct SharedBuffer *)arg1;
-     // Error parsing type: @12@0:4^{DataBuffer={atomic<int>=Ai}{Vector<char, 0, WTF::CrashOnOverflow>=*II}}8, name: initWithSharedBufferDataBuffer:
- (void)finalize;
- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)bytes;
- (unsigned int)length;
- (void)dealloc;

@end

