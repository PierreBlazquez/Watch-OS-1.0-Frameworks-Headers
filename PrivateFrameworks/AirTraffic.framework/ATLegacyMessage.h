//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSString;

@interface ATLegacyMessage : NSObject
{
    unsigned int _messageType;
    unsigned int _messageId;
    NSString *_name;
    NSString *_dataClass;
    NSError *_result;
    NSDictionary *_params;
    NSData *_payload;
    double _timestamp;
    NSData *_sig;
    unsigned int _session;
}

+ (id)messageFromData:(id)arg1;
+ (unsigned int)currentSessionNumber;
+ (void)setSessionNumber:(unsigned int)arg1;
+ (id)messageWithName:(id)arg1 parameters:(id)arg2 session:(unsigned int)arg3;
+ (id)messageWithName:(id)arg1 parameters:(id)arg2;
+ (id)messageFromHeader:(id)arg1 withParams:(id)arg2 andPayload:(id)arg3;
+ (unsigned int)nextSessionNumber;
+ (id)_messageTypeString:(unsigned int)arg1;
+ (id)messageFromDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_params;
@property(retain, nonatomic) NSError *result; // @synthesize result=_result;
@property(nonatomic) unsigned int sessionNumber; // @synthesize sessionNumber=_session;
@property(retain, nonatomic) NSString *dataClass; // @synthesize dataClass=_dataClass;
@property(retain, nonatomic) NSData *sig; // @synthesize sig=_sig;
- (id)responseWithResultError:(id)arg1 parameters:(id)arg2;
- (id)partialResponseWithParameters:(id)arg1;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)data;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (id)parameterForKey:(id)arg1;
@property(nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) unsigned int messageId; // @synthesize messageId=_messageId;

@end

