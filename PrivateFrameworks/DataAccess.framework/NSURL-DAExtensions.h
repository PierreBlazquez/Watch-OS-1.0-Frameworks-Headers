//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (DAExtensions)
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;
+ (int)classicPortForScheme:(id)arg1;
+ (id)URLWithDirtyString:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
- (id)pathWithoutTrailingRemovingSlash;
- (id)urlBySettingPath:(id)arg1;
- (id)urlBySettingPort:(id)arg1;
- (id)urlBySettingHost:(id)arg1;
- (id)urlBySettingScheme:(id)arg1;
- (id)urlByRemovingUsername;
- (BOOL)isEqualToDAVURL:(id)arg1;
- (id)urlBySettingPath:(id)arg1 keepUsername:(BOOL)arg2;
- (id)urlBySettingPort:(id)arg1 keepUsername:(BOOL)arg2;
- (id)urlBySettingHost:(id)arg1 keepUsername:(BOOL)arg2;
- (id)urlBySettingScheme:(id)arg1 keepUsername:(BOOL)arg2;
- (id)rawPath;
- (id)urlBySettingUsername:(id)arg1;
@end

