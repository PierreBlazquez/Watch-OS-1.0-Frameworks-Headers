//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@interface WKRemoteObjectEncoder : NSCoder
{
    struct RefPtr<WebKit::MutableDictionary> _rootDictionary;
    struct Array *_objectStream;
    struct MutableDictionary *_currentDictionary;
}

- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (struct ImmutableDictionary *)rootObjectDictionary;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (BOOL)allowsKeyedCoding;
- (id)init;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (BOOL)requiresSecureCoding;

@end

