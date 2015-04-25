//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface NTKLabelCache : NSObject
{
    NSMutableDictionary *_atlases;
    NSMutableSet *_preloadSet;
}

+ (void)prime;
+ (id)labelForText:(id)arg1 font:(int)arg2 fontSize:(float)arg3 padWithZeroes:(BOOL)arg4 filter:(BOOL)arg5;
- (void)primeFontSize:(float)arg1 font:(int)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4 step:(unsigned int)arg5;
- (id)textureFor:(id)arg1 font:(int)arg2 fontSize:(float)arg3 padWithZeroes:(BOOL)arg4;
- (void)exportTextureAtlas:(float)arg1 font:(int)arg2 values:(id)arg3 padWithZeroes:(BOOL)arg4 preload:(BOOL)arg5;
- (id)keyForLabelWithFont:(int)arg1 fontSize:(float)arg2 padWithZeroes:(BOOL)arg3;
- (void)primeFontSize:(float)arg1 font:(int)arg2 values:(id)arg3 padWithZeroes:(BOOL)arg4 preload:(BOOL)arg5;
- (void)loadAtlases;
- (void)primeFontSize:(float)arg1 font:(int)arg2 values:(id)arg3 padWithZeroes:(BOOL)arg4;
- (void)primeFontSize:(float)arg1 font:(int)arg2 values:(id)arg3;
- (void)primeFontSize:(float)arg1 font:(int)arg2 values:(id)arg3 preload:(BOOL)arg4;
- (void)checkVersion;
- (id)labelForText:(id)arg1 font:(int)arg2 fontSize:(float)arg3 padWithZeroes:(BOOL)arg4 filter:(BOOL)arg5;
- (void).cxx_destruct;
- (id)init;

@end

