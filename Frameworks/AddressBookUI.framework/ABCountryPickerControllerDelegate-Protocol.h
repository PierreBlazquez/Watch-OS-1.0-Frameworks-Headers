//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationControllerDelegate.h"

@class ABCountryPickerController, NSString;

@protocol ABCountryPickerControllerDelegate <UINavigationControllerDelegate>
- (void)countryPickerDidCancel:(ABCountryPickerController *)arg1;
- (void)countryPicker:(ABCountryPickerController *)arg1 didPickCountryCode:(NSString *)arg2;
@end

