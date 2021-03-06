//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_UISiriWaveyViewDelegate.h"

@class NSString, UIButton, UIDictationMeterView, UIKeyboardDicationBackground, _UISiriWaveyView;

@interface UIDictationView : UIView <_UISiriWaveyViewDelegate>
{
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    UIButton *_waveTapEndpointButton;
    int _state;
    BOOL _keyboardInTransition;
    BOOL _automaticAppearanceWasEnabled;
    _UISiriWaveyView *_waveyView;
    UIDictationMeterView *_meterView;
}

+ (struct CGSize)viewSize;
+ (Class)dictationViewClass;
+ (struct CGSize)layoutSize;
+ (id)activeInstance;
+ (id)sharedInstance;
- (struct CGPoint)positionForShow;
- (void)applicationEnteredBackground;
- (struct CGSize)currentScreenSize;
- (float)audioLevelForWaveyView:(id)arg1;
- (id)endpointButton;
- (struct CGPoint)backgroundOffset;
- (id)createEndpointButtonWithRect:(struct CGRect)arg1 action:(SEL)arg2;
- (void)endpointButtonPressed;
- (BOOL)drawsOwnBackground;
- (void)returnToKeyboard;
- (BOOL)isShowing;
- (void)prepareForReturnToKeyboard;
- (id)endpointButtonImageWithRect:(struct CGRect)arg1 pressed:(BOOL)arg2;
- (void)finishReturnToKeyboard;
- (void)highlightEndpointButton;
- (void)applicationWillResignActive;
- (BOOL)visible;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint)contentOffset;
- (void)setState:(int)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

