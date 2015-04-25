//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIPrinter;

@interface UIPrinterPickerController : NSObject
{
    unsigned int _backgroundTaskIdentifier;
    CDUnknownBlockType _completionHandler;
    id _state;
    UIPrinter *_selectedPrinter;
    id <UIPrinterPickerControllerDelegate> _delegate;
}

+ (id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1;
- (BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIPrinter *selectedPrinter; // @synthesize selectedPrinter=_selectedPrinter;
- (BOOL)presentAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_setupPickerPanel:(CDUnknownBlockType)arg1;
- (BOOL)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_shouldShowPrinter:(id)arg1;
- (BOOL)_delegateFiltersPrinters;
- (void)dismissAnimated:(BOOL)arg1;
- (void)_printerPickerDidDismiss;
- (void)_printerPickerWillDismiss;
- (void)_printerPickerDidPresent;
- (id)_init;
@property(nonatomic) id <UIPrinterPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (oneway void)release;

@end

