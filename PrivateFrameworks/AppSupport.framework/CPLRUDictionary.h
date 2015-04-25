//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject
{
    struct __CFDictionary *_dictionary;
    unsigned int _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned int)arg1;
- (id)objectForKeyWithoutAffectingLRU:(id)arg1;
- (id)allValuesInLRUOrder;
- (id)allKeysInLRUOrder;
- (unsigned int)linkedListCount;
- (void)_moveNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_addNodeToFront:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (id)initWithMaximumCapacity:(unsigned int)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)description;
- (void)removeAllObjects;
- (unsigned int)count;
- (void)dealloc;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)allKeys;

@end

