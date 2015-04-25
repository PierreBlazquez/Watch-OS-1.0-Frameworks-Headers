//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload
{
    NSData *_pemData;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, retain, nonatomic) NSData *pemData; // @synthesize pemData=_pemData;
- (BOOL)isIdentity;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (struct __SecCertificate *)copyCertificate;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (void).cxx_destruct;
- (id)description;

@end

