//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int *_indexes;
    unsigned int _length;
    void *_reserved;
}

+ (id)indexPathWithIndexes:(const unsigned int *)arg1 length:(unsigned int)arg2;
+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
- (id)initWithIndex:(unsigned int)arg1;
- (void)getIndexes:(unsigned int *)arg1;
- (id)initWithIndexes:(const unsigned int *)arg1 length:(unsigned int)arg2;
- (int)compare:(id)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)indexPathByAddingIndex:(unsigned int)arg1;
- (unsigned int)indexAtPosition:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned int length;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)getIndexes:(unsigned int *)arg1 range:(struct _NSRange)arg2;

@end
