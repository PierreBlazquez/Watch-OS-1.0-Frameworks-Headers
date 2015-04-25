//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, NSData, NSDictionary, NSError, NSMutableDictionary, NSObject<NSCoding>, NSString;

@interface ACRemoteDeviceMessage : NSObject
{
    NSMutableDictionary *_payload;
    NSData *_data;
    BOOL _needsReply;
    BOOL _isReply;
    NSString *_identifier;
}

+ (id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4;
+ (id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) ACAccount *account;
@property(nonatomic) BOOL isReply; // @synthesize isReply=_isReply;
- (id)_payloadObjectForKey:(id)arg1;
- (void)_setPayloadObject:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSString *sentMessageIdentifier;
- (void)_invalidateCachedData;
@property(readonly, nonatomic) NSObject<NSCoding> *result;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *options;
- (id)initWithData:(id)arg1;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)init;
@property(readonly, nonatomic) NSString *command;
@property(nonatomic) BOOL needsReply; // @synthesize needsReply=_needsReply;
@property(readonly, nonatomic) BOOL success;

@end

