//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NACIDSClient, NSArray, NSString;

@protocol NACIDSClientDelegate <NSObject>
- (void)client:(NACIDSClient *)arg1 systemMutedStateDidChange:(BOOL)arg2;
- (void)client:(NACIDSClient *)arg1 routeObservationCancelledForCategory:(NSString *)arg2;
- (void)clientVolumeObservationCancelled:(NACIDSClient *)arg1;
- (void)client:(NACIDSClient *)arg1 audioRoutes:(NSArray *)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 volumeWarningEnabled:(BOOL)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 EULimit:(float)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 hapticIntensityDidChange:(float)arg2;
- (void)client:(NACIDSClient *)arg1 mutedState:(BOOL)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 volumeControlAvailable:(BOOL)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 volumeValue:(float)arg2 didChangeForCategory:(NSString *)arg3;
@end
