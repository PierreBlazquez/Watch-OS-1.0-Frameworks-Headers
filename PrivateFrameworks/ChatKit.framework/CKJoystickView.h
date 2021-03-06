//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CKJoystickButtonItem, CKJoystickController, NSArray, NSMutableArray;

@interface CKJoystickView : UIView
{
    BOOL _collapsed;
    BOOL _expanded;
    BOOL _autoDismiss;
    BOOL _delegateCollapsedWillChange;
    BOOL _touchInside;
    BOOL _dragging;
    CKJoystickButtonItem *_centerButtonItem;
    NSArray *_radialButtonItems;
    unsigned int _highlightStyle;
    CKJoystickController *_controller;
    CKJoystickButtonItem *_highlightedButtonItem;
    unsigned int _style;
    NSMutableArray *_allButtonItems;
    UIView *_discView;
    double _startAngle;
    double _endAngle;
    double _incrementAngle;
}

+ (void)highlightAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)expandAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)collapseAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)buttonRotateAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)buttonChangeAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL delegateCollapsedWillChange; // @synthesize delegateCollapsedWillChange=_delegateCollapsedWillChange;
@property(nonatomic) BOOL autoDismiss; // @synthesize autoDismiss=_autoDismiss;
@property(nonatomic) unsigned int highlightStyle; // @synthesize highlightStyle=_highlightStyle;
- (void)joystickGestureRecognized:(id)arg1;
- (void)orientationDidChange;
- (id)initWithCenterButtonItem:(id)arg1 radialButtonItems:(id)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 style:(unsigned int)arg6 highlightStyle:(unsigned int)arg7;
@property(nonatomic) CKJoystickButtonItem *highlightedButtonItem; // @synthesize highlightedButtonItem=_highlightedButtonItem;
@property(nonatomic, getter=isTouchInside) BOOL touchInside; // @synthesize touchInside=_touchInside;
- (id)buttonItemAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isDragging) BOOL dragging; // @synthesize dragging=_dragging;
- (void)highlightButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCollapsed:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double incrementAngle; // @synthesize incrementAngle=_incrementAngle;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(copy, nonatomic) NSArray *radialButtonItems; // @synthesize radialButtonItems=_radialButtonItems;
@property(retain, nonatomic) NSMutableArray *allButtonItems; // @synthesize allButtonItems=_allButtonItems;
@property(retain, nonatomic) CKJoystickButtonItem *centerButtonItem; // @synthesize centerButtonItem=_centerButtonItem;
- (void)setRadialButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setCenterButtonItem:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIView *discView; // @synthesize discView=_discView;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) CKJoystickController *controller; // @synthesize controller=_controller;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

