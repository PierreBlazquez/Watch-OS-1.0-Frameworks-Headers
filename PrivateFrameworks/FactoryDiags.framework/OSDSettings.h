//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSDSettings : NSObject
{
}

+ (_Bool)mergeDictionary:(id)arg1 intoDictionary:(id)arg2 error:(id *)arg3;
+ (BOOL)addConfigfromPath:(id)arg1 forDevice:(id)arg2 toObject:(id)arg3 withLoopTracker:(id)arg4 error:(id *)arg5;
+ (BOOL)loadSettingsFromDirectory:(id)arg1 withPrefix:(id)arg2 withDefaults:(id)arg3 intoObject:(id)arg4 useCommandLine:(_Bool)arg5 error:(id *)arg6;

@end

