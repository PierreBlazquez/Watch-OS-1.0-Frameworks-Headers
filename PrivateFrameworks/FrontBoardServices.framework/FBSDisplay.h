//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CADisplay, NSString;

@interface FBSDisplay : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>
{
    CADisplay *_caDisplay;
    unsigned int _type;
    int _tags;
    unsigned int _seed;
}

+ (id)_CADisplayForId:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
- (void)setConnected:(BOOL)arg1;
- (id)_nameForDisplayType;
- (id)initWithCADisplay:(id)arg1;
- (BOOL)isMusicOnlyDisplay;
- (BOOL)isiPodOnlyDisplay;
- (unsigned int)_typeFromTags:(unsigned int)arg1;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2 seed:(unsigned int)arg3 tags:(int)arg4;
- (BOOL)isAirPlayDisplay;
- (BOOL)isHiddenDisplay;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isExternal;
@property(nonatomic) unsigned int seed; // @synthesize seed=_seed;
- (BOOL)isWatchOnlyDisplay;
@property(readonly, nonatomic) int tags; // @synthesize tags=_tags;
@property(readonly, retain, nonatomic) CADisplay *caDisplay; // @synthesize caDisplay=_caDisplay;
- (BOOL)isCarDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) float scale;
@property(readonly, nonatomic) float orientation;
- (BOOL)isMainDisplay;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isConnected;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

