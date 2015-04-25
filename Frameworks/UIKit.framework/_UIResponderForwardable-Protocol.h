//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, UIEvent, UIResponder, UIWindow;

@protocol _UIResponderForwardable <NSObject>
@property(readonly, retain, nonatomic) UIWindow *window;
@property(retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
@property(nonatomic, setter=_setForwardablePhase:) int _forwardablePhase;
- (NSMutableArray *)_mutableForwardingRecord;
- (void)_abandonForwardingRecord;
- (BOOL)_isAbandoningForwardingRecord;
- (NSArray *)gestureRecognizers;
- (SEL)_responderSelectorForPhase:(int)arg1;
- (NSArray *)_forwardingRecord;
- (BOOL)_wantsForwardingFromResponder:(UIResponder *)arg1 toNextResponder:(UIResponder *)arg2 withEvent:(UIEvent *)arg3;
@end

