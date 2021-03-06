//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UISwipeGestureRecognizer;

@interface _UISimulatedApplicationResizeGestureRecognizerDelegate : NSObject <UIGestureRecognizerDelegate>
{
    UISwipeGestureRecognizer *_shrinkGesture;
    UISwipeGestureRecognizer *_growGesture;
}

@property(retain, nonatomic) UISwipeGestureRecognizer *growGesture; // @synthesize growGesture=_growGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *shrinkGesture; // @synthesize shrinkGesture=_shrinkGesture;
- (void)handleGrowGesture:(id)arg1;
- (void)handleShrinkGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

