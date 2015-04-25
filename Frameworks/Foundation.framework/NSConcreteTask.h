//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSTask.h>

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSPort;

@interface NSConcreteTask : NSTask
{
    NSObject<OS_dispatch_semaphore> *_lock;
    NSMutableDictionary *_dictionary;
    CDUnknownBlockType _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    NSPort *_tmpPort;
    int _suspendCount;
    int _pid;
    int _platformExitInfo;
    BOOL _hasExeced;
    BOOL _isRunning;
    BOOL _hasPostedDeathNotification;
    BOOL _terminationRun;
    BOOL _qos;
}

- (void)finalize;
- (id)arguments;
- (void)setEnvironment:(id)arg1;
- (CDUnknownBlockType)terminationHandler;
- (int)processIdentifier;
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;
- (BOOL)isRunning;
- (BOOL)resume;
- (BOOL)suspend;
- (id)environment;
- (id)init;
- (void)dealloc;
- (void)setStartsNewProcessGroup:(BOOL)arg1;
- (int)_procid;
- (void)terminateTask;
- (id)taskDictionary;
- (void)setTaskDictionary:(id)arg1;
- (id)preferredArchitectures;
- (void)setPreferredArchitectures:(id)arg1;
- (void)waitUntilExit;
- (int)_platformExitInformation;
- (void)_withTaskDictionary:(CDUnknownBlockType)arg1;
- (void)_setTerminationHandler:(CDUnknownBlockType)arg1;
- (id)standardError;
- (id)standardOutput;
- (id)standardInput;
- (void)setStandardError:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (id)launchPath;
- (int)suspendCount;
- (void)interrupt;
- (void)setLaunchPath:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)launch;
- (int)terminationReason;
- (int)terminationStatus;
- (void)launchWithDictionary:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)setQualityOfService:(int)arg1;
- (int)qualityOfService;
- (id)currentDirectoryPath;
- (void)terminate;

@end

