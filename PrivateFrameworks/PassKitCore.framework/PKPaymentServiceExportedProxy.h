//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentServiceExportedInterface.h"

@interface PKPaymentServiceExportedProxy : NSObject <PKPaymentServiceExportedInterface>
{
    id <PKPaymentServiceExportedInterface> _delegate;
}

- (id)initWithDelegate:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifierDidFailTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidCompleteTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidBeginTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidDeauthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidAuthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidActivate:(id)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidLeaveField;
- (void)paymentDeviceDidEnterField;
@property(nonatomic) id <PKPaymentServiceExportedInterface> delegate; // @synthesize delegate=_delegate;

@end

