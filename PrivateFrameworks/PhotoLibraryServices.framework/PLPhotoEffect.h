//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLPhotoEffect : NSObject
{
    NSString *_filterIdentifier;
    NSString *_displayName;
    NSString *_CIFilterName;
}

+ (unsigned int)indexOfEffectWithIdentifier:(id)arg1;
+ (id)allEffects;
+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (id)effectWithIdentifier:(id)arg1;
+ (id)effectWithCIFilterName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *CIFilterName; // @synthesize CIFilterName=_CIFilterName;
- (id)newEffectFilter;
@property(readonly, nonatomic) int latestVersion;
@property(readonly, copy, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)description;

@end

