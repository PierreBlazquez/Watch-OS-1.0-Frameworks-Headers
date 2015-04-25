//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBlock, NSDictionary, NSXPCInterface;

@interface _NSXPCConnectionReplyInfo : NSObject
{
    NSBlock *_replyBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _cleanupBlock;
    SEL _selector;
    NSXPCInterface *_interface;
    NSDictionary *_userInfo;
    unsigned long long _proxyNumber;
}

@property(retain) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property SEL selector; // @synthesize selector=_selector;
- (void)dealloc;
@property(copy) CDUnknownBlockType cleanupBlock; // @synthesize cleanupBlock=_cleanupBlock;
@property(copy) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy) NSBlock *replyBlock; // @synthesize replyBlock=_replyBlock;
@property unsigned long long proxyNumber; // @synthesize proxyNumber=_proxyNumber;

@end

