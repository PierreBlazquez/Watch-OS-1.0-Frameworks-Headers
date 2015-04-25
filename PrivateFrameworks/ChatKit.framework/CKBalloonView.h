//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKBalloonImageView.h>

#import "UIGestureRecognizerDelegate.h"

@class CKManualUpdater, NSString, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface CKBalloonView : CKBalloonImageView <UIGestureRecognizerDelegate>
{
    BOOL _orientation;
    BOOL _hasTail;
    BOOL _filled;
    BOOL _showingMenu;
    BOOL _canUseOpaqueMask;
    BOOL _hasOverlay;
    BOOL _wantsSkinnyMask;
    id <CKBalloonViewDelegate> _delegate;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    unsigned int _balloonCorners;
    CKManualUpdater *_displayUpdater;
    CKBalloonImageView *_overlay;
    struct UIEdgeInsets _textAlignmentInsets;
}

@property(retain, nonatomic) CKBalloonImageView *overlay; // @synthesize overlay=_overlay;
- (void)configureForMessagePart:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
@property(nonatomic) BOOL hasOverlay; // @synthesize hasOverlay=_hasOverlay;
@property(nonatomic) BOOL canUseOpaqueMask; // @synthesize canUseOpaqueMask=_canUseOpaqueMask;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
- (void)export:(id)arg1;
- (void)sendAsTextMessage:(id)arg1;
- (void)more:(id)arg1;
@property(readonly, nonatomic) BOOL needsGroupOpacity;
@property(nonatomic) BOOL wantsSkinnyMask; // @synthesize wantsSkinnyMask=_wantsSkinnyMask;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;
- (void)showMenu;
@property(nonatomic, getter=isShowingMenu) BOOL showingMenu; // @synthesize showingMenu=_showingMenu;
- (void)prepareForDisplayIfNeeded;
- (void)_dismissOverlay;
- (void)setHasOverlay:(BOOL)arg1 autoDismiss:(BOOL)arg2;
@property(readonly, nonatomic) UIColor *overlayColor;
@property(nonatomic) unsigned int balloonCorners; // @synthesize balloonCorners=_balloonCorners;
@property(nonatomic, getter=isFilled) BOOL filled; // @synthesize filled=_filled;
@property(retain, nonatomic) CKManualUpdater *displayUpdater; // @synthesize displayUpdater=_displayUpdater;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)setNeedsPrepareForDisplay;
@property(nonatomic) BOOL hasTail; // @synthesize hasTail=_hasTail;
- (void)prepareForDisplay;
- (void)longPressGestureRecognized:(id)arg1;
- (void)doubleTapGestureRecognized:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
@property(nonatomic) BOOL orientation; // @synthesize orientation=_orientation;
- (void)copy:(id)arg1;
- (void)prepareForReuse;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(nonatomic) id <CKBalloonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, copy) NSString *description;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

