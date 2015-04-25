//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLImageTable;

@interface PLImageTableSegment : NSObject
{
    PLImageTable *_imageTable;
    unsigned long _index;
    void *_ptr;
    unsigned long _length;
    BOOL _dying;
}

- (id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long)arg3;
- (id)initWithImageTable:(id)arg1 index:(unsigned long)arg2 length:(unsigned long)arg3 idealAddress:(void *)arg4;
- (void *)bytes;
- (void)dealloc;
- (oneway void)release;

@end

