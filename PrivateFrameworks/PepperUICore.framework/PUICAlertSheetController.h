//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/PUICActionSheetController.h>

#import "UITableViewDelegate.h"

@class NSString, UILabel;

@interface PUICAlertSheetController : PUICActionSheetController <UITableViewDelegate>
{
    NSString *_message;
    int _actionSheetAlertStyle;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

+ (id)alertSheetControllerWithActions:(id)arg1 title:(id)arg2 message:(id)arg3 style:(int)arg4;
+ (id)alertSheetControllerWithActions:(id)arg1 message:(id)arg2 style:(int)arg3;
+ (void)_setupAlertSheetControllerSpec;
@property(nonatomic) int actionSheetAlertStyle; // @synthesize actionSheetAlertStyle=_actionSheetAlertStyle;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
@property(copy, nonatomic) NSString *title;
- (id)init;
- (void)_layoutLabels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

