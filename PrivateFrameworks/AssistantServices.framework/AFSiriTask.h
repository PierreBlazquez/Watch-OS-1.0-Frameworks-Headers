//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSSecureCoding.h"

@class AFSiriRequest, NSString, NSXPCListenerEndpoint;

@interface AFSiriTask : NSObject <BSXPCCoding, NSSecureCoding>
{
    AFSiriRequest *_request;
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
    NSXPCListenerEndpoint *_usageResultListenerEndpoint;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void)failWithError:(id)arg1;
- (void)completeWithResponse:(id)arg1;
- (void)reportUsageResult:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)_usageResultHandlerConnection;
- (id)_responseHandlerConnection;
- (id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2 usageResultListenerEndpoint:(id)arg3;
- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (id)request;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

