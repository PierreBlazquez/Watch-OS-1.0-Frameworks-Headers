//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "SSXPCCoding.h"

@class NSSet, NSString;

@interface SSDownloadPolicyRule : NSObject <NSCoding, SSXPCCoding, NSCopying>
{
    NSSet *_applicationStates;
    float _batteryLevel;
    int _cellularDataStates;
    long long _downloadSizeLimit;
    NSSet *_networkTypes;
    int _powerStates;
    int _registrationStates;
    int _timeLimitStates;
}

@property(nonatomic) int timeLimitStates; // @synthesize timeLimitStates=_timeLimitStates;
@property(nonatomic) int registrationStates; // @synthesize registrationStates=_registrationStates;
@property(nonatomic) int powerStates; // @synthesize powerStates=_powerStates;
@property(copy, nonatomic) NSSet *networkTypes; // @synthesize networkTypes=_networkTypes;
@property(nonatomic) long long downloadSizeLimit; // @synthesize downloadSizeLimit=_downloadSizeLimit;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, nonatomic, getter=isWiFiAllowed) BOOL wiFiAllowed;
@property(readonly, nonatomic, getter=isCellularAllowed) BOOL cellularAllowed;
- (void)addNetworkType:(int)arg1;
@property(nonatomic) int cellularDataStates; // @synthesize cellularDataStates=_cellularDataStates;
@property(copy, nonatomic) NSSet *applicationStates; // @synthesize applicationStates=_applicationStates;
- (void)addApplicationState:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)unionPolicyRule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

