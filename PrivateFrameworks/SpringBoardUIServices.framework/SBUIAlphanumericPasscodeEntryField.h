//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UITextInputTraits, UIView;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField
{
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_springView;
    UIView *_springViewParent;
}

- (void)notePasscodeFieldTextDidChange;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2;
- (void)_autofillForMesaWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBackgroundAlpha:(float)arg1;
@property(readonly, nonatomic) UITextInputTraits *textInputTraits;
- (void)layoutSubviews;
- (void)dealloc;

@end

