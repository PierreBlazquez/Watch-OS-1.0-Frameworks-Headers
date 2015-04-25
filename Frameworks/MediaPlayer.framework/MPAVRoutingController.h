//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVRoute, NSArray, NSMutableArray, NSString;

@interface MPAVRoutingController : NSObject
{
    NSArray *_cachedRoutes;
    MPAVRoute *_cachedPickedRoute;
    NSMutableArray *_asyncFetchingCompletionHandlers;
    BOOL _asyncFetchingRoutes;
    int _externalScreenType;
    BOOL _hasExternalScreenType;
    BOOL _scheduledSendDelegateRoutesChanged;
    BOOL _pickedRouteHasVolumeControl;
    BOOL _hasVolumeControlInfoForPickedRoute;
    int _deviceAvailabilityNotifyToken;
    BOOL _deviceAvailabilityOverrideState;
    id <MPAVRoutingControllerDelegate> _delegate;
    NSString *_name;
    int _discoveryMode;
    NSString *_category;
}

@property(nonatomic) int discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <MPAVRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)logCurrentRoutes;
- (BOOL)wirelessDisplayRoutesAvailable;
- (BOOL)receiverRouteIsPicked;
- (BOOL)handsetRouteIsPicked;
- (BOOL)speakerRouteIsPicked;
- (BOOL)pickSpeakerRoute;
- (BOOL)pickHandsetRoute;
- (id)videoRouteForRoute:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (BOOL)pickRoute:(id)arg1;
- (BOOL)pickRoute:(id)arg1 withPassword:(id)arg2;
- (id)_parseAVRouteDescriptions:(id)arg1;
- (void)_updateCachedRoutes;
- (void)_setExternalScreenType:(int)arg1;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)routeOtherThanHandsetAvailable;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (BOOL)routeOtherThanHandsetAndSpeakerAvailable;
- (BOOL)wirelessDisplayRouteIsPicked;
- (BOOL)airtunesRouteIsPicked;
@property(readonly, copy, nonatomic) NSArray *availableRoutes;
@property(readonly, nonatomic) int externalScreenType;
- (void)clearCachedRoutes;
@property(readonly, nonatomic) MPAVRoute *pickedRoute;
@property(readonly, nonatomic) BOOL volumeControlIsAvailable;
- (BOOL)pickBestDeviceRoute;

@end

