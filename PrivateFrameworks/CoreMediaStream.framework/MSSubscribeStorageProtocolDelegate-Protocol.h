//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAsset, NSError;

@protocol MSSubscribeStorageProtocolDelegate <NSObject>
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id <MSSubscribeStorageProtocol>)arg1;
- (void)subscribeStorageProtocol:(id <MSSubscribeStorageProtocol>)arg1 didFinishRetrievingAsset:(MSAsset *)arg2 error:(NSError *)arg3;
@end

