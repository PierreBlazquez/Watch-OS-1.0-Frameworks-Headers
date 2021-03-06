//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSDSecKeySecurityDevice : NSObject
{
}

+ (struct __SecKey *)copySecKeyFromRSACertData:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)copySecKeyFromRSAKeyData:(id)arg1 isPrivate:(_Bool)arg2 errror:(id *)arg3;
+ (_Bool)verifyRawSignedData:(id)arg1 signatureData:(id)arg2 publicKey:(struct __SecKey *)arg3 signatureType:(int)arg4 error:(id *)arg5;
+ (id)rawSignData:(id)arg1 privateKey:(struct __SecKey *)arg2 signatureType:(int)arg3 error:(id *)arg4;
+ (id)decryptData:(id)arg1 privateKey:(struct __SecKey *)arg2 encryptionType:(int)arg3 error:(id *)arg4;
+ (id)encryptData:(id)arg1 publicKey:(struct __SecKey *)arg2 encryptionType:(int)arg3 error:(id *)arg4;
+ (struct __SecKey *)copySecKeyFromData:(id)arg1 keySourceType:(int)arg2 error:(id *)arg3;

@end

