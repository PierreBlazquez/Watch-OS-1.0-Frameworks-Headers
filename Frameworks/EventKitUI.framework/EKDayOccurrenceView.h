//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EKDayOccurrenceTravelTimeViewMetricsDelegate.h"
#import "NSCopying.h"

@class EKDayOccurrenceContentView, EKDayOccurrenceTravelTimeView, EKEvent, NSString, UIColor, UIImageView;

@interface EKDayOccurrenceView : UIView <NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate>
{
    float _visibleHeight;
    UIImageView *_eventBackgroundView;
    UIImageView *_travelBackgroundView;
    EKDayOccurrenceContentView *_content;
    EKDayOccurrenceTravelTimeView *_travelTimeContentView;
    BOOL _needsContentCalc;
    BOOL _needsBackgroundImageUpdate;
    UIView *_startResizeHandle;
    UIView *_endResizeHandle;
    float _originalXBeforeOffset;
    unsigned int _touchKeptInsideOccurrence:1;
    unsigned int _offsetContentForLandscape:1;
    BOOL _visibleHeightLocked;
    struct UIEdgeInsets _padding;
    unsigned int _bottomPinningState;
    struct CGRect _unpinnedEventBackgroundFrame;
    struct CGRect _unpinnedTravelBackgroundFrame;
    UIView *_pinFadeView;
    float _travelTimeSubviewHeightInPoints;
    BOOL _selected;
    BOOL _dimmed;
    BOOL _allDayDrawingStyle;
    BOOL _drawsResizeHandles;
    BOOL _hideBackgroundImage;
    BOOL _hideText;
    BOOL _isSelectedCopyView;
    BOOL _tentative;
    BOOL _declined;
    BOOL _needsReply;
    BOOL _allDay;
    BOOL _showsTravelTime;
    BOOL _reduceLayoutProcessingForAnimation;
    id _delegate;
    EKDayOccurrenceView *_selectedCopy;
    EKEvent *_occurrence;
    UIColor *_color;
    float _cappedColorBarHeight;
    int _occurrenceBackgroundStyle;
    float _bottomPinningProximity;
    double _travelTime;
    struct UIEdgeInsets _margin;
}

