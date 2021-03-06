//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSKeyValueMutableArray.h>

@class NSKeyValueMutatingArrayMethodSet;

@interface NSKeyValueFastMutableArray : NSKeyValueMutableArray
{
    NSKeyValueMutatingArrayMethodSet *_mutatingMethods;
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end

