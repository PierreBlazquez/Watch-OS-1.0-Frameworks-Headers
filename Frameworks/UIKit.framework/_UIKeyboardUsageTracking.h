//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _UIKeyboardUsageTracking : NSObject
{
}

+ (void)inputSwitcherSetPredictionPreference:(BOOL)arg1;
+ (void)keyboardExtensionCrashed;
+ (void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2;
+ (void)predictionViewState:(BOOL)arg1 forInputMode:(id)arg2;
+ (void)keyboardExtensionsOnDevice;
+ (void)keyboardGestureSelectedPredictiveInputCandidate;
+ (void)keyboardGestureSetPredictionPreference:(BOOL)arg1;
+ (void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(BOOL)arg2;
+ (void)keyboardExtensionPrimaryLanguageChanged;

@end