+ (void)clearCaches;
+ (id)_adjustedStripeColorForDarkBackground:(id)arg1;
+ (id)_adjustedOccurrenceColorForDarkBackground:(id)arg1 opaque:(BOOL)arg2;
+ (struct CGRect)contentStretchRectForFrame:(struct CGRect)arg1;
+ (void)_clearViewCache;
+ (id)_cachedImageForCalendarColor:(id)arg1 selected:(BOOL)arg2 declined:(BOOL)arg3 cancelled:(BOOL)arg4 tentative:(BOOL)arg5 needsReply:(BOOL)arg6 colorBarStyle:(int)arg7 dayViewBackgroundStyle:(int)arg8;
+ (id)_lightStripeColorForColor:(id)arg1;
+ (id)_lightColorForColor:(id)arg1 opaque:(BOOL)arg2;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBarStyle:(int)arg3;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(float)arg4 colorBarStyle:(int)arg5;
+ (id)_color:(id)arg1 lightenedToPercentage:(float)arg2 withFinalAlpha:(float)arg3;
+ (float)minimumHeightForOrientation:(int)arg1 isAllDay:(BOOL)arg2 usesSmallText:(BOOL)arg3;
+ (id)_viewCache;
+ (float)minimumHeightForOrientation:(int)arg1;
+ (float)bottomShadowMargin;
+ (float)minimumHeightForOrientation:(int)arg1 isAllDay:(BOOL)arg2;
+ (struct UIEdgeInsets)defaultMargin;
+ (float)colorBarThickness;
+ (id)occurrenceViewWithFrame:(struct CGRect)arg1;
+ (struct UIEdgeInsets)defaultPadding;
+ (float)barToBarGapWidth;
+ (float)barToBarHorizontalDistanceIncludingBarWidth;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(copy, nonatomic) NSString *location;
@property(nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
- (void)setVisibleHeight:(float)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (id)time;
- (void)setTime:(id)arg1;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic, getter=isCancelled) BOOL cancelled;
@property(nonatomic) struct UIEdgeInsets padding;
- (void)prepareForReuse;
- (id)_backgroundColor;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) float cappedColorBarHeight; // @synthesize cappedColorBarHeight=_cappedColorBarHeight;
@property(nonatomic) BOOL hideBackgroundImage; // @synthesize hideBackgroundImage=_hideBackgroundImage;
@property(nonatomic) __weak EKDayOccurrenceView *selectedCopy; // @synthesize selectedCopy=_selectedCopy;
- (void)setHideText:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)resetContentViewToOriginalState:(BOOL)arg1;
- (void)fadeInContentViewAt:(float)arg1 minWidth:(float)arg2 animated:(BOOL)arg3;
- (float)unconstrainedWidth;
- (void)bringResizeHandlesToFront;
- (int)dragTypeFromPoint:(struct CGPoint)arg1;
- (void)invalidateTravelTimeHeight;
- (id)_timedEventBackgroundColor;
- (void)animateToFrame:(struct CGRect)arg1 isAllDay:(BOOL)arg2 beginFromCurrentState:(BOOL)arg3 whenFinished:(CDUnknownBlockType)arg4;
- (void)_resetContentViewPosition;
- (struct CGRect)_computeTravelTimeContentRect;
- (struct CGRect)_computeContentRect;
- (struct CGRect)_frameMutatedForProximityToHourLine:(struct CGRect)arg1;
- (float)_verticalContentInset;
- (id)_newResizeHandleView;
- (void)_updateResizeHandleLocations;
- (id)arrayOfResizeHandles;
- (BOOL)_isTimedOccurrenceDrawingStyle;
- (void)setAllDayDrawingStyle:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_invalidateContentBounds;
- (BOOL)_shouldShowTimeString;
@property(retain, nonatomic) UIColor *textBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) UIColor *titleTextColor;
- (void)_removeTravelTimeSubviews;
- (void)_addTravelTimeSubviews;
@property(nonatomic) BOOL isSelectedCopyView; // @synthesize isSelectedCopyView=_isSelectedCopyView;
@property(nonatomic) float travelTimeSubviewHeightInPoints; // @synthesize travelTimeSubviewHeightInPoints=_travelTimeSubviewHeightInPoints;
@property(nonatomic) BOOL showsTravelTime; // @synthesize showsTravelTime=_showsTravelTime;
@property(nonatomic, getter=isFacebook) BOOL facebook;
@property(nonatomic, getter=isBirthday) BOOL birthday;
@property(nonatomic) BOOL allDayDrawingStyle; // @synthesize allDayDrawingStyle=_allDayDrawingStyle;
@property(nonatomic) BOOL drawsResizeHandles; // @synthesize drawsResizeHandles=_drawsResizeHandles;
@property(nonatomic) BOOL needsReply; // @synthesize needsReply=_needsReply;
@property(nonatomic, getter=isDeclined) BOOL declined; // @synthesize declined=_declined;
@property(nonatomic, getter=isTentative) BOOL tentative; // @synthesize tentative=_tentative;
@property(nonatomic) BOOL hideText; // @synthesize hideText=_hideText;
- (BOOL)hasIcon;
@property(retain, nonatomic) UIColor *timeTextColor;
- (void)_updateColors;
@property(nonatomic) int routingMode;
@property(nonatomic) BOOL reduceLayoutProcessingForAnimation; // @synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation;
@property(nonatomic) BOOL usesSmallText;
@property(nonatomic) int occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;
@property(retain, nonatomic) EKEvent *occurrence; // @synthesize occurrence=_occurrence;
@property(nonatomic) float bottomPinningProximity; // @synthesize bottomPinningProximity=_bottomPinningProximity;
@property(readonly, nonatomic) BOOL visibleHeightLocked;
- (float)viewMaxNaturalTextHeight;
- (float)enoughHeightForOneLine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

