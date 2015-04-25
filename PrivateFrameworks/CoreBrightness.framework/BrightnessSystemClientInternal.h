//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSThread.h"

@class BrightnessSystemClientExportedObj, NSArray, NSTimer, NSXPCConnection;

@interface BrightnessSystemClientInternal : NSThread
{
    NSXPCConnection *_connection;
    id _remote;
    BrightnessSystemClientExportedObj *exportedObj;
    _Bool _initializationComplete;
    NSTimer *_timer;
    NSArray *clientProperties;
    _Bool shouldKeepRunning;
}

- (id)copyPropertyForKey:(id)arg1;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1 forProperties:(id)arg2;
- (void)destroyClient;
- (void)timerFire:(id)arg1;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (id)init;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;

@end

