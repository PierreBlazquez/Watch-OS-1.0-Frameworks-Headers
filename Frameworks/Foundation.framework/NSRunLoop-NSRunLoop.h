//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRunLoop.h"

@interface NSRunLoop (NSRunLoop)
+ (id)mainRunLoop;
+ (id)currentRunLoop;
+ (id)_new:(id)arg1;
- (void)removePort:(id)arg1 forMode:(id)arg2;
- (void)addPort:(id)arg1 forMode:(id)arg2;
- (void)run;
- (id)currentMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addTimer:(id)arg1 forMode:(id)arg2;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)runUntilDate:(id)arg1;
- (BOOL)runBeforeDate:(id)arg1;
- (BOOL)runMode:(id)arg1 untilDate:(id)arg2;
- (void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2;
- (void)_wakeup;
- (id)limitDateForMode:(id)arg1;
- (void)_invalidateTimers;
- (id)allModes;
- (BOOL)containsTimer:(id)arg1 forMode:(id)arg2;
- (id)timersForMode:(id)arg1;
- (void)removeTimer:(id)arg1 forMode:(id)arg2;
- (id)portsForMode:(id)arg1;
- (BOOL)containsPort:(id)arg1 forMode:(id)arg2;
- (BOOL)runMode:(id)arg1 beforeDate:(id)arg2;
- (void)_removePort:(id)arg1 forMode:(id)arg2;
- (void)_addPort:(id)arg1 forMode:(id)arg2;
- (BOOL)_containsPort:(id)arg1 forMode:(id)arg2;
- (void)_portInvalidated:(id)arg1;
- (void)_enumerateInfoPairsWithBlock:(CDUnknownBlockType)arg1;
- (struct __CFRunLoop *)getCFRunLoop;
@end

