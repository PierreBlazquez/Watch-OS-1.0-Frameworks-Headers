//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLResourceSPI.h"

@class MTLResourceAllocationInfo, NSString;

@interface MTLIOAccelResource : NSObject <MTLResourceSPI>
{
    struct _MTLIOAccelResource _res;
}

@property(readonly) id <MTLDevice> device;
- (id)initWithResource:(id)arg1;
@property(copy) NSString *label;
- (void)dealloc;
- (void)setAllocationInfoShared:(id)arg1 andCached:(id)arg2;
@property(readonly, nonatomic) unsigned int resourceSize;
@property(readonly, nonatomic) unsigned int resourceID;
@property(readonly, nonatomic) unsigned long long gpuAddress;
- (id)initWithDevice:(id)arg1 resource:(id)arg2;
@property(readonly) struct __IOAccelResource *resourceRef;
@property(readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property(readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property int responsibleProcess;
- (BOOL)isPurgeable;
- (id)initWithResource:(id)arg1 offset:(int)arg2;
- (struct __CFDictionary *)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(struct __CFString *)arg2 obj_dict:(struct __CFDictionary *)arg3;
- (struct __CFArray *)copyAnnotations;
- (void)annotateResource:(struct __CFDictionary *)arg1;
- (id)initWithDevice:(id)arg1 cacheMode:(unsigned int)arg2 args:(struct IOAccelNewResourceArgs *)arg3 argsSize:(unsigned int)arg4;
@property(readonly) unsigned int cpuCacheMode;
- (unsigned int)setPurgeableState:(unsigned int)arg1;
@property(readonly, nonatomic) void *virtualAddress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

