//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKJoystickGestureRecognizerButton;

@protocol CKJoystickGestureRecognizerButtonDelegate <NSObject>
- (void)joystickGestureRecognizerButtonGestureDidEnd:(CKJoystickGestureRecognizerButton *)arg1;
- (void)joystickGestureRecognizerButtonGestureDidBegin:(CKJoystickGestureRecognizerButton *)arg1;
- (BOOL)joystickGestureRecognizerButtonShouldRecognizeGesture:(CKJoystickGestureRecognizerButton *)arg1;
- (BOOL)joystickGestureRecognizerButtonIsShowingHint:(CKJoystickGestureRecognizerButton *)arg1;
- (void)joystickGestureRecognizerButtonShowHint:(CKJoystickGestureRecognizerButton *)arg1;
- (BOOL)joystickGestureRecognizerButtonShouldShowHint:(CKJoystickGestureRecognizerButton *)arg1;
- (void)joystickGestureRecognizerButtonDidTouchUpInsideButton:(CKJoystickGestureRecognizerButton *)arg1;
- (void)joystickGestureRecognizerButtonDidTouchDownButton:(CKJoystickGestureRecognizerButton *)arg1;
@end

