//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class PLXPCListenerOperatorComposition;

@interface PLWatchKitAgent : PLAgent
{
    PLXPCListenerOperatorComposition *_xpcHandler;
}

+ (id)entryEventPointDefinitions;
+ (void)load;
@property(retain) PLXPCListenerOperatorComposition *xpcHandler; // @synthesize xpcHandler=_xpcHandler;
- (void)initOperatorDependancies;
- (void).cxx_destruct;

@end

