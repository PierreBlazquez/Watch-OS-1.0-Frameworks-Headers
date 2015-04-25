//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSString;

@interface IDSBaseMessage : NSObject <NSCopying>
{
    BOOL _forceCellular;
    BOOL _usingOutgoingPush;
    BOOL _wantsResponse;
    BOOL _wantsBinaryPush;
    BOOL _wantsIntegerUniqueIDs;
    BOOL _highPriority;
    BOOL _hasReceivedPushAck;
    id _context;
    NSDictionary *_clientInfo;
    NSData *_serviceData;
    unsigned int _uniqueID;
    NSDictionary *_userInfo;
    NSDate *_creationDate;
    NSString *_topic;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _deliveryAcknowledgementBlock;
    NSDictionary *_cachedBody;
    NSString *_dsAuthID;
    NSString *_dataUsageBundleIdentifier;
    int _timeoutRetries;
    NSDictionary *_responseAlert;
    double _timeout;
    double _timeSent;
}

@property(readonly, retain) NSArray *requiredKeys;
@property unsigned int uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain) NSString *topic; // @synthesize topic=_topic;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSData *pushToken;
@property(readonly, retain) NSDictionary *messageBody;
@property double timeSent; // @synthesize timeSent=_timeSent;
@property(readonly) BOOL ignoresNetworkConnectivity;
@property BOOL hasReceivedPushAck; // @synthesize hasReceivedPushAck=_hasReceivedPushAck;
@property(retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // @synthesize _cachedBody;
@property(setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush; // @synthesize _usingOutgoingPush;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
@property(readonly, retain) NSDictionary *additionalInternalHeaders;
@property(readonly, retain) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property(readonly, retain) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property(readonly, retain) NSDictionary *additionalQueryStringParameters;
@property(readonly, retain) NSDictionary *additionalMessageHeaders;
@property(readonly, retain) NSString *bagKey;
@property(readonly) int responseCommand;
- (BOOL)hasRequiredKeys:(id *)arg1;
@property(readonly, copy, nonatomic) NSData *IDCertificate;
@property(readonly, nonatomic) struct __SecKey *identityPublicKey;
@property(readonly, nonatomic) struct __SecKey *identityPrivateKey;
@property(copy, nonatomic) NSMutableArray *userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray;
@property(copy, nonatomic) NSData *pushCertificate;
@property(nonatomic) struct __SecKey *pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey;
@property(readonly) BOOL isValidMessage;
@property(readonly) BOOL payloadCanBeLogged;
@property(readonly, retain) NSString *dataUsageBundleIdentifier; // @synthesize dataUsageBundleIdentifier=_dataUsageBundleIdentifier;
@property(readonly) double customRetryInterval;
@property(readonly) BOOL wantsCustomRetryInterval;
@property(readonly) BOOL wantsBodySignature;
@property(readonly) BOOL wantsSignature;
@property(readonly) BOOL wantsManagedRetries;
@property(readonly) BOOL wantsExtraTimeoutRetry;
@property(readonly) int maxTimeoutRetries;
@property(readonly) BOOL wantsCFNetworkTimeout;
@property(readonly) BOOL wantsBagKey;
@property(readonly) BOOL wantsHTTPGet;
@property(readonly) BOOL wantsJSONBody;
@property(readonly) BOOL wantsCompressedBody;
@property(readonly) BOOL wantsIDSServer;
@property(readonly, retain) NSString *uniqueIDString;
@property(readonly, retain) NSDictionary *messageBodyUsingCache;
- (void)_cacheBody;
@property(copy) NSDictionary *responseAlertInfo; // @synthesize responseAlertInfo=_responseAlert;
@property(copy) CDUnknownBlockType deliveryAcknowledgementBlock; // @synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock;
@property BOOL wantsIntegerUniqueIDs; // @synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs;
@property BOOL wantsBinaryPush; // @synthesize wantsBinaryPush=_wantsBinaryPush;
@property(copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy) NSData *serviceData; // @synthesize serviceData=_serviceData;
@property BOOL highPriority; // @synthesize highPriority=_highPriority;
@property int timeoutRetries; // @synthesize timeoutRetries=_timeoutRetries;
@property BOOL forceCellular; // @synthesize forceCellular=_forceCellular;
@property(copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID; // @synthesize dsAuthID=_dsAuthID;
@property BOOL wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property(readonly) BOOL wantsUserAgentInHeaders;
@property(readonly, retain) NSString *userAgentHeaderString;
@property(readonly) BOOL wantsHTTPHeaders;
@property(readonly) BOOL wantsAPSRetries;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) id context; // @synthesize context=_context;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;
@property(readonly) int command;

@end

