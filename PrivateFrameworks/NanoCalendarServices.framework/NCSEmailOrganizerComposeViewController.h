//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICQuickboardCompositionViewController.h"

#import "PUICQuickboardCompositionViewControllerDelegate.h"

@class NSAttributedString, NSString;

@interface NCSEmailOrganizerComposeViewController : PUICQuickboardCompositionViewController <PUICQuickboardCompositionViewControllerDelegate>
{
    CDUnknownBlockType _completionHander;
    NSAttributedString *_messageTitle;
}

+ (id)composerWithEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)emailMessageSender;
+ (id)_textOptions;
+ (id)composerWithRecipients:(id)arg1 title:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)_recipientsForEvent:(id)arg1;
+ (BOOL)canSendMail;
- (id)contactForRawAddress:(id)arg1;
- (void)composeControllerFinished:(id)arg1;
- (void)composeControllerCancelled:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHander; // @synthesize completionHander=_completionHander;
@property(retain, nonatomic) NSAttributedString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(readonly, nonatomic) BOOL canSendMail;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

