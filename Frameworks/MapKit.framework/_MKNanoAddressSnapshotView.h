//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKMapItem, MKMapSnapshot, MKMapSnapshotter, MKPinAnnotationView, MKUserLocationView, PUICActivityIndicatorView, UIFont, UIImageView, UILabel, _MKAutoLayoutContext;

@interface _MKNanoAddressSnapshotView : UIView
{
    _MKAutoLayoutContext *_context;
    MKMapSnapshotter *_activeSnapshotter;
    MKMapItem *_mapItem;
    CDStruct_02837cd9 _overrideMapRect;
    MKPinAnnotationView *_pinView;
    MKUserLocationView *_userLocationView;
    UILabel *_textLabel;
    UIView *_blurView;
    UIImageView *_mapImageView;
    UIImageView *_upperLeftCorner;
    UIImageView *_upperRightCorner;
    UIImageView *_lowerLeftCorner;
    UIImageView *_lowerRightCorner;
    struct CGSize _lastSnapshotSize;
    CDStruct_02837cd9 _lastSnapshotMapRect;
    PUICActivityIndicatorView *_spinner;
    UIFont *_footerFont;
    BOOL _showsName;
    MKMapSnapshot *_snapshot;
    unsigned int _pinColor;
}

@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) unsigned int pinColor; // @synthesize pinColor=_pinColor;
- (void).cxx_destruct;
@property(retain, nonatomic) MKMapSnapshot *snapshot; // @synthesize snapshot=_snapshot;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMapItem:(id)arg1 visibleMapRect:(CDStruct_90e2a262)arg2;
- (id)_annotationViewToDisplay;
- (void)_updateText;
- (void)_updateSnapshotIfNecessary;
- (void)_updateSnapshotIfNecessaryForSize:(struct CGSize)arg1 blurViewHeight:(float)arg2;
@property(nonatomic) BOOL showsName; // @synthesize showsName=_showsName;
- (void)preloadSnapshotForWidth:(float)arg1;
- (void)textSizeChanged;

@end

