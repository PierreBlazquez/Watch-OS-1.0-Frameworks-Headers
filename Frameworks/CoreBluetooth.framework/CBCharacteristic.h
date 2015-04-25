//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreBluetooth/CBAttribute.h>

@class CBPeripheral, CBService, NSArray, NSData, NSNumber;

@interface CBCharacteristic : CBAttribute
{
    CBService *_service;
    unsigned int _properties;
    NSData *_value;
    NSArray *_descriptors;
    BOOL _isBroadcasted;
    BOOL _isNotifying;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
    NSNumber *_valueHandle;
}

@property(nonatomic) __weak CBService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSNumber *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(readonly, nonatomic) unsigned int properties; // @synthesize properties=_properties;
@property(retain) NSData *value; // @synthesize value=_value;
- (void)invalidate;
- (id)description;
- (void)dealloc;
@property BOOL isNotifying; // @synthesize isNotifying=_isNotifying;
@property(readonly) BOOL isBroadcasted; // @synthesize isBroadcasted=_isBroadcasted;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
@property(readonly, nonatomic) NSNumber *valueHandle; // @synthesize valueHandle=_valueHandle;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;

@end

