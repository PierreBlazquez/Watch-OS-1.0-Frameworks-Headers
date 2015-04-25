//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TPStarkHardPauseButtonDelegate.h"
#import "TPStarkInCallButtonsViewDelegate.h"
#import "TPStarkPhoneCallGalleryViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSArray, NSString, NSTimer, TPStarkInCallButtonsView, TPStarkInCallHardPauseButton, TPStarkPhoneCallGalleryView, TUCall, TUReplyWithMessageStore, UIView;

@interface TPStarkInCallViewController : UIViewController <TPStarkPhoneCallGalleryViewDelegate, TPStarkHardPauseButtonDelegate, TPStarkInCallButtonsViewDelegate, UIActionSheetDelegate>
{
    TUReplyWithMessageStore *_replyWithMessageStore;
    unsigned short _currentMode;
    id <TPStarkInCallViewControllerDelegate> _delegate;
    NSArray *_primaryPhoneCalls;
    NSArray *_conferenceParticipants;
    TUCall *_incomingPhoneCall;
    UIView *_flippyView;
    TPStarkPhoneCallGalleryView *_galleryView;
    TPStarkInCallButtonsView *_buttonsView;
    TPStarkInCallHardPauseButton *_hardPauseButton;
    NSTimer *_viewUpdateClockTickTimer;
    TUCall *_callToDecline;
    TUCall *_failedCall;
}

- (BOOL)isAddCallAllowed;
@property(readonly) BOOL isDismissable;
- (id)currentActivePhoneCall;
- (void)setPrimaryPhoneCalls:(id)arg1 conferencePhoneCalls:(id)arg2 incomingPhoneCall:(id)arg3;
- (BOOL)canSendMessage;
- (BOOL)isKeypadAllowed;
- (BOOL)isSwapCallsAllowed;
- (BOOL)isMergeCallsAllowed;
- (void)inCallButtonWasTapped:(id)arg1;
- (void)hardPauseButtonDidChangeVisibility:(id)arg1;
- (id)conferenceParticipantCallsForPhoneCall:(id)arg1;
- (void)highlightHardPauseButton;
- (void)selectNextHighlightableControlAscending:(BOOL)arg1;
- (BOOL)isSpringBoardPasscodeLocked;
- (BOOL)areIncomingCallOptionsAllowed;
- (void)_sendMessageResponse:(id)arg1 toCall:(id)arg2;
@property(retain) TUCall *failedCall; // @synthesize failedCall=_failedCall;
- (void)handleAlertControllerSendMessageResponse:(id)arg1;
- (id)replyWithMessageStore;
@property(retain) TUCall *callToDecline; // @synthesize callToDecline=_callToDecline;
- (BOOL)canSendMessageToCall:(id)arg1;
- (void)updateButtonsViewState;
- (BOOL)currentCallStateWarrantsCallWaitingMode;
@property(retain) TUCall *incomingPhoneCall; // @synthesize incomingPhoneCall=_incomingPhoneCall;
@property(copy) NSArray *conferenceParticipants; // @synthesize conferenceParticipants=_conferenceParticipants;
@property(copy) NSArray *primaryPhoneCalls; // @synthesize primaryPhoneCalls=_primaryPhoneCalls;
- (id)__sanitizedPrimaryPhoneCallOrdering:(id)arg1;
- (void)viewUpdateClockTickTimerFired:(id)arg1;
@property(retain) NSTimer *viewUpdateClockTickTimer; // @synthesize viewUpdateClockTickTimer=_viewUpdateClockTickTimer;
@property(retain) TPStarkInCallHardPauseButton *hardPauseButton; // @synthesize hardPauseButton=_hardPauseButton;
@property(retain) TPStarkInCallButtonsView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(retain) TPStarkPhoneCallGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(retain) UIView *flippyView; // @synthesize flippyView=_flippyView;
- (void)callFailedNotification:(id)arg1;
- (void)muteStateChangedNotification:(id)arg1;
- (id)representativePhoneCallForConferenceForGalleryView:(id)arg1;
- (id)primaryPhoneCallsForGalleryView:(id)arg1;
- (id)allConferenceParticipantCalls;
- (void)setIsMuted:(BOOL)arg1;
@property unsigned short currentMode; // @synthesize currentMode=_currentMode;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
@property id <TPStarkInCallViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (BOOL)isMuted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

