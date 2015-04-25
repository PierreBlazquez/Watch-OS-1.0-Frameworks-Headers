//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ATAsset, NSArray, NSError;

@protocol ATAssetLinkDelegate <NSObject>
- (void)assetLinkDidChange:(id <ATAssetLink>)arg1;
- (void)assetLink:(id <ATAssetLink>)arg1 didUpdateAsset:(ATAsset *)arg2 progress:(double)arg3;
- (void)assetLink:(id <ATAssetLink>)arg1 didFinishAsset:(ATAsset *)arg2 error:(NSError *)arg3 retryable:(BOOL)arg4;
- (void)assetLink:(id <ATAssetLink>)arg1 didCloseWithOutstandingAssets:(NSArray *)arg2;
- (void)assetLink:(id <ATAssetLink>)arg1 didOpenWithPendingAssets:(NSArray *)arg2;
@end
