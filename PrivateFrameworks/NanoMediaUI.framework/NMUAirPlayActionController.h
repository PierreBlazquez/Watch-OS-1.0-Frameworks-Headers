//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICActionSheetController.h"

#import "NACRoutingControllerDelegate.h"
#import "PUICActionSheetControllerDelegate.h"

@class NACAudioRoute, NMCVirtualAudioRoute, NSObject<OS_dispatch_source>, NSString;

@interface NMUAirPlayActionController : PUICActionSheetController <NACRoutingControllerDelegate, PUICActionSheetControllerDelegate>
{
    id <NACRoutingController> _companionRoutingController;
    BOOL _shouldObserveRoutes;
    BOOL _trackPlaybackSourceChanges;
    int _playbackSource;
    NMCVirtualAudioRoute *_currentlySelectingLocalRoute;
    NACAudioRoute *_currentlySelectingCompanionRoute;
    id <PUICActionSheetControllerDelegate> _externalDelegate;
    NSObject<OS_dispatch_source> *_pickRouteTimer;
    BOOL _didAutomaticallyAttemptLocalRoute;
    BOOL _automaticallySelectsLoneAvailableRoute;
}

+ (id)controllerWithPlaybackSource:(int)arg1 trackPlaybackSourceChanges:(BOOL)arg2;
- (void)actionContentControllerCancel:(id)arg1;
- (void)actionSheetController:(id)arg1 willTapActionAtIndexPath:(id)arg2;
- (void)actionSheetController:(id)arg1 didDismissWithActionAtIndexPath:(id)arg2;
- (void)actionSheetController:(id)arg1 willDismissWithActionAtIndexPath:(id)arg2;
- (void)_refreshPlaybackSource;
- (void)routingControllerFailedToPickRoute:(id)arg1;
- (void)routingControllerDidUpdateAvailableRoutes:(id)arg1;
@property(nonatomic) BOOL automaticallySelectsLoneAvailableRoute; // @synthesize automaticallySelectsLoneAvailableRoute=_automaticallySelectsLoneAvailableRoute;
- (void)_pickLoneAvailableLocalRouteIfDesired;
- (void)_showConnectionFailedMessage;
- (id)_createMessageHeaderView:(id)arg1;
- (void)_beginPickRouteTimeout;
- (void)_updateRouteSelectingIndicatorForActionItem:(id)arg1;
- (void)_updateItemsForLocalPlaybackSource;
- (void)_updateItemsForCurrentPlaybackSource;
- (void)_connectionFailed;
- (void)_updateItemsForCompanionPlaybackSource;
- (BOOL)_isPlaybackSourceRemote;
- (void)_cancelPickRouteTimeout;
- (void)_companionAudioRouteItemSelected:(id)arg1;
- (void)_localAudioRouteItemSelected:(id)arg1;
- (BOOL)_isPlaybackSourceLocal;
- (void)_stopObservingNotifications;
- (void)_updateForCurrentPlaybackSource;
- (void)_systemAudioRouteFailedToConnectNotification:(id)arg1;
- (void)_bluetoothDeviceFailedToConnectNotification:(id)arg1;
- (id)_initWithPlaybackSource:(int)arg1 trackPlaybackSourceChanges:(BOOL)arg2;
- (void)_virtualAudioRoutesDidChangeNotification:(id)arg1;
- (void).cxx_destruct;
- (void)dismiss;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

