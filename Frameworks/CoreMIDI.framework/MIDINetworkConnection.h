//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject
{
    struct _MIDINetworkConnectionImpl *_impl;
}

+ (id)connectionWithHost:(id)arg1;
@property(readonly, retain, nonatomic) MIDINetworkHost *host;
- (id)init;
- (void)dealloc;

@end

