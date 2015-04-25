//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKNotificationInfo, CKRecordZoneID, NSPredicate, NSString;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_subscriptionID;
    int _subscriptionType;
    NSString *_recordType;
    NSPredicate *_predicate;
    unsigned int _subscriptionOptions;
    CKNotificationInfo *_notificationInfo;
    CKRecordZoneID *_zoneID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) CKNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
@property(nonatomic) unsigned int subscriptionOptions; // @synthesize subscriptionOptions=_subscriptionOptions;
- (id)initWithZoneID:(id)arg1 options:(unsigned int)arg2;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned int)arg3;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned int)arg3;
- (void)_validateSubscriptionOptions:(unsigned int)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned int)arg4;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)_initBare;
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (id)CKPropertiesDescription;

@end

