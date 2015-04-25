//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, _VTNanoSiriPolicy, _VTSiriEnabledPolicy, _VTSpringBoardStartedPolicy, _VTVoiceTriggerEnabledPolicy;

@interface VTStateManagerSingleton : NSObject
{
    NSMutableSet *_instances;
    NSObject<OS_dispatch_queue> *_queue;
    _VTSiriEnabledPolicy *_siriEnabledPolicy;
    _VTVoiceTriggerEnabledPolicy *_vtEnabledPolicy;
    _VTSpringBoardStartedPolicy *_springboardPolicy;
    _VTNanoSiriPolicy *_nanoSiriPolicy;
    BOOL _voiceTriggerIsEnabled;
}

+ (id)singleton;
+ (void)initialize;
- (void)unregister:(id)arg1;
- (void)register:(id)arg1;
- (void)_powerlog:(id)arg1;
- (void)_stateTransitionDidOccur:(BOOL)arg1;
- (void)_handlePolicyUpdate:(id)arg1;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;

@end

