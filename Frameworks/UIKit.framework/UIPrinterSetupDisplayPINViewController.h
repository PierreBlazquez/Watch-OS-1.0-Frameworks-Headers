//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKPrinter;

@interface UIPrinterSetupDisplayPINViewController : UIViewController
{
    PKPrinter *_printer;
}

- (void)showDisplayMessage:(int)arg1;
- (void)enterPIN;
- (id)initWithPrinter:(id)arg1;
@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;

@end
