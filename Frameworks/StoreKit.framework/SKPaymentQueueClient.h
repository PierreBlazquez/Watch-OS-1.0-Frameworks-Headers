//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface SKPaymentQueueClient : NSObject <NSCopying>
{
    BOOL _allowsBootstrapCellularData;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    BOOL _hidesConfirmationDialogs;
    BOOL _ignoresInAppPurchaseRestriction;
    NSString *_receiptDirectoryPath;
    BOOL _requiresAuthenticationForPayment;
    NSNumber *_storeExternalVersion;
    NSNumber *_storeItemIdentifier;
    NSString *_vendorIdentifier;
}

@property(nonatomic) BOOL allowsBootstrapCellularData; // @synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy, nonatomic) NSNumber *storeExternalVersion; // @synthesize storeExternalVersion=_storeExternalVersion;
@property(nonatomic) BOOL requiresAuthenticationForPayment; // @synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment;
@property(copy, nonatomic) NSString *receiptDirectoryPath; // @synthesize receiptDirectoryPath=_receiptDirectoryPath;
@property(nonatomic) BOOL ignoresInAppPurchaseRestriction; // @synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction;
@property(nonatomic) BOOL hidesConfirmationDialogs; // @synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs;
@property(copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;

@end

