//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IOSSHLButtonKeyStateDelegate.h"

@class IOSSHLChordedButtonKeyState, NSMutableDictionary, NSString;

@interface IOSSHLHIDHandler : NSObject <IOSSHLButtonKeyStateDelegate>
{
    int _keyDownCount;
    _Bool _swallowingKeyEvents;
    _Bool _volumeUpDown;
    _Bool _volumeDownDown;
    NSMutableDictionary *_buttonKeyStateMap;
    struct {
        unsigned int delegateShouldAllowEvent:1;
        unsigned int delegateButtonEvents:1;
        unsigned int delegateProximityEvents:1;
        unsigned int delegateProximityEventsTimestamp:1;
        unsigned int delegateNonKeyboardHIDEvents:1;
        unsigned int delegateButtonCanBeChorded:1;
    } _flags;
    IOSSHLChordedButtonKeyState *_chordedButton;
    id <IOSHIDHandlerDelegate> _delegate;
}

+ (id)sharedInstance;
- (_Bool)_shouldSwallowHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)buttonHeldAndReleased:(id)arg1;
- (void)buttonHeld:(id)arg1 state:(int)arg2;
- (_Bool)HandleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
@property(nonatomic) __weak id <IOSHIDHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

