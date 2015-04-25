//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class CSLLinkedListNode<CSLLinkedListNode><CSLLinkedListNodeEnumeration>;

@interface CSLLinkedList : NSObject <NSFastEnumeration>
{
    CSLLinkedListNode<CSLLinkedListNode><CSLLinkedListNodeEnumeration> *_head;
    CSLLinkedListNode<CSLLinkedListNode><CSLLinkedListNodeEnumeration> *_tail;
    unsigned long _mutationsCtr;
    id <CSLLinkedListStorageAllocator> _allocator;
    unsigned int _count;
}

- (id)rend;
- (void)erase:(id)arg1;
- (id)rbegin;
- (id)initWithStorageAllocator:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void).cxx_destruct;
- (id)end;
- (id)begin;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (id)init;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
- (void)removeObject:(id)arg1;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;

@end

