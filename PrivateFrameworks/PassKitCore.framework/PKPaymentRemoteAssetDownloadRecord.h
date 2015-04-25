//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>

#import "NSSecureCoding.h"

@class NSDictionary, NSURL;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding>
{
    NSURL *_passURL;
    NSDictionary *_remoteAssetsByTaskIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *remoteAssetsByTaskIdentifier; // @synthesize remoteAssetsByTaskIdentifier=_remoteAssetsByTaskIdentifier;
- (void)removeRemoteAssetForTaskIdentifier:(id)arg1;
- (void)setRemoteAsset:(id)arg1 forTaskIdentifier:(id)arg2;
@property(retain, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

