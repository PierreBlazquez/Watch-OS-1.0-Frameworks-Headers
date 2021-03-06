//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIResponder<UITextInput>, UISelectionGrabber, UITextSelectionView, UITouch;

@interface UITextRangeView : UIView
{
    UITextSelectionView *m_selectionView;
    UIResponder<UITextInput> *m_container;
    int m_mode;
    NSArray *m_rects;
    NSMutableArray *m_rectViews;
    UITouch *m_activeTouch;
    struct CGRect m_startEdge;
    struct CGRect m_endEdge;
    struct CGPoint m_basePoint;
    struct CGPoint m_extentPoint;
    struct CGPoint m_initialBasePoint;
    struct CGPoint m_initialExtentPoint;
    float m_initialDistance;
    struct CGPoint m_touchOffset;
    double m_firstMovedTime;
    UISelectionGrabber *m_startGrabber;
    UISelectionGrabber *m_endGrabber;
    BOOL m_animateUpdate;
    BOOL m_baseIsStart;
    BOOL m_commandsWereShowing;
    BOOL m_inGesture;
    BOOL m_magnifying;
    BOOL m_scrolling;
    BOOL m_scaling;
    BOOL m_rotating;
    BOOL m_inputViewIsChanging;
}

@property(nonatomic) BOOL inputViewIsChanging; // @synthesize inputViewIsChanging=m_inputViewIsChanging;
@property(nonatomic) BOOL rotating; // @synthesize rotating=m_rotating;
@property(nonatomic) BOOL scaling; // @synthesize scaling=m_scaling;
@property(nonatomic) BOOL isScrolling; // @synthesize isScrolling=m_scrolling;
@property(nonatomic) BOOL magnifying; // @synthesize magnifying=m_magnifying;
@property(nonatomic) BOOL animateUpdate; // @synthesize animateUpdate=m_animateUpdate;
@property(retain, nonatomic) UISelectionGrabber *endGrabber; // @synthesize endGrabber=m_endGrabber;
@property(retain, nonatomic) UISelectionGrabber *startGrabber; // @synthesize startGrabber=m_startGrabber;
- (struct CGPoint)convertFromMagnifierPoint:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint basePoint; // @synthesize basePoint=m_basePoint;
- (void)setMagnifierOrientation;
@property(nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=m_touchOffset;
@property(nonatomic) struct CGRect endEdge; // @synthesize endEdge=m_endEdge;
@property(nonatomic) struct CGRect startEdge; // @synthesize startEdge=m_startEdge;
- (void)updateGrabbers;
- (void)updateRectViews;
@property(nonatomic) float initialDistance; // @synthesize initialDistance=m_initialDistance;
@property(nonatomic) double firstMovedTime; // @synthesize firstMovedTime=m_firstMovedTime;
@property(nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=m_extentPoint;
- (void)setTouchOffset:(struct CGPoint)arg1 touchPoint:(struct CGPoint)arg2;
@property(nonatomic) struct CGPoint initialBasePoint; // @synthesize initialBasePoint=m_initialBasePoint;
@property(nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=m_initialExtentPoint;
- (BOOL)pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;
- (void)updateEdges;
@property(nonatomic) BOOL commandsWereShowing; // @synthesize commandsWereShowing=m_commandsWereShowing;
- (BOOL)_startIsHorizontal;
- (BOOL)_endIsHorizontal;
- (void)cancelDelayedActions;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (void)doneMagnifying;
- (void)prepareForMagnification;
@property(retain, nonatomic) NSArray *rects; // @synthesize rects=m_rects;
- (id)initWithFrame:(struct CGRect)arg1 selectionView:(id)arg2;
- (void)updateDots;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (void)didScroll;
- (void)willScroll;
- (struct CGPoint)magnifierPoint;
- (void)beginMagnifying;
- (struct CGPoint)applyTouchOffset:(struct CGPoint)arg1;
- (void)updateBaseAndExtentPointsFromEdges;
@property(nonatomic) BOOL baseIsStart; // @synthesize baseIsStart=m_baseIsStart;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) BOOL autoscrolled;
@property(nonatomic) BOOL inGesture; // @synthesize inGesture=m_inGesture;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=m_activeTouch;
- (void)didRotate;
- (void)willRotate;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)startAnimating;
- (void)stopAnimating;
@property(readonly, nonatomic) UIResponder<UITextInput> *container;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;
- (struct CGRect)_selectionClipRect;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

