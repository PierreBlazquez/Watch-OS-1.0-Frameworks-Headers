//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString, RMSNowPlayingInfo;

@protocol RMSDAAPControlSessionDelegate <NSObject>
- (void)controlSessionDidEnd:(id <RMSDAAPControlSession>)arg1;
- (void)controlSession:(id <RMSDAAPControlSession>)arg1 didUpdateVolume:(float)arg2;
- (void)controlSession:(id <RMSDAAPControlSession>)arg1 didUpdateAudioRoutes:(NSArray *)arg2;
- (void)controlSession:(id <RMSDAAPControlSession>)arg1 artworkDataDidBecomeAvailable:(NSData *)arg2 identifier:(NSString *)arg3;
- (void)controlSession:(id <RMSDAAPControlSession>)arg1 didUpdateNowPlayingInfo:(RMSNowPlayingInfo *)arg2;
@end

