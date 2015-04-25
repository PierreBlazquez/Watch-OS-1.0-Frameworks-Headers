//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITableViewController;

@interface UITableViewControllerKeyboardSupport : NSObject
{
    UITableViewController *_tableViewController;
    float _adjustmentForKeyboard;
    unsigned int _viewIsDisappearing:1;
    unsigned int _registeredForNotifications:1;
}

@property(nonatomic) float adjustmentForKeyboard; // @synthesize adjustmentForKeyboard=_adjustmentForKeyboard;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (id)initWithTableViewController:(id)arg1;
@property(nonatomic) BOOL registeredForNotifications;
@property(nonatomic) BOOL viewIsDisappearing;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;

@end

