//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface VMUClassInfoMap : NSObject <NSCoding>
{
    void *_cppMap;
}

+ (id)infoMap;
+ (void)initialize;
- (void)addClassInfosFromMap:(id)arg1;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (void)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2;
- (id)classInfoForAddress:(unsigned long long)arg1;
- (id)init;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

