//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@interface NSCFDictionary : NSMutableDictionary
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)finalize;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)keyEnumerator;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObjectForKey:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (void)removeAllObjects;
- (unsigned int)count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (oneway void)release;
- (id)retain;
- (void)setObservationInfo:(void *)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;

@end

