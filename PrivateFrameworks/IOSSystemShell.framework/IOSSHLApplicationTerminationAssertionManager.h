//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IOSSHLApplicationTerminationAssertionManager : NSObject
{
    NSMutableDictionary *_assertionsByPresentationId;
}

+ (id)sharedInstance;
- (void)_removeTerminationAssertion:(id)arg1;
- (void)_addTerminationAssertion:(id)arg1;
- (id)acquireTerminationAssertionForPresentationId:(id)arg1 withReason:(unsigned char)arg2 error:(char *)arg3;
- (BOOL)_canAcquireTerminationAssertionForPresentationId:(id)arg1 reason:(unsigned char)arg2 error:(char *)arg3;
- (id)terminationAssertionsForPresentationId:(id)arg1 withReason:(unsigned char)arg2;
- (id)terminationAssertionsForPresentationId:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end

