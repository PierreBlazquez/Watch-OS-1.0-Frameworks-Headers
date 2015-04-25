//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CoreRCManager, NSMutableSet, NSSet, NSUUID;

@interface CoreRCBus : NSObject <NSCopying, NSSecureCoding>
{
    id <CoreRCBusDelegate> _delegate;
    CoreRCManager *_manager;
    NSUUID *_uniqueID;
    NSMutableSet *_devicesInternal;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)setManager:(id)arg1;
@property(readonly, nonatomic) NSSet *devices; // @dynamic devices;
- (void)notifyDelegateAllDevicesRemoved:(id)arg1;
- (void)notifyDelegateDeviceRemoved:(id)arg1;
- (void)notifyDelegateDeviceAdded:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *devicesInternal; // @synthesize devicesInternal=_devicesInternal;
- (void)mergePropertiesFromBus:(id)arg1;
- (void)removeAllDevices;
- (void)replaceDevice:(id)arg1 withDevice:(id)arg2;
- (void)notifyDelegateDeviceUpdated:(id)arg1;
- (id)deviceOnBusEquivalentTo:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (id)initWithBus:(id)arg1;
- (id)propertyForKey:(id)arg1 error:(id *)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)mergeDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)delegate;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)manager;

@end

