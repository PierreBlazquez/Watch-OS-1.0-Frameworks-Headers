//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATSessionConnection.h"
#import "NSSecureCoding.h"

@class NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface ATSession : NSObject <ATSessionConnection, NSSecureCoding>
{
    NSMutableArray *_sessionTasks;
    NSMutableDictionary *_sessionTasksByIdentifier;
    NSMutableSet *_observing;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSXPCConnection *_connection;
    double _startTime;
    double _finishTime;
    BOOL _suspended;
    BOOL _finished;
    BOOL _running;
    BOOL _cancelled;
    NSString *_sessionTypeIdentifier;
    NSString *_sessionIdentifier;
    NSString *_localizedDescription;
    NSError *_error;
    NSXPCListenerEndpoint *_endpoint;
    NSString *_dataClass;
    id <ATMessageLink> _messageLink;
    double _progress;
}

+ (id)sessionsWithSessionTypeIdentifier:(id)arg1;
+ (id)allSessions;
+ (void)setSessionHost:(BOOL)arg1;
+ (void)_cancelSessionWithIdentifier:(id)arg1;
+ (id)_remoteSessionsWithTypeIdentifier:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(getter=isRunning) BOOL running; // @synthesize running=_running;
@property(copy) NSError *error; // @synthesize error=_error;
- (id)initWithSessionTypeIdentifier:(id)arg1;
- (id)sessionTasks;
- (id)sessionTasksWithGroupingKey:(id)arg1;
@property(nonatomic) __weak id <ATMessageLink> messageLink; // @synthesize messageLink=_messageLink;
@property(retain, nonatomic) NSString *dataClass; // @synthesize dataClass=_dataClass;
- (void)addSessionTasks:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 sessionTypeIdentifier:(id)arg2;
@property(retain) NSString *sessionTypeIdentifier; // @synthesize sessionTypeIdentifier=_sessionTypeIdentifier;
- (void)waitToFinish;
- (id)_keysToObserve;
- (void)_stopObservingKeysForTask:(id)arg1;
- (void)_observeKeysForTask:(id)arg1;
- (void)_beginTasks:(id)arg1;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3;
- (void)updateSessionTask:(id)arg1;
- (void)beginSessionTask:(id)arg1;
- (void)addObserver:(id)arg1;
@property(getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(getter=isSuspended) BOOL suspended;
- (void).cxx_destruct;
@property double progress; // @synthesize progress=_progress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
- (void)start;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void)removeObserver:(id)arg1;
@property(retain) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly) double duration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cancel;
- (void)_finishWithError:(id)arg1;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

