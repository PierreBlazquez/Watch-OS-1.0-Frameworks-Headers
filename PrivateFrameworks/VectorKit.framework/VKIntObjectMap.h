//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKIntObjectMap : NSObject
{
    struct unordered_map<int, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>>> _map;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setObject:(id)arg1 forKey:(int)arg2;
- (id)objectForKey:(int)arg1;

@end

