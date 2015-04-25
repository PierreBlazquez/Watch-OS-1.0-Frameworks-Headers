//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GEOResourceManifestTileGroupObserver.h"
#import "MKAnnotationContainerViewDelegate.h"
#import "MKAnnotationManagerDelegate.h"
#import "MKAnnotationMarkerContainer.h"
#import "MKMapGestureControllerDelegate.h"
#import "MKOverlayContainerViewDelegate.h"
#import "MKVariableDelayTapRecognizerDelegate.h"
#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "VKMapViewDelegate.h"
#import "VKPuckAnimatorDelegate.h"

@class CLLocation, MKAnnotationContainerView, MKAnnotationView, MKAttributionLabel, MKBasicMapView, MKCompassView, MKMapAnnotationManager, MKMapCamera, MKMapGestureController, MKMapViewInternal, MKOverlayContainerView, MKScaleView, MKUserLocation, NSArray, NSString, NSTimer, UIGestureRecognizer, UIImageView, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UITextView, VKLabelMarker, VKMapView, VKPuckAnimator, _MKEnvironmentLabel;

@interface MKMapView : UIView <VKPuckAnimatorDelegate, MKOverlayContainerViewDelegate, UIGestureRecognizerDelegate, MKVariableDelayTapRecognizerDelegate, MKAnnotationContainerViewDelegate, VKMapViewDelegate, MKMapGestureControllerDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, GEOResourceManifestTileGroupObserver, NSCoding>
{
    MKMapViewInternal *_internal;
    UIView *_contentView;
    MKMapAnnotationManager *_annotationManager;
    MKAnnotationContainerView *_annotationContainer;
    MKAttributionLabel *_attributionLabel;
    CDUnknownBlockType _annotationRectTest;
    CDUnknownBlockType _annotationCoordinateTest;
    UIImageView *_attributionBadgeView;
    NSTimer *_startEffectsTimer;
    id <MKMapViewDelegate><MKMapViewDelegatePrivate> _safeDelegate;
    id <MKMapViewDelegate><MKMapViewDelegatePrivate> _unsafeDelegate;
    unsigned int _suspendedEffectsCount;
    unsigned int _userInteractionDisabledCount;
    unsigned int _mapType;
    NSTimer *_defaultLocationTimer;
    UILabel *_debugView;
    NSTimer *_debugTimer;
    unsigned int _debugViewIndex;
    _MKEnvironmentLabel *_debugCurrentEnvironmentLabel;
    double _heading;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_selectingTapGestureRecognizer;
    UITapGestureRecognizer *_nonselectingTapGestureRecognizer;
    UIGestureRecognizer *_locationConsoleGesture;
    MKMapGestureController *_gestureController;
    MKOverlayContainerView *_overlayContainer;
    int _userTrackingMode;
    MKBasicMapView *_basicMapView;
    VKMapView *_mapView;
    VKLabelMarker *_pressedLabelMarker;
    MKScaleView *_scaleView;
    MKCompassView *_compassView;
    BOOL _scaleVisible;
    BOOL _compassVisible;
    NSTimer *_compassHideTimer;
    BOOL _scaleEnabled;
    BOOL _compassEnabled;
    UIView *_scrollContainerView;
    CDUnknownBlockType _regionSetterWhenSized;
    MKUserLocation *_userLocation;
    VKPuckAnimator *_userLocationAnimator;
    MKMapCamera *_camera;
    id _topLayoutGuide;
    id _bottomLayoutGuide;
    CDUnknownBlockType _showCalloutAfterRegionChangeBlock;
    CDUnknownBlockType _selectAnnotationViewAfterRedrawBlock;
    CDUnknownBlockType _debugConsoleAdditionalInfoProvider;
    UITextView *_vectorKitDebugView;
    struct UIEdgeInsets _edgeInsets;
    UIPanGestureRecognizer *_vectorKitStyleDebugGestureRecognizer;
    double _verticalYawOverride;
    struct {
        unsigned int callsDelegateForAllRegionChanges:1;
        unsigned int changingRegion:1;
        unsigned int debugViewHeading:1;
        unsigned int didStartDragging:1;
        unsigned int draggingInterrupted:1;
        unsigned int didStartSmoothScrolling:1;
        unsigned int hasRenderedSomething:1;
        unsigned int ignoreHeadingUpdates:1;
        unsigned int ignoreLocationUpdates:1;
        unsigned int isSuspended:1;
        unsigned int longPressing:1;
        unsigned int persistFixedUserLocation:1;
        unsigned int regionChangeIsAnimated:1;
        unsigned int rotationSupported:1;
        unsigned int scrollEnabled:1;
        unsigned int scrolling:1;
        unsigned int shouldRotateForHeading:1;
        unsigned int useVehicleHeading:1;
        unsigned int showsUserLocation:1;
        unsigned int zoomEnabled:1;
        unsigned int zoomIsAnimated:1;
        unsigned int zooming:1;
        unsigned int isChangingViewSize:1;
        unsigned int isChangingEdgeInsets:1;
        unsigned int showsAttribution:1;
        unsigned int showsAttributionBadge:1;
        unsigned int useOld2DAnnotationContainer:1;
        unsigned int rotating:1;
        unsigned int pitching:1;
        unsigned int rotateEnabled:1;
        unsigned int pitchEnabled:1;
        unsigned int showsBuildings:1;
        unsigned int showsPointsOfInterest:1;
        unsigned int allowsRotation:1;
        unsigned int hasPendingCameraChange:1;
        unsigned int backdropViewQualityChangingDisabled:1;
        unsigned int canSelectPOIs:1;
        unsigned int canSelectAllLabels:1;
        unsigned int vectorKitConsoleEnabled:1;
        unsigned int edgeInsetsAreExplicit:1;
        unsigned int locationPropagationEnabled:1;
        unsigned int userInteractionPausesLocationUpdates:1;
        unsigned int locationPulseEnabled:1;
        unsigned int shouldSplitRouteLine:1;
        unsigned int shouldAnimatePositionWithRouteMatch:1;
        unsigned int showsCurrentEnvironmentName:1;
        unsigned int processingUserLocationUpdate:1;
        unsigned int changingMapType:1;
        unsigned int userRotatedAwayFromVerticalYaw:1;
        unsigned int goingToDefaultLocation:1;
        unsigned int delayLocationUpdatesUntilInitialRendering:1;
        unsigned int isDraggingAnnotationView:1;
        unsigned int showsPressedLabelMarkerEffect:1;
        unsigned int delegateShouldReceiveTouch:1;
        unsigned int delegateShouldDelayTapResponse:1;
        unsigned int delegateDidUpdateUserLocation:1;
        unsigned int delegateDidFailToLocateUser:1;
        unsigned int delegateWillChangeRegion:1;
        unsigned int delegateDidChangeRegion:1;
        unsigned int delegateDidStartMapRendering:1;
        unsigned int delegateDidFinishMapRendering:1;
        unsigned int delegateDidChangeUserTrackingMode:1;
        unsigned int delegateDidChangeUserTrackingModeButton:1;
        unsigned int delegateDidChangeMapType:1;
    } _flags;
    BOOL _hasSetLayoutMargins;
    BOOL _automaticallySnapsToNorth;
    unsigned long long _currentFlyoverAnimationID;
}

