//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class NSData;

@interface _PFEncodedArray : NSArray
{
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)mutableCopy;
- (id)description;
- (unsigned int)retainCount;
- (id)copy;
- (id)init;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (const id *)_values;
- (void)_replaceObject:(id)arg1 atIndex:(unsigned int)arg2;
- (Class)classForArchiver;

@end

