//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPickerViewController.h>

@class TKTonePickerViewController;

@interface ABTonePickerViewController : ABPickerViewController
{
    TKTonePickerViewController *_tonePickerViewController;
}

- (void)cancelButtonClicked:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_3421d26a *)arg1;
- (void)loadView;
- (id)init;
- (void)setStyleProvider:(id)arg1;
- (void)ringtoneSaveButtonClicked:(id)arg1;
@property(readonly, retain, nonatomic) TKTonePickerViewController *tonePickerViewController;
- (id)initWithAlertType:(int)arg1;
- (float)ab_heightToFitForViewInPopoverView;

@end

