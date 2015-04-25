//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject
{
    NSMutableDictionary *_flowControlledOperationClasses;
}

- (id)statusReport;
- (void).cxx_destruct;
- (id)init;
- (void)limitOperation:(id)arg1 retryAfter:(id)arg2;
- (double)secondsUntilUnlimited:(id)arg1;
- (BOOL)isOperationLimited:(id)arg1;
@property(readonly) NSMutableDictionary *flowControlledOperationClasses; // @synthesize flowControlledOperationClasses=_flowControlledOperationClasses;
- (void)unlimitAllOperations;

@end

