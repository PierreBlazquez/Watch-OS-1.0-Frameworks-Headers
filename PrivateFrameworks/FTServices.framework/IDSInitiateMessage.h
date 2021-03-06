//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FTServices/IDSFaceTimeMessage.h>

#import "NSCopying.h"

@class NSArray, NSData, NSDictionary, NSNumber;

@interface IDSInitiateMessage : IDSFaceTimeMessage <NSCopying>
{
    NSData *_selfBlob;
    NSData *_selfPushToken;
    NSNumber *_selfNATType;
    NSData *_selfNatIP;
    NSArray *_peers;
    NSArray *_canonicalizedPeers;
    NSDictionary *_regionInformation;
}

- (id)requiredKeys;
- (id)messageBody;
- (void)handleResponseDictionary:(id)arg1;
- (id)bagKey;
@property(copy) NSArray *peers; // @synthesize peers=_peers;
@property(copy) NSDictionary *regionInformation; // @synthesize regionInformation=_regionInformation;
@property(copy) NSArray *canonicalizedPeers; // @synthesize canonicalizedPeers=_canonicalizedPeers;
@property(copy) NSData *selfNatIP; // @synthesize selfNatIP=_selfNatIP;
@property(copy) NSData *selfBlob; // @synthesize selfBlob=_selfBlob;
@property(copy) NSNumber *selfNATType; // @synthesize selfNATType=_selfNATType;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

@end

