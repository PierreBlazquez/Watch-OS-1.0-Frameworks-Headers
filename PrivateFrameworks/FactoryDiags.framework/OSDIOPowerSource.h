//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface OSDIOPowerSource : NSObject
{
}

+ (void)initialize;
+ (id)sharedInstance;
@property(readonly, getter=_adapterCurrent) int adapterCurrent;
@property(readonly, getter=_adapterFamilyCode) int adapterFamilyCode;
@property(readonly, getter=_adapterSerialNumber) int adapterSerialNumber;
@property(readonly, getter=_adapterRevision) int adapterRevision;
@property(readonly, getter=_adapterWatts) int adapterWatts;
@property(readonly, getter=_adapterID) int adapterID;
@property(readonly, getter=_adapterDetails) __weak NSDictionary *adapterDetails;
- (id)init;
- (void)dealloc;

@end

