//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_group>;

@interface BWGraph : NSObject
{
    NSMutableArray *_nodes;
    NSMutableArray *_sourceNodes;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_connections;
    NSMutableArray *_outputsWithSharedPools;
    BOOL _running;
    BOOL _beingConfigured;
    long long _inflightConfigurationID;
    NSObject<OS_dispatch_group> *_startGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    BOOL _supportsLiveReconfiguration;
    long _errorStatus;
    id <BWGraphStatusDelegate> _statusDelegate;
    BOOL _classicRetainedBufferCount;
}

+ (void)initialize;
- (BOOL)stop:(id *)arg1;
- (id)_reverseBreadthFirstEnumerator;
- (id)_depthFirstEnumerator;
- (id)_breadthFirstEnumerator;
- (id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1;
- (void)_makeParentConfigurationChangesLive;
- (BOOL)_prepareNodesWithConfigurationChanges:(id *)arg1;
- (BOOL)_resolveRetainedBufferCounts:(id *)arg1;
- (BOOL)_resolveFormats:(id *)arg1;
- (void)_waitForOutstandingStartOrCommitOperationToComplete;
@property long errorStatus; // @synthesize errorStatus=_errorStatus;
@property(nonatomic) id <BWGraphStatusDelegate> statusDelegate; // @synthesize statusDelegate=_statusDelegate;
- (id)_newDispatchGroupForSinksToTransitionToState:(int)arg1;
- (id)_sinkNodes;
- (id)_sourceNodes;
- (void)waitForOutstandingStartOrCommitOperationToComplete;
@property(readonly, nonatomic) BOOL supportsLiveReconfiguration;
- (BOOL)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3;
- (BOOL)addNode:(id)arg1 error:(id *)arg2;
- (BOOL)commitConfigurationWithID:(long long)arg1 error:(id *)arg2;
- (BOOL)start:(id *)arg1;
- (id)init;
- (void)dealloc;
- (id)dotString;
- (void)beginConfiguration;

@end

