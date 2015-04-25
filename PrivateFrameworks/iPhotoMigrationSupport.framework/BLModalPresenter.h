//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "UIKeyInput.h"

@class BLModalPresenterRootViewController, NSMutableArray, NSString;

@interface BLModalPresenter : UIWindow <UIKeyInput>
{
    BLModalPresenterRootViewController *_rootViewController;
    NSMutableArray *_controllers;
    struct CGRect _keyboard;
    int _lockCount;
    BOOL _keyboardVisible;
}

+ (id)presenter;
- (void)hideController:(id)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)unlockKeyboard;
- (void)lockKeyboard;
- (void)configureForOffscreen:(id)arg1 orientation:(int)arg2;
- (void)showController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (struct CGSize)formSheetSizeForController:(id)arg1 withOrientation:(int)arg2;
- (void)layoutForOrientation:(int)arg1;
- (void)configureForOncreen:(id)arg1 orientation:(int)arg2;
- (void)orientationDidChange:(id)arg1;
- (void)orientationWillChange:(id)arg1;
- (id)hidden;
- (void)keyboardWillShow:(id)arg1;
- (void)showController:(id)arg1;
- (void).cxx_destruct;
- (BOOL)keyboardVisible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)keyboardDidShow:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (BOOL)canBecomeFirstResponder;
- (id)init;
- (void)dealloc;
- (void)keyboardWillHide:(id)arg1;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;

@end

