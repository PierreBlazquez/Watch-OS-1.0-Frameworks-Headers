//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSVPlayActivityEvent.h>

@class NSData, NSDate, NSString, NSTimeZone;

@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent
{
}

@property(copy, nonatomic) NSData *trackInfo; // @dynamic trackInfo;
@property(copy, nonatomic) NSData *timedMetadata; // @dynamic timedMetadata;
@property(nonatomic, getter=isSBEnabled) BOOL SBEnabled; // @dynamic SBEnabled;
@property(copy, nonatomic) NSString *personalizedContainerID; // @dynamic personalizedContainerID;
@property(nonatomic, getter=isOffline) BOOL offline; // @dynamic offline;
@property(nonatomic) double itemStartTime; // @dynamic itemStartTime;
@property(nonatomic) double itemEndTime; // @dynamic itemEndTime;
@property(nonatomic) double itemDuration; // @dynamic itemDuration;
@property(copy, nonatomic) NSString *featureName; // @dynamic featureName;
@property(nonatomic) unsigned int endReasonType; // @dynamic endReasonType;
@property(nonatomic) unsigned int containerType; // @dynamic containerType;
@property(copy, nonatomic) NSString *containerID; // @dynamic containerID;
- (Class)_mutableCopyClass;
@property(nonatomic) unsigned long long storeAccountID; // @dynamic storeAccountID;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(nonatomic) unsigned int itemType; // @dynamic itemType;
@property(copy, nonatomic) NSString *storeID; // @dynamic storeID;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(copy, nonatomic) NSDate *eventDate; // @dynamic eventDate;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long persistentID; // @dynamic persistentID;
@property(copy, nonatomic) NSTimeZone *eventTimeZone; // @dynamic eventTimeZone;
@property(copy, nonatomic) NSString *externalID; // @dynamic externalID;

@end

