//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent
{
    PLXPCListenerOperatorComposition *_notification;
}

+ (id)stateEnumForStateString:(id)arg1;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
- (void)logEventForwardVideoWithEntry:(id)arg1;
- (void)initOperatorDependancies;
@property(retain) PLXPCListenerOperatorComposition *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)log;
- (id)init;

@end

