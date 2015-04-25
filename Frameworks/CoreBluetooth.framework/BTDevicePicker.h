//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BluetoothManager, NSMutableArray, NSPredicate, NSString, PSSpecifierStub, UIAlertView, UITableView;

@interface BTDevicePicker : NSObject <UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UIAlertView *_alertView;
    UITableView *_tableView;
    NSMutableArray *_deviceList;
    id <BTDevicePickerDelegate> _delegate;
    NSString *_title;
    unsigned int _service;
    NSPredicate *_predicate;
    BOOL _showingAlert;
    BOOL _checkingPaired;
    PSSpecifierStub *_connectingSpec;
    BluetoothManager *_btManager;
    Class _btSSPRequestClass;
    Class _btAlertClass;
    id _btSSPAlert;
    id _btAlert;
}

- (void)dismissAnimated:(BOOL)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationWillResignActive:(id)arg1;
@property(nonatomic) id <BTDevicePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)show;
- (void)alertSheetDismissed:(id)arg1;
- (id)initWithTitle:(id)arg1 service:(unsigned int)arg2 discoveryNameFilter:(id)arg3;
- (void)_btSSPPasskeyDisplayHandler:(id)arg1;
- (void)_btSSPNumericComparisonHandler:(id)arg1;
- (void)_btSSPConfirmationHandler:(id)arg1;
- (void)cleanupPairing;
- (void)startScanning;
- (void)showInternal;
- (void)checkAttachTimeout;
- (void)deviceConnectionCompleteHandler:(id)arg1;
- (void)devicePairedHandler:(id)arg1;
- (void)authenticationRequestHandler:(id)arg1;
- (void)deviceNameChangedHandler:(id)arg1;
- (void)deviceLostHandler:(id)arg1;
- (void)deviceFoundHandler:(id)arg1;
- (void)deviceDiscoveryStoppedHandler:(id)arg1;
- (void)powerChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

