//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IOSSHLUILock : NSObject
{
    _Bool _locked;
}

+ (id)sharedInstance;
- (void)releaseAssertionReason:(id)arg1;
- (void)takeAssertionReason:(id)arg1 lock:(BOOL)arg2 withOptions:(id)arg3;
- (void)unlockForReason:(id)arg1 withOptions:(id)arg2;
- (void)lockForReason:(id)arg1 withOptions:(id)arg2;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
- (id)init;

@end

