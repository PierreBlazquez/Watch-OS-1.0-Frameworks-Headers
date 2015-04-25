//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLIOAccelDevice;

@interface MTLIOAccelDeviceShmem : NSObject
{
    struct _MTLIOAccelDeviceShmemPrivate _priv;
    MTLIOAccelDevice *_device;
    unsigned int _shmemID;
    unsigned int _shmemSize;
    void *_virtualAddress;
    _Bool purgeable;
}

- (void)dealloc;
@property(readonly) unsigned int shmemSize; // @synthesize shmemSize=_shmemSize;
@property(readonly) unsigned int shmemID; // @synthesize shmemID=_shmemID;
@property(readonly) void *virtualAddress; // @synthesize virtualAddress=_virtualAddress;
- (id)initWithDevice:(id)arg1 shmemSize:(unsigned int)arg2;

@end

