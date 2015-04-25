//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSDictionary, NSHTTPURLResponse;

@interface SLFacebookResponse : NSObject <NSCoding>
{
    NSData *_responseData;
    NSHTTPURLResponse *_urlResponse;
    id _untypedResponseParameters;
    int _httpErrorCode;
}

- (BOOL)hasError;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isBatchResponse;
- (id)checkpointURL;
- (BOOL)hasMissingTokenOrAppID;
@property(readonly) int APIresponseErrorCode;
- (int)httpStatusCode;
@property(readonly) NSHTTPURLResponse *urlResponse;
- (BOOL)hasHTTPStatusOK;
- (id)initWithResponseData:(id)arg1 urlResponse:(id)arg2;
- (id)untypedResponseParameters;
@property(readonly) NSDictionary *responseParameters;
@property(readonly) int httpErrorCode; // @synthesize httpErrorCode=_httpErrorCode;
- (BOOL)hasBadTokenError;

@end

