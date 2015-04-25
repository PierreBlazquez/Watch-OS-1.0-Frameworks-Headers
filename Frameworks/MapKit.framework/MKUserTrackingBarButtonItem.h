//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

#import "MKUserTrackingButtonTarget.h"

@class MKMapView, NSString, UIButton, UIImage, UINavigationBar, UIToolbar, UIView, _MKUserTrackingButton, _MKUserTrackingButtonController;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget>
{
    BOOL _hasCustomAssociatedView;
    UIButton *_customButton;
    _MKUserTrackingButtonController *_controller;
    _MKUserTrackingButton *_userTrackingButton;
    BOOL _isLegacy;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingNoneImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
    UIToolbar *_toolbar;
    UINavigationBar *_navigationBar;
    UIView *_associatedView;
}

+ (Class)_activityIndicatorClass;
@property(retain, nonatomic) MKMapView *mapView;
- (void).cxx_destruct;
- (int)_activityIndicatorStyle;
@property(nonatomic, setter=_setState:) int _state;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)createViewForToolbar:(id)arg1;
- (BOOL)_isInMiniBar;
- (id)createViewForNavigationItem:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) UINavigationBar *_navigationBar; // @synthesize _navigationBar;
@property(retain, nonatomic) UIToolbar *_toolbar; // @synthesize _toolbar;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(int)arg2;
- (id)_landscapeImagePhoneForUserTrackingMode:(int)arg1;
- (void)_setImage:(id)arg1 forUserTrackingMode:(int)arg2;
- (id)_imageForUserTrackingMode:(int)arg1;
- (BOOL)_isHighlightedForState:(int)arg1;
- (void)_updateForState:(int)arg1;
- (int)_styleForState:(int)arg1;
- (void)_repositionViews;
@property(retain, nonatomic, setter=_setUserTrackingView:) id <MKUserTrackingView> _userTrackingView;
@property(retain, nonatomic) UIView *_associatedView; // @synthesize _associatedView;
- (id)_trackingFollowWithHeadingImage;
- (id)_trackingFollowImage;
- (id)_trackingEmptyImage;
- (id)_imageForState:(int)arg1 controlState:(unsigned int)arg2;
@property(nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) BOOL selectsWhenTracking;
- (id)initWithMapView:(id)arg1;
- (id)_trackingNoneImage;
- (void)_goToNextMode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

