//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CKOperationCallbackManager : NSObject
{
    NSMutableDictionary *_progressCallbacks;
    NSMutableDictionary *_completionCallbacks;
}

- (void).cxx_destruct;
- (id)init;
@property(retain) NSMutableDictionary *completionCallbacks; // @synthesize completionCallbacks=_completionCallbacks;
@property(retain) NSMutableDictionary *progressCallbacks; // @synthesize progressCallbacks=_progressCallbacks;
- (void)unregisterAllCallbacksForOperation:(id)arg1;
- (void)registerCompletionCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerProgressCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
- (void)removeAllCallbacks;

@end

