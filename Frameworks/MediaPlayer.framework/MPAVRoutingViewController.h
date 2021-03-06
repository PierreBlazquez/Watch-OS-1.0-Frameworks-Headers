//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPAVRoutingControllerDelegate.h"
#import "MPAVRoutingTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPAVRoutingController, MPWeakTimer, NSArray, NSString, UIColor, UITableView;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSArray *_cachedRoutes;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _cachedShowAirPlayDebugButton;
    BOOL _hasCachedAirPlayDebugButtonStatus;
    BOOL _needsDisplayedRoutesUpdate;
    BOOL _allowMirroring;
    unsigned int _style;
    id <MPAVRoutingViewControllerDelegate> _delegate;
    unsigned int _avItemType;
}

- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(unsigned int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (id)_tableView;
- (void)viewWillLayoutSubviews;
@property(readonly, nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) __weak id <MPAVRoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
@property(nonatomic) BOOL allowMirroring; // @synthesize allowMirroring=_allowMirroring;
@property(nonatomic, setter=setAVItemType:) unsigned int avItemType; // @synthesize avItemType=_avItemType;
- (float)_tableViewHeightAccordingToDataSource;
- (void)_setTableCellsContentColor:(id)arg1;
- (void)_setTableCellsBackgroundColor:(id)arg1;
- (id)_tableCellsContentColor;
- (id)_tableCellsBackgroundColor;
- (void)_setupUpdateTimerIfNecessary;
- (void)_updateDisplayedRoutes;
- (float)_expandedCellHeight;
- (float)_normalCellHeight;
- (unsigned int)_tableViewIndexForRouteIndex:(unsigned int)arg1;
- (void)_pickRoute:(id)arg1;
- (void)_showAirPlayDebug;
- (BOOL)_shouldShowMirroringCellForRoute:(id)arg1;
- (unsigned int)_debugButtonTableViewIndex;
- (unsigned int)_routeIndexForTableViewIndex:(unsigned int)arg1;
- (BOOL)_shouldShowAirPlayDebugButton;
- (id)_displayedRoutes;
- (void)_setNeedsDisplayedRoutesUpdate;
- (id)_routesWhereMirroringIsPreferred;
- (void)_serviceWillPresentAuthenticationPromptNotification:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

