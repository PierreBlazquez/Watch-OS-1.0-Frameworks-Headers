//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface IMPair : NSObject <NSCopying>
{
    id _first;
    id _second;
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
@property(retain) id first; // @synthesize first=_first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
@property(retain) id second; // @synthesize second=_second;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

