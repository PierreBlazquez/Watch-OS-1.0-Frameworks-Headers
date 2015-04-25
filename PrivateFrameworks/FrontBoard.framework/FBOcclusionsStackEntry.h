//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOrderedSet, NSSet, NSString;

@interface FBOcclusionsStackEntry : NSObject
{
    NSString *_key;
    float _level;
    NSSet *_occlusions;
    NSOrderedSet *_orderedOcclusions;
}

- (id)initWithKey:(id)arg1;
@property(copy, nonatomic) NSSet *occlusions;
@property(readonly, copy, nonatomic) NSOrderedSet *orderedOcclusions; // @synthesize orderedOcclusions=_orderedOcclusions;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) float level; // @synthesize level=_level;
- (id)description;
- (void)dealloc;

@end