+ (void)setRendersInBackgroundByDefault:(BOOL)arg1;
+ (CDStruct_90e2a262)regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize)arg2 region:(CDStruct_90e2a262)arg3;
+ (CDStruct_90e2a262)_mapRectThatFitsViewBounds:(struct CGRect)arg1 mapRect:(CDStruct_90e2a262)arg2 viewInsets:(struct UIEdgeInsets)arg3 edgePadding:(struct UIEdgeInsets)arg4 minZoomLevel:(float)arg5 maxZoomLevel:(float)arg6 snapToZoomLevel:(BOOL)arg7;
+ (CDStruct_90e2a262)regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize)arg2 edgeInsets:(struct UIEdgeInsets)arg3 region:(CDStruct_90e2a262)arg4;
+ (unsigned int)minZoomLevelForMapType:(unsigned int)arg1 viewSize:(struct CGSize)arg2;
+ (CDStruct_90e2a262)_regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize)arg2 viewInsets:(struct UIEdgeInsets)arg3 edgePadding:(struct UIEdgeInsets)arg4 region:(CDStruct_90e2a262)arg5 minZoomLevel:(float)arg6 maxZoomLevel:(float)arg7 snapToZoomLevel:(BOOL)arg8;
- (void)exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(CDStruct_39925896)arg2 course:(double)arg3;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
@property(copy, nonatomic) MKMapCamera *camera;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
- (void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(CDStruct_39925896)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)mapLayerDidDraw:(id)arg1;
- (void)mapLayerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)mapLayer:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)mapLayer:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)mapLayer:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)mapLayer:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)mapLayerDidBecomePartiallyDrawn:(id)arg1;
- (void)mapLayerDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (id)mapLayer:(id)arg1 painterForOverlay:(id)arg2;
- (id)mapLayer:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapLayerDidFinishLoadingTiles:(id)arg1;
- (void)mapLayerDidStartLoadingTiles:(id)arg1;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (void)mapLayerWillStartFlyoverTour:(id)arg1;
- (void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
- (void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 animated:(BOOL)arg2;
- (id)mapRegion;
- (void)mapLayer:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)mapLayerDidChangeVisibleRegion:(id)arg1;
- (void)mapLayer:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)mapLayer:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
- (void)mapLayer:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)mapLayer:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)addOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)setRendersInBackground:(BOOL)arg1;
- (BOOL)rendersInBackground;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) unsigned int mapType;
- (BOOL)isShowingNoDataPlaceholders;
- (void)_resetMaximumZoomLevel;
- (void)_setMaximumZoomLevel:(float)arg1;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(nonatomic) int userTrackingMode;
@property(readonly, nonatomic) MKUserLocation *userLocation;
- (BOOL)hasUserLocation;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)addAnnotation:(id)arg1;
- (BOOL)_isVisible;
- (void)_updateInsets;
- (void)setSuspended:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1 forViewPrintFormatter:(id)arg2;
@property(nonatomic) CDStruct_90e2a262 region;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)_doubleTapGestureRecognizer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (float)_zoomScale;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (int)_interfaceOrientation;
- (void)setCenter:(struct CGPoint)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_clearGestureRecognizers;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <MKMapViewDelegate> delegate; // @dynamic delegate;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isSuspended;
- (void)_setCamera:(id)arg1;
- (struct CGPoint)_convertMapPoint:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
- (CDStruct_c3b9c2ee)_convertPoint:(struct CGPoint)arg1 toMapPointFromView:(id)arg2;
- (CDStruct_90e2a262)_convertRect:(struct CGRect)arg1 toMapRectFromView:(id)arg2;
- (struct CGRect)_convertMapRect:(CDStruct_90e2a262)arg1 toRectToView:(id)arg2;
@property(readonly, nonatomic, getter=_detailedDescription) NSString *detailedDescription;
@property(readonly, nonatomic, getter=_visibleTileSets) NSArray *visibleTileSets;
- (id)rendererForOverlay:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (id)overlaysInLevel:(int)arg1;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)removeOverlays:(id)arg1;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2 level:(int)arg3;
- (void)addOverlays:(id)arg1 level:(int)arg2;
- (void)addOverlay:(id)arg1 level:(int)arg2;
- (void)addOverlays:(id)arg1;
- (void)overlayContainerAddedDrawables:(id)arg1;
- (id)createDrawableForOverlay:(id)arg1;
- (id)overlayContainer;
- (void)_updateFromCamera:(id)arg1;
- (void)_updateFromCamera:(id)arg1 duration:(double)arg2 timing:(CDUnknownBlockType)arg3;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timing:(CDUnknownBlockType)arg3;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timingCurve:(int)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)resumeUserHeadingUpdates;
- (void)pauseUserHeadingUpdates;
- (void)_setUseVehicleHeading:(BOOL)arg1;
- (BOOL)_rotationPossible;
- (void)setShouldRotateForHeading:(BOOL)arg1;
- (void)_updateHeading:(id)arg1 animated:(BOOL)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
@property(retain, nonatomic) CLLocation *predictedUserLocation;
- (void)_setLocationPropagationEnabled:(BOOL)arg1;
- (BOOL)_isLocationPropagationEnabled;
- (void)_updateCourseForMapViewHeading:(id)arg1;
- (BOOL)_useVehicleHeading;
- (void)locationManagerUpdatedLocation:(id)arg1;
@property(nonatomic) BOOL ignoreLocationUpdates;
- (id)descriptionForLocation:(id)arg1 compact:(BOOL)arg2;
- (void)_updateLocationConsole;
- (void)_toggleLocationConsole:(id)arg1;
- (void)removeUserLocation;
@property(nonatomic, getter=_currentFlyoverAnimationID, setter=_setCurrentFlyoverAnimationID:) unsigned long long currentFlyoverAnimationID; // @synthesize currentFlyoverAnimationID=_currentFlyoverAnimationID;
- (void)_stopPanningAtPoint:(struct CGPoint)arg1;
- (void)_updatePanWithTranslation:(struct CGPoint)arg1;
- (void)_startPanningAtPoint:(struct CGPoint)arg1;
- (void)_zoomOut;
- (void)_zoomIn;
- (void)_showAnimationAtCoordinate:(CDStruct_c3b9c2ee)arg1 withMapRegion:(id)arg2;
- (BOOL)_canShowAnimationForSearchResultWithMapRegion:(id)arg1;
- (void)_performFlyoverAnimation:(id)arg1;
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1 animated:(BOOL)arg2;
- (void)_setVisibleMapRect:(CDStruct_90e2a262)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setVisibleMapRect:(CDStruct_90e2a262)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_endZoomForExternalGesture;
- (void)_startZoomForExternalGesture;
- (void)_removePersistentVectorOverlay:(id)arg1;
- (void)_addPersistentVectorOverlay:(id)arg1;
- (void)_removeVectorOverlay:(id)arg1;
- (void)_addVectorOverlay:(id)arg1;
- (void)_setApplicationState:(int)arg1;
- (int)_applicationState;
- (void)_setUserTrackingZoomStyle:(int)arg1;
- (int)_userTrackingZoomStyle;
- (BOOL)_canEnterNightMode;
- (void)_exit3DMode;
- (void)_enter3DMode;
- (id)viewForAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)_addViewsForAnnotations:(id)arg1;
- (void)_replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)_addAnnotations:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)_selectLabelMarker:(id)arg1 animated:(BOOL)arg2;
- (void)_setCanSelectAllLabels:(BOOL)arg1;
- (BOOL)_canSelectAllLabels;
- (void)_setCanSelectPOIs:(BOOL)arg1;
- (BOOL)_canSelectPOIs;
- (CDStruct_90e2a262)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(CDStruct_90e2a262)arg1 toRectToView:(id)arg2;
@property(copy, nonatomic) NSArray *selectedAnnotations;
- (id)_annotationViews;
- (CDStruct_c3b9c2ee)_centerMapPoint;
- (void)_forceFrame;
- (BOOL)compassVisible;
- (void)_setAutomaticallySnapsToNorth:(BOOL)arg1;
- (BOOL)_automaticallySnapsToNorth;
- (void)setCallsDelegateForAllRegionChanges:(BOOL)arg1;
- (BOOL)callsDelegateForAllRegionChanges;
- (void)showAnnotations:(id)arg1 animated:(BOOL)arg2;
- (void)_setEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)_setLabelEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_labelEdgeInsets;
- (void)_setShouldAnimatePositionWithRouteMatch:(BOOL)arg1;
- (BOOL)_shouldAnimatePositionWithRouteMatch;
- (void)_setShouldSplitRouteLine:(BOOL)arg1;
- (BOOL)_shouldSplitRouteLine;
- (void)_setLocationPulseEnabled:(BOOL)arg1;
- (BOOL)_isLocationPulseEnabled;
- (void)_setUserInteractionPausesLocationUpdates:(BOOL)arg1;
- (BOOL)_userInteractionPausesLocationUpdates;
- (void)_setShowsCurrentEnvironmentName:(BOOL)arg1;
- (BOOL)_showsCurrentEnvironmentName;
- (void)_setDebugConsoleAdditionalInfoProvider:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_debugConsoleAdditionalInfoProvider;
- (struct CGRect)_calloutContentRect;
- (BOOL)_isCalloutExpanded;
- (BOOL)canRotateForHeading;
- (BOOL)hasRenderedSomething;
@property(readonly, nonatomic, getter=isUserLocationVisible) BOOL userLocationVisible;
- (BOOL)_shouldDelayLocationUpdatesUntilInitialRendering;
- (void)_setShouldDelayLocationUpdatesUntilInitialRendering:(BOOL)arg1;
- (void)_setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)_setPanWithMomentum:(BOOL)arg1;
- (BOOL)_panWithMomentum;
- (BOOL)_canZoomOut;
- (BOOL)_canZoomIn;
- (id)debugView;
- (id)_mapRegionOfInterest;
- (struct CGPoint)_centerPoint;
- (BOOL)isRegionChanging;
- (BOOL)isScaleEnabled;
- (void)setScaleEnabled:(BOOL)arg1;
- (id)_startEffectsTimer;
- (void)_setVectorKitStyleDebugEnabled:(BOOL)arg1;
- (BOOL)_isVectorKitStyleDebugEnabled;
- (void)_setMapDisplayStyle:(unsigned int)arg1;
- (unsigned int)_mapDisplayStyle;
- (BOOL)_isShowingFlyover;
- (id)_defaultLocationTimer;
- (void)_setAllowsPopoverWhenNotInWindow:(BOOL)arg1;
- (BOOL)_allowsPopoverWhenNotInWindow;
- (void)set_annotationViewsAreAddedImmediately:(BOOL)arg1;
- (BOOL)_annotationViewsAreAddedImmediately;
- (BOOL)_isHandlingNonselectingTap;
- (id)_longPressGestureRecognizer;
- (id)_selectingTapGestureRecognizer;
- (id)_panningGestureRecognizer;
- (void)_setShowsPressedLabelMarkerEffect:(BOOL)arg1;
- (BOOL)_showsPressedLabelMarkerEffect;
- (void)setShowsAttributionBadge:(BOOL)arg1;
- (BOOL)showsAttributionBadge;
- (void)setShowsAttribution:(BOOL)arg1;
- (BOOL)showsAttribution;
- (void)_setShowsTraffic:(BOOL)arg1;
- (BOOL)_showsTraffic;
- (void)_setVectorKitConsoleEnabled:(BOOL)arg1;
- (BOOL)_isVectorKitConsoleEnabled;
- (void)_restoreViewportFromDictionary:(id)arg1;
- (id)_viewportDictionary;
- (void)_setAdditionalManifestConfiguration:(id)arg1;
- (id)_additionalManifestConfiguration;
- (id)_mapLayer;
- (void)setBackdropViewQualityChangingDisabled:(BOOL)arg1;
- (void)_setSafeDelegate:(id)arg1;
- (id)initFromIBWithFrame:(struct CGRect)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 gestureRecognizerHostView:(id)arg2 showsAttribution:(BOOL)arg3;
- (void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2;
- (void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;
- (void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
- (id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
- (void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
- (void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(CDStruct_c3b9c2ee)arg2 animated:(BOOL)arg3 duration:(double)arg4;
- (void)deselectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2;
- (void)removeAnnotationRepresentation:(id)arg1;
- (void)addAnnotationRepresentation:(id)arg1 allowAnimation:(BOOL)arg2;
- (double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (void)gestureControllerDidStopTiltingDecelerating:(id)arg1;
- (void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerWillStartTilting:(id)arg1;
- (void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
- (void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerWillStartRotating:(id)arg1;
- (void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;
- (void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;
- (void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(int)arg2;
- (void)gestureControllerDidStopZooming:(id)arg1 direction:(int)arg2 willDecelerate:(BOOL)arg3;
- (void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2;
- (void)gestureControllerDidStopPanningDecelerating:(id)arg1;
- (void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerWillStartPanning:(id)arg1;
- (void)gestureControllerDidStopUserInteraction:(id)arg1;
- (void)gestureControllerWillStartUserInteraction:(id)arg1;
- (void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1;
- (struct CGRect)annotationContainerVisibleRect:(id)arg1;
- (struct CGRect)visibleRectInView:(id)arg1;
- (struct CGRect)visibleCenteringRectInView:(id)arg1;
- (void)annotationContainerDidDropPins:(id)arg1;
- (void)annotationContainerWillDropPins:(id)arg1;
- (void)annotationContainerDidAnimateBubble:(id)arg1;
- (void)annotationContainerWillAnimateBubble:(id)arg1;
- (float)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(CDStruct_c3b9c2ee)arg2 maxDistance:(float *)arg3 startPoint:(struct CGPoint *)arg4 shadowStartPoint:(struct CGPoint *)arg5;
- (void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 annotationCoordinate:(CDStruct_c3b9c2ee)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)calloutDidAppearForAnnotationView:(id)arg1 inContainer:(id)arg2;
- (void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (BOOL)annotationContainerIsRotated:(id)arg1;
- (BOOL)annotationContainerShouldAlignToPixels:(id)arg1;
- (void)_zoomWithAmount:(double)arg1;
- (void)_setCamera:(id)arg1 animated:(BOOL)arg2;
- (id)_camera;
- (CDStruct_90e2a262)_mapRectWithFraction:(double)arg1 ofVisible:(CDStruct_90e2a262)arg2;
- (void)selectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (void)_resumeFlyoverAnimation;
- (id)vk_mapLayer;
- (void)_pauseFlyoverAnimation;
- (void)_stopFlyoverAnimation;
- (void)setCompassEnabled:(BOOL)arg1;
- (void)_performFlyoverAnimation:(id)arg1 animateToStart:(BOOL)arg2;
- (void)_prepareFlyoverAnimation:(id)arg1 inBackground:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (CDStruct_90e2a262)mapRectThatFits:(CDStruct_90e2a262)arg1;
- (CDStruct_90e2a262)mapRectThatFits:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (void)updateLayoutGuides;
- (id)_findLayoutGuideVC;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)_addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)_selectAnnotation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (id)_selectedLabelMarker;
- (CDStruct_90e2a262)_convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)_convertRegion:(CDStruct_90e2a262)arg1 toRectToView:(id)arg2;
- (CDStruct_c3b9c2ee)_convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)_convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
- (id)annotationsInMapRect:(CDStruct_90e2a262)arg1;
@property(readonly, nonatomic) NSArray *annotations;
- (float)_zoomLevelForRegion:(CDStruct_90e2a262)arg1 includeAccessoryPadding:(BOOL)arg2;
@property(nonatomic) CDStruct_90e2a262 visibleMapRect;
- (void)setCamera:(id)arg1 animated:(BOOL)arg2;
- (double)_goToCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(float)arg2 animated:(BOOL)arg3;
@property(readonly, nonatomic) struct CGRect annotationVisibleRect;
- (void)_snapToNorthIfNecessary;
- (void)_willChangeRegionAnimated:(BOOL)arg1;
- (void)_didChangeRegionMidstream:(BOOL)arg1;
- (void)_didEndZoom;
- (void)_willStartZoom:(BOOL)arg1;
- (void)_userScrollingEnded;
- (void)_didEndUserInteraction;
- (void)_willStartUserInteraction;
- (void)_hideCompassFromTimer:(id)arg1;
- (id)compassVisibilityAnimation;
- (void)set_compassHideTimer:(id)arg1;
- (void)snapToNorth:(id)arg1;
- (id)compassView;
- (id)_compassHideTimer;
- (BOOL)isCompassEnabled;
- (void)handleCompassTap:(id)arg1;
- (id)scaleView;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (BOOL)_isPitched;
- (void)enableMapRotationIfNeeded;
- (void)_updateContentBounds;
- (BOOL)_updateRotationSupported;
- (void)_setScrolling:(BOOL)arg1;
- (void)_clearFixedUserLocation;
- (void)_fixUserLocationFromPresentationValue;
- (void)_resumeUserLocationUpdates:(BOOL)arg1;
- (void)_pauseUserLocationUpdates;
- (double)_panDurationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
- (void)_selectUserLocationTypeWithDeltaZoomLevel:(float)arg1;
- (void)_setZoomScale:(float)arg1 centerCoordinate:(CDStruct_c3b9c2ee)arg2 duration:(double)arg3 animated:(BOOL)arg4;
- (int)_roundedZoomLevel;
- (float)_boundedZoomLevel:(float)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (float)_zoomLevelForMapRect:(CDStruct_90e2a262)arg1 includeAccessoryPadding:(BOOL)arg2;
- (CDStruct_0c7fa811)_zoomRegionForMapRect:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2 maxZoomLevel:(int)arg3 minZoomLevel:(int)arg4;
- (int)_viewIndexForSubview:(id)arg1;
- (BOOL)shouldRotateForHeading;
- (void)_goToMapRegion:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (id)_mapRegionWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 zoomScale:(float)arg2;
- (void)_addSetRegionBlockWhenSized:(CDUnknownBlockType)arg1;
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(BOOL)arg3;
- (void)addAnnotations:(id)arg1;
- (void)_setEdgeInsets:(struct UIEdgeInsets)arg1 explicit:(BOOL)arg2;
- (void)_setCompassVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_roomForCompass;
- (void)_updateScalePosition;
- (void)_updateCompassPosition;
- (void)_updateVectorKitConsoleFrameWithEdgeInsets;
- (void)_updateDebugViewFrameWithEdgeInsets;
- (void)_resumeUserInteraction;
- (void)_suspendUserInteraction;
- (void)_goToMapRegion:(id)arg1 duration:(double)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setZoomScale:(float)arg1 centerMapPoint:(CDStruct_c3b9c2ee)arg2 duration:(double)arg3 animated:(BOOL)arg4;
- (BOOL)effectsEnabled;
- (float)_maxZoomLevelForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_updateShouldDisplayEffects;
- (void)resumeUserLocationUpdates;
- (void)pauseUserLocationUpdates;
- (BOOL)_isUserLocationViewCentered:(float)arg1;
- (void)_updateScaleVisibility;
- (void)_setScaleVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldDisplayScaleForCurrentRegion;
- (void)_updateEffects;
- (void)_updateRotationAttributes;
- (void)_updateScrollContainerView:(BOOL)arg1;
- (BOOL)_iconsShouldAlignToPixels;
- (BOOL)_isHandlingUserEvent;
- (void)setLocationConsoleEnabled:(BOOL)arg1;
- (BOOL)isLocationConsoleEnabled;
- (BOOL)_isUsingDevResourceStyleSheet;
- (void)_selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (void)_startFlyoverTourAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)mapAttributionWithStringAttributes:(id)arg1;
- (id)_calloutPopoverController;
- (void)_annotationViewDragStateChanged:(id)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)_handleLongPressDidEnd;
- (void)_dropDraggingAnnotationView:(BOOL)arg1;
- (BOOL)_hitSomethingAtTouch:(id)arg1;
- (BOOL)calloutViewContainsPoint:(struct CGPoint)arg1;
- (void)_addDebugGesture;
- (void)handleLongPress:(id)arg1;
- (void)_handleTapToDeselect:(id)arg1;
- (void)_handleTapToSelect:(id)arg1;
- (void)toggleLocationConsole:(id)arg1;
- (void)_stopTrackingHeading;
@property(readonly, retain, nonatomic) MKAnnotationView *userLocationView;
- (void)_startTrackingHeading;
- (void)_setUserTrackingMode:(int)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3;
- (void)setUserTrackingMode:(int)arg1 animated:(BOOL)arg2;
- (BOOL)_isUserLocationInView:(BOOL)arg1;
- (void)stopUpdatingUserLocation;
- (void)startUpdatingUserLocation;
- (BOOL)_canEnter3DMode;
- (void)_sizeDidChangeWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_sizeWillChange;
- (float)_zoomScaleForMapRegion:(id)arg1;
- (struct CGRect)_debugViewFrame;
- (float)_boundedZoomLevel:(float)arg1;
- (float)_zoomLevel;
- (void)_didEndScroll;
- (void)_willStartScroll;
- (void)_setScrolling:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_isChangingRegionForGesture;
- (void)_updateCompassVisibility;
- (void)_handleStyleDebugGesture:(id)arg1;
- (void)_updateIconsShouldAlignToPixels;
- (void)_deselectLabelMarkerAnimated:(BOOL)arg1;
- (BOOL)_canShowFlyover;
- (BOOL)_supportsVKMapType:(int)arg1;
- (id)_nonselectingTapGestureRecognizer;
- (void)_updateHeadingOrientation;
- (void)_updateEnvironmentLabelText;
- (void)_updateCameraState;
- (void)_updateScrollingAndGestures;
- (struct CGRect)_currentEnvironmentNameFrame;
- (void)_layoutAttribution;
- (void)startEffects;
- (void)_clearLayoutGuides;
- (void)set_startEffectsTimer:(id)arg1;
@property(nonatomic, getter=isRotateEnabled) BOOL rotateEnabled;
@property(nonatomic, getter=isPitchEnabled) BOOL pitchEnabled;
@property(nonatomic) BOOL showsUserLocation;
- (id)_commonInitFromIB:(BOOL)arg1 gestureRecognizerHostView:(id)arg2 showsAttribution:(BOOL)arg3;
- (void)stopEffects;
- (void)_updateAttribution;
- (void)_configureGestureRecognizers:(id)arg1;
- (void)set_defaultLocationTimer:(id)arg1;
- (void)goToDefaultLocation;
- (void)_displayWorld;
- (void)_updateRotateAllowed:(BOOL)arg1;
- (void)_updatePitchAllowed:(BOOL)arg1;
- (void)_willChangeStatusBarFrame:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)geoDefaultsDidChange:(id)arg1;
- (void)_setMapType:(unsigned int)arg1 onInit:(BOOL)arg2;
- (void)_insertSubview:(id)arg1;
- (float)_maximumZoomLevel;
- (float)_minimumZoomLevel;
- (struct UIEdgeInsets)_edgeInsets;
- (void)setRegion:(CDStruct_90e2a262)arg1 animated:(BOOL)arg2;
- (CDStruct_90e2a262)regionThatFits:(CDStruct_90e2a262)arg1;
- (struct CGRect)attributionFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

