//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying>
{
    NSURLProtectionSpaceInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *proxyType;
- (struct __SecTrust *)serverTrust;
- (id)distinguishedNames;
- (id)initWithHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithProxyHost:(id)arg1 port:(int)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (struct _CFURLProtectionSpace *)_CFURLProtectionSpace;
@property(readonly, copy) NSString *realm;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace *)arg1;
@property(readonly) int port;
@property(readonly, copy) NSString *protocol;
@property(readonly, copy) NSString *authenticationMethod;
@property(readonly, copy) NSString *host;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
@property(readonly) BOOL isProxy;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly) BOOL receivesCredentialSecurely;
- (id)_internalInit;
- (struct _CFURLProtectionSpace *)_cfurlprtotectionspace;

@end

