//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject
{
    id _attr;
    id _value;
    unsigned int _count;
    void *_reserved;
}

@property(readonly, retain) id value;
@property(readonly) unsigned int count;
- (void)dealloc;
- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned int)arg4;
@property(readonly, copy) NSString *attribute;

@end

