//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSSendParameters : NSObject <NSCopying>
{
    NSMutableDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *protobuf;
@property(readonly, retain, nonatomic) NSDate *expirationDate;
@property(nonatomic) double timeout;
@property(nonatomic) BOOL enforceRemoteTimeouts;
@property(nonatomic) BOOL isProxiedOutgoingMessage;
@property(nonatomic) BOOL fireAndForget;
@property(nonatomic) BOOL bypassSizeCheck;
@property(nonatomic) BOOL daemonDeathResend;
@property(nonatomic) BOOL nonWaking;
@property(nonatomic) BOOL activityContinuation;
@property(nonatomic) BOOL bypassStorage;
@property(nonatomic) BOOL bypassDuet;
@property(nonatomic) BOOL requireBluetooth;
@property(nonatomic) BOOL localDelivery;
@property(nonatomic) BOOL wantsResponse;
@property(nonatomic) BOOL compressPayload;
@property(nonatomic) BOOL encryptPayload;
@property(nonatomic) BOOL useDictAsTopLevel;
@property(retain, nonatomic) NSArray *duetIdentifiersOverride;
@property(retain, nonatomic) NSString *queueOneIdentifier;
@property(retain, nonatomic) NSArray *interestingRegistrationProperties;
@property(retain, nonatomic) NSArray *requireAllRegistrationProperties;
@property(retain, nonatomic) NSArray *bulkedPayload;
@property(retain, nonatomic) NSData *dataToEncrypt;
@property(retain, nonatomic) NSString *accountUUID;
@property(retain, nonatomic) NSString *fromID;
@property(retain, nonatomic) NSDictionary *resourceMetadata;
@property(retain, nonatomic) NSString *resourcePath;
@property(retain, nonatomic) NSString *peerResponseIdentifier;
@property(retain, nonatomic) NSData *messageUUID;
@property(nonatomic) BOOL compressed;
@property(retain, nonatomic) NSDictionary *deliveryStatusContext;
@property(nonatomic) BOOL wantsDeliveryStatus;
@property(nonatomic) BOOL wantsAppAck;
@property(retain, nonatomic) NSString *alternateCallbackID;
@property(nonatomic) BOOL expectsPeerResponse;
@property(retain, nonatomic) NSArray *destinations;
@property(retain, nonatomic) NSNumber *command;
@property(nonatomic) int priority;
@property(readonly, retain, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) NSDictionary *message;
@property(retain, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;

@end
