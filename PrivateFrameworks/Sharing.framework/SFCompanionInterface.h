//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCInterface, Protocol;

@interface SFCompanionInterface : NSObject
{
    NSXPCInterface *_interface;
}

+ (id)interfaceWithProtocol:(id)arg1;
- (id)initWithNSXPCInterface:(id)arg1;
@property Protocol *protocol;
@property(retain) NSXPCInterface *interface; // @synthesize interface=_interface;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
- (void)dealloc;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;

@end

