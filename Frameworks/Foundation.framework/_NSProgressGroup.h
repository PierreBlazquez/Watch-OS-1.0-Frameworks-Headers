//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSProgress, _NSProgressFraction;

@interface _NSProgressGroup : NSObject
{
    NSProgress *_parent;
    long long _portionOfParent;
    NSMutableSet *_children;
    _NSProgressFraction *_childrenFraction;
    unsigned long long _finishedChildrenCount;
    BOOL _closed;
}

- (id)parent;
- (void)pause;
- (void)close;
- (id)description;
- (void)dealloc;
- (void)cancel;
- (void)stopNotifications;
- (void)updateChildWithOldFraction:(id)arg1 newFraction:(id)arg2;
- (void)addChild:(id)arg1;
- (id)initWithParent:(id)arg1 portion:(long long)arg2;
- (id)_indentedDescription:(unsigned int)arg1;
- (void)prioritize;

@end

