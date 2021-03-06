//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MCDeviceCapabilities : NSObject
{
    BOOL _supportsBlockLevelEncryption;
    BOOL _supportsFileLevelEncryption;
}

+ (id)currentDevice;
@property(readonly, nonatomic) BOOL supportsFileLevelEncryption; // @synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption;
@property(readonly, nonatomic) BOOL supportsBlockLevelEncryption; // @synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption;
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id *)arg3;
- (BOOL)_mediaDiskIsEncrypted;
- (id)init;

@end

