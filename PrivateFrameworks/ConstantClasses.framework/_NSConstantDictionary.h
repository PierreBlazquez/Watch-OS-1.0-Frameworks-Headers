//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

#import "NSFastEnumeration.h"

@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>
{
}

+ (void)load;
+ (id)alloc;
- (unsigned int)capacity;
- (id)keyEnumerator;
- (id)allValues;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectEnumerator;
- (unsigned int)retainCount;
- (unsigned int)count;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)allKeys;
- (oneway void)release;
- (id)retain;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;

@end

