//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IOSSystemShell/IOSSHLButtonKeyState.h>

@class NSMutableSet;

@interface IOSSHLChordedButtonKeyState : IOSSHLButtonKeyState
{
    NSMutableSet *_pendingRemoval;
    NSMutableSet *_buttons;
}

- (void)physicalButtonStateChange:(id)arg1 timestamp:(unsigned long long)arg2 down:(_Bool)arg3;
- (void)_handleGesturesCompleted;
- (id)initWithDown:(_Bool)arg1 timestamp:(unsigned long long)arg2 delegate:(id)arg3;
- (id)buttons;
- (void).cxx_destruct;
- (id)description;

@end

