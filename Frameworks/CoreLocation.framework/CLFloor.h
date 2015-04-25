//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CLFloor : NSObject <NSCopying, NSSecureCoding>
{
    int level;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithLevel:(int)arg1;
@property(readonly, nonatomic) int level; // @synthesize level;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

