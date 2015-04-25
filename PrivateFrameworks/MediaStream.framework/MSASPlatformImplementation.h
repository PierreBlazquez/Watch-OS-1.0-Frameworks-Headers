//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSASPlatform.h"

@class NSString;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>
{
}

- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (id)albumSharingDaemon;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (id)baseSharingURLForPersonID:(id)arg1;
- (id)pushTokenForPersonID:(id)arg1;
- (int)MMCSConcurrentConnectionsCount;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
- (id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
- (BOOL)MSASIsAllowedToUploadAssets;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (BOOL)personIDEnabledForAlbumSharing:(id)arg1;
- (id)personIDsEnabledForAlbumSharing;
- (Class)pluginClass;
- (BOOL)shouldEnableNewFeatures;
- (id)pathAlbumSharingDir;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (BOOL)shouldLogAtLevel:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
